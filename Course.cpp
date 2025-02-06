#include "Course.h"
#include <algorithm>

Course::Course(int cid, std::string cname, int creds) : id(cid), name(cname), credits(creds) {}

int Course::getId() const { return id; }
std::string Course::getName() const { return name; }
int Course::getCredits() const { return credits; }

bool Course::hasStudent(int studentId) const {
    return std::find(students.begin(), students.end(), studentId) != students.end();
}

bool Course::addStudent(int studentId) {
    if (!hasStudent(studentId)) {
        students.push_back(studentId);
        return true;
    }
    return false;
}

void Course::dropStudent(int studentId) {
    students.erase(std::remove(students.begin(), students.end(), studentId), students.end());
}

void Course::printDetails() const {
    std::cout << "Course ID: " << id << ", Name: " << name << ", Credits: " << credits << "\nEnrolled Students: ";
    for (int s : students) std::cout << s << " ";
    std::cout << "\n";
}

