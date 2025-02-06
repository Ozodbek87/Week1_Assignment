#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>
#include <string>

class Course {
private:
    int id;
    std::string name;
    int credits;
    std::vector<int> students;

public:
    Course(int cid, std::string cname, int creds);

    int getId() const;
    std::string getName() const;
    int getCredits() const;

    bool hasStudent(int studentId) const;
    bool addStudent(int studentId);
    void dropStudent(int studentId);
    void printDetails() const;
};



#endif //COURSE_H
