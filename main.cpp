#include "LMS.h"
#include <iostream>

int main() {
    LMS myLMS("University LMS");

    int numStudents, numCourses;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        int id;
        std::string name;
        std::cout << "Enter Student ID and Name: ";
        std::cin >> id;
        std::cin.ignore();
        std::getline(std::cin, name);
        myLMS.addStudent(Student(id, name));
    }

    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    for (int i = 0; i < numCourses; i++) {
        int id, credits;
        std::string name;
        std::cout << "Enter Course ID, Name, and Credits: ";
        std::cin >> id;
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cin >> credits;
        myLMS.addCourse(Course(id, name, credits));
    }

    int enrollments;
    std::cout << "Enter the number of enrollments: ";
    std::cin >> enrollments;

    for (int i = 0; i < enrollments; i++) {
        int studentId, courseId;
        std::cout << "Enter Student ID and Course ID: ";
        std::cin >> studentId >> courseId;
        myLMS.addStudentToCourse(studentId, courseId);
    }

    myLMS.printDetails();
    return 0;
}
