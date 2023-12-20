#include <iostream>
#include <vector>
#include <algorithm>

// Define a structure for a time slot
struct TimeSlot {
    std::string day;
    int start_time;
    int end_time;
};

// Function to find the earliest common time slot
TimeSlot findEarliestCommonTime(const std::vector<TimeSlot>& personA, const std::vector<TimeSlot>& personB) {
    TimeSlot earliestCommonTime;

    // Your scheduling algorithm goes here

    return earliestCommonTime;
}

// Function to check if two time slots overlap
bool doTimeSlotsOverlap(const TimeSlot& slot1, const TimeSlot& slot2) {
    return (slot1.day == slot2.day) &&
           (std::max(slot1.start_time, slot2.start_time) < std::min(slot1.end_time, slot2.end_time));
}

// Function to resolve time conflicts by suggesting an alternative time
TimeSlot resolveTimeConflict(const TimeSlot& conflictedSlot, const std::vector<TimeSlot>& personA, const std::vector<TimeSlot>& personB) {
    TimeSlot alternativeSlot = conflictedSlot;

    // Your conflict resolution algorithm goes here

    return alternativeSlot;
}

// Function to display a time slot
void displayTimeSlot(const TimeSlot& timeSlot) {
    std::cout << timeSlot.day << " " << timeSlot.start_time << "-" << timeSlot.end_time;
}

int main() {
    // Sample schedules for Person A and Person B
    std::vector<TimeSlot> scheduleA = {{"Monday", 10, 12}, {"Tuesday", 14, 16}, {"Wednesday", 9, 11}};
    std::vector<TimeSlot> scheduleB = {{"Monday", 11, 13}, {"Tuesday", 15, 17}, {"Wednesday", 10, 12}};

    // Find the earliest common time slot
    TimeSlot earliestCommonTime = findEarliestCommonTime(scheduleA, scheduleB);

    // Check for time conflicts
    for (const auto& slotA : scheduleA) {
        for (const auto& slotB : scheduleB) {
            if (doTimeSlotsOverlap(slotA, slotB)) {
                std::cout << "Time conflict detected!\n";
                std::cout << "Conflicting time slot for Person A: ";
                displayTimeSlot(slotA);
                std::cout << "\nConflicting time slot for Person B: ";
                displayTimeSlot(slotB);

                // Resolve conflict by suggesting an alternative time
                TimeSlot alternativeSlot = resolveTimeConflict(slotA, scheduleA, scheduleB);

                std::cout << "\nSuggested alternative time slot: ";
                displayTimeSlot(alternativeSlot);
                std::cout << std::endl;
            }
        }
    }

    return 0;
}

