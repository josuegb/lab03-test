#ifndef LAB03_PROFESSOR_H
#define LAB03_PROFESSOR_H

#include <ostream>
#include <vector>
#include "Person.h"
#include "Student.h"

class Professor : public Person {
  private:
    vector<Student *> studentList;

  public:
    Professor();

    Professor(const string &firstName, const string &lastName, int id);

    virtual ~Professor();

    const vector<Student *> &getStudentList() const;

    void addStudent(Student *_student);

    friend ostream &operator<<(ostream &os, const Professor &professor);
};

#endif //LAB03PROFESSOR_H
