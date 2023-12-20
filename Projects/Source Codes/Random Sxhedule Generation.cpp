#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Define a structure for a time slot
struct TimeSlot {
    std::string day;
    int start_time;
    int end_time;
};

// Function to generate a random schedule
std::vector<TimeSlot> generateRandomSchedule() {
    std::vector<TimeSlot> schedule;
    std::string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    
    for (int i = 0; i < 3; ++i) {
        TimeSlot slot;
        slot.day = days[rand() % 5];
        slot.start_time = rand() % 12 + 8;  // Random start time between 8 AM and 7 PM
        slot.end_time = slot.start_time + rand() % 4 + 1;  // Random duration between 1 and 4 hours
        schedule.push_back(slot);
    }

    return schedule;
}

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

int main() {
    // Generate random schedules for Person A and Person B
    std::vector<TimeSlot> scheduleA = generateRandomSchedule();
    std::vector<TimeSlot> scheduleB = generateRandomSchedule();

    // Find the earliest common time slot
    TimeSlot earliestCommonTime = findEarliestCommonTime(scheduleA, scheduleB);

    // Display the result
    std::cout << "Earliest common time slot: ";
    displayTimeSlot(earliestCommonTime);
    std::cout << std::endl;

    return 0;
}

