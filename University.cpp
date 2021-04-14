#include <sstream>
#include "University.h"

University::University() {}

University::University(const string &name) : name(name) {}

University::University(const string &name, const Professor &professor, const Student &student) : name(
    name), professor(professor), student(student) {}

University::~University() {

}

const string &University::getName() const {
  return name;
}

void University::setName(const string &name) {
  University::name = name;
}

const Professor &University::getProfessor() const {
  return professor;
}

void University::setProfessor(const Professor &professor) {
  University::professor = professor;
}

const Student &University::getStudent() const {
  return student;
}

void University::setStudent(const Student &student) {
  University::student = student;
}

const vector<Professor *> &University::getProfessorList() const {
  return professorList;
}

void University::addProfessor(Professor *_professor) {
  professorList.push_back(_professor);
}

const vector<Student *> &University::getStudentList() const {
  return studentList;
}

void University::addStudent(Student *_studentList) {
  studentList.push_back(_studentList);
}

ostream &operator<<(ostream &os, const University &university) {
  os << "name: " << university.name << endl
     << "professor: " << university.professor.getFirstName() << endl
     << "student: " << university.student.getFirstName() << endl;

  unsigned int professorListLength = university.professorList.size();
  if (professorListLength > 0) {

    os << "additional professors: ";
    for (unsigned int length = 0; length < professorListLength; ++length) {
      os << university.professorList[length]->getFirstName() << ", ";
    }
  }

  os << endl;

  unsigned int studentListLength = university.studentList.size();
  if (professorListLength > 0) {

    os << "additional student: ";
    for (unsigned int length = 0; length < studentListLength; ++length) {
      os << university.studentList[length]->getFirstName() << ", ";
    }
  }

  return os;
}
