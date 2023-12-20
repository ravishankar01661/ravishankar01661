#include <iostream>
#include <fstream>
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

// Function to save schedule to a file with error handling
void saveScheduleToFile(const std::vector<TimeSlot>& schedule, const std::string& fileName) {
    std::ofstream outFile(fileName);

    if (outFile.is_open()) {
        for (const auto& slot : schedule) {
            outFile << slot.day << " " << slot.start_time << " " << slot.end_time << std::endl;
        }
        outFile.close();
    } else {
        std::cerr << "Error: Unable to open file for writing - " << fileName << std::endl;
    }
}

// Function to load schedule from a file with error handling
std::vector<TimeSlot> loadScheduleFromFile(const std::string& fileName) {
    std::vector<TimeSlot> schedule;
    std::ifstream inFile(fileName);

    if (inFile.is_open()) {
        TimeSlot slot;
        while (inFile >> slot.day >> slot.start_time >> slot.end_time) {
            schedule.push_back(slot);
        }
        inFile.close();
    } else {
        std::cerr << "Error: Unable to open file for reading - " << fileName << std::endl;
    }

    return schedule;
}

int main() {
    // Save and load schedules from files with error handling
    saveScheduleToFile(scheduleA, "personA_schedule.txt");
    saveScheduleToFile(scheduleB, "personB_schedule.txt");

    std::vector<TimeSlot> loadedScheduleA = loadScheduleFromFile("personA_schedule.txt");
    std::vector<TimeSlot> loadedScheduleB = loadScheduleFromFile("personB_schedule.txt");

    // Find the earliest common time slot
    TimeSlot earliestCommonTime = findEarliestCommonTime(loadedScheduleA, loadedScheduleB);

    // Display the result
    std::cout << "Earliest common time slot: ";
    displayTimeSlot(earliestCommonTime);
    std::cout << std::endl;

    return 0;
}

