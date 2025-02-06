#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    int id;
    std::string name;
    std::vector<int> enrolledCourses;
    static const int MAX_ALLOWED_CREDITS;

public:
    Student(int sid, std::string sname);

    int getId() const;
    std::string getName() const;
    std::vector<int> getEnrolledCourses() const;

    bool takesCourse(int courseId) const;
    bool takeCourse(int courseId);
    void dropCourse(int courseId);
    void printDetails() const;
};

#endif

