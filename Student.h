#ifndef LAB03_STUDENT_H
#define LAB03_STUDENT_H

#include <ostream>
#include <vector>
#include "Person.h"
#include "Professor.h"


class Student: public Person {
  private:
    vector<Professor *> professorList;

  public:
    Student();

    Student(const string &firstName, const string &lastName, int id);

    virtual ~Student();

    const vector<Professor *> &getProfessorList() const;

    void addProfessor(Professor *_professor);

    friend ostream &operator<<(ostream &os, const Student &student);

};


#endif //LAB03_STUDENT_H
