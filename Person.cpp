#include "Person.h"


Person::Person() {}

Person::Person(const string &firstName, const string &lastName, int id) : firstName(firstName),
                                                                                  lastName(lastName),
                                                                                  id(id) {}

Person::~Person() {

}

const string &Person::getFirstName() const {
  return firstName;
}

const string &Person::getLastName() const {
  return lastName;
}

int Person::getId() const {
  return id;
}

void Person::setFirstName(const string &firstName) {
  Person::firstName = firstName;
}

void Person::setLastName(const string &lastName) {
  Person::lastName = lastName;
}

void Person::setId(int id) {
  Person::id = id;
}

ostream &operator<<(ostream &os, const Person &person) {
  os << "firstName: " << person.firstName << " lastName: " << person.lastName << " id: " << person.id;
  return os;
}

