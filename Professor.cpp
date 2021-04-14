#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor() {}

Professor::Professor(const string &firstName, const string &lastName, int id) : Person(firstName, lastName,
                                                                                               id) {}

Professor::~Professor() {

}

const vector<Student *> &Professor::getStudentList() const {
  return studentList;
}

void Professor::addStudent(Student *_studentList) {
  studentList.push_back(_studentList);
}

ostream &operator<<(ostream &os, const Professor &professor) {
  os << "firstName: " << professor.getFirstName() << endl
     << "lastName: " << professor.getLastName() << endl;

  unsigned int studentListLength = professor.studentList.size();
  if (studentListLength > 0) {

    os << "students: ";
    for (unsigned int length = 0; length < studentListLength; ++length) {
      os << professor.studentList[length]->getFirstName() << ", ";
    }
  }
  return os;
}

