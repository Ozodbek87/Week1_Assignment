#ifndef LMS_H
#define LMS_H

#include "Student.h"
#include "Course.h"
#include <vector>

class LMS {
private:
    std::string name;
    std::vector<Student> students;
    std::vector<Course> courses;

public:
    LMS(std::string lmsName);

    void addStudent(Student student);
    void addCourse(Course course);
    void addStudentToCourse(int studentId, int courseId);
    void printDetails() const;
};


#endif //LMS_H
