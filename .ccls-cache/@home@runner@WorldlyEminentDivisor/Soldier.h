#include"Person.h"
class Soldier: public Person {
  private:
    string clearance;
  public:
    Soldier();
    Soldier(string,string,string,double);
    string getRank();
    void setRank(string);
    void preferredName(string);
    void changeWeight(double);
};