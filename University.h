#ifndef LAB03_UNIVERSITY_H
#define LAB03_UNIVERSITY_H

#include <vector>
#include <ostream>
#include "Professor.h"
#include "Student.h"

class University {

  private:
    string name;
    Professor professor;
    Student student;
    vector<Professor *> professorList;
    vector<Student *> studentList;

  public:
    University();

    University(const string &name);

    University(const string &name, const Professor &professor, const Student &student);

    virtual ~University();

    const string &getName() const;

    void setName(const string &name);

    const Professor &getProfessor() const;

    void setProfessor(const Professor &professor);

    const Student &getStudent() const;

    void setStudent(const Student &student);

    const vector<Professor *> &getProfessorList() const;

    void addProfessor(Professor *_professor);

    const vector<Student *> &getStudentList() const;

    void addStudent(Student *_student);

    friend ostream &operator<<(ostream &os, const University &university);

};


#endif //LAB03_UNIVERSITY_H
