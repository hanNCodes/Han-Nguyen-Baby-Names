#include<string>
using namespace std;
class Person {
  private:
    double weight;
  protected:
    string firstName;
    string lastName;
  public:
    // No Argument Constructors
    Person();
    // Parametrized Constructors
    Person(string,string,double);
    // Mutators (setters)
    void setFirstName(string);
    void setLastName(string);
    void setWeight(double);
    // Accessors (getters)
    string getFirstName();
    string getLastName();
    double getWeight();
};