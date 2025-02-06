#include "LMS.h"

LMS::LMS(std::string lmsName) : name(lmsName) {}

void LMS::addStudent(Student student) {
    students.push_back(student);
}

void LMS::addCourse(Course course) {
    courses.push_back(course);
}

void LMS::addStudentToCourse(int studentId, int courseId) {
    for (Student &s : students) {
        if (s.getId() == studentId) {
            for (Course &c : courses) {
                if (c.getId() == courseId) {
                    if (s.takeCourse(courseId) && c.addStudent(studentId)) {
                        std::cout << "Student " << studentId << " enrolled in Course " << courseId << "\n";
                    } else {
                        std::cout << "Enrollment failed (Maybe student is at max credits or already enrolled).\n";
                    }
                    return;
                }
            }
        }
    }
    std::cout << "Student or Course not found.\n";
}

void LMS::printDetails() const {
    std::cout << "LMS Name: " << name << "\n\nStudents:\n";
    for (const Student &s : students) s.printDetails();
    std::cout << "\nCourses:\n";
    for (const Course &c : courses) c.printDetails();
}
