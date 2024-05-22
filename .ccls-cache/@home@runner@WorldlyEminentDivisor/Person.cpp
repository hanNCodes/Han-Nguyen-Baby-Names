#include"Person.h"
Person::Person() {
  firstName = "";
  lastName = "";
}
/*Person::Person(string f, string l,double w) {
  firstName = f;
  lastName = l;
  weight = w;
}*/
void Person::setFirstName(string f) {
  firstName = f;
}
string Person::getFirstName() {
  return firstName;
}
void Person::setWeight(double w) {
  weight = w;
}
double Person::getWeight() {
  return weight;
}