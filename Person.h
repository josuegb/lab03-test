#ifndef LAB03_PERSON_H
#define LAB03_PERSON_H


#include <string>
#include <ostream>

using namespace std;

/**
 * Abstract Class of Person
 */
class Person {
  protected:
    string firstName;
    string lastName;
    int id;

  public:
    Person();

    Person(const string &firstName, const string &lastName, int id);

    virtual ~Person();

    const string &getFirstName() const;

    const string &getLastName() const;

    int getId() const;

    void setFirstName(const string &firstName);

    void setLastName(const string &lastName);

    void setId(int id);

    friend ostream &operator<<(ostream &os, const Person &person);

};


#endif //LAB03_PERSON_H
