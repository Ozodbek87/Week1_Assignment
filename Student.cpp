#include "Student.h"
#include <algorithm>

const int Student::MAX_ALLOWED_CREDITS = 18;

Student::Student(int sid, std::string sname) : id(sid), name(sname) {}

int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
std::vector<int> Student::getEnrolledCourses() const { return enrolledCourses; }

bool Student::takesCourse(int courseId) const {
    return std::find(enrolledCourses.begin(), enrolledCourses.end(), courseId) != enrolledCourses.end();
}

bool Student::takeCourse(int courseId) {
    if (enrolledCourses.size() < MAX_ALLOWED_CREDITS) {
        enrolledCourses.push_back(courseId);
        return true;
    }
    return false;
}

void Student::dropCourse(int courseId) {
    enrolledCourses.erase(std::remove(enrolledCourses.begin(), enrolledCourses.end(), courseId), enrolledCourses.end());
}

void Student::printDetails() const {
    std::cout << "Student ID: " << id << ", Name: " << name << "\nEnrolled Courses: ";
    for (int c : enrolledCourses) std::cout << c << " ";
    std::cout << "\n";
}