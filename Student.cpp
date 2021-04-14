#include "Student.h"

Student::Student() {}

Student::Student(const string &firstName, const string &lastName, int id) : Person(firstName, lastName, id) {}

Student::~Student() {

}

const vector<Professor *> &Student::getProfessorList() const {
  return professorList;
}

void Student::addProfessor(Professor *_professor) {
  professorList.push_back(_professor);
}

ostream &operator<<(ostream &os, const Student &student) {
  os << "firstName: " << student.getFirstName() << endl
     << "lastName: " << student.getLastName() << endl;

  unsigned int professorListLength = student.professorList.size();
  if (professorListLength > 0) {

    os << "professors: ";
    for (unsigned int length = 0; length < professorListLength; ++length) {
      os << student.professorList[length]->getFirstName() << ", ";
    }
  }
  return os;
}
