#include"Soldier.h"

Soldier::Soldier() {
  firstName = "None";
  lastName = "None";
  //weight = 165; // we cannot access private attributes
  clearance="Level 1";
}
Soldier::Soldier(string f,string l,string c,double w) {
  firstName = f;
  lastName = l;
  clearance = c;
  //weight = w;  // we cannot access private attributes
}
void Soldier::preferredName(string n) {
  firstName = n;
}
void Soldier::changeWeight(double w) {
  //weight = w;
}