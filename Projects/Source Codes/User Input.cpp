#include <iostream>
#include <vector>

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

// Function to display a time slot
void displayTimeSlot(const TimeSlot& timeSlot) {
    std::cout << timeSlot.day << " " << timeSlot.start_time << "-" << timeSlot.end_time;
}

// Function to get user input for schedules
std::vector<TimeSlot> getUserSchedule(const std::string& personName) {
    std::cout << "Enter schedule for " << personName << " (day start_time end_time):" << std::endl;
    
    std::vector<TimeSlot> schedule;
    for (int i = 0; i < 3; ++i) {
        TimeSlot slot;
        std::cin >> slot.day >> slot.start_time >> slot.end_time;
        schedule.push_back(slot);
    }

    return schedule;
}

int main() {
    // Get schedules from users
    std::vector<TimeSlot> scheduleA = getUserSchedule("Person A");
    std::vector<TimeSlot> scheduleB = getUserSchedule("Person B");

    // Find the earliest common time slot
    TimeSlot earliestCommonTime = findEarliestCommonTime(scheduleA, scheduleB);

    // Display the result
    std::cout << "Earliest common time slot: ";
    displayTimeSlot(earliestCommonTime);
    std::cout << std::endl;

    return 0;
}

