#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

struct nameData {
    string name;
    int count;
    char sex;
};

int main() {
  // Create a vector
  vector<nameData> allData;
  nameData data;
  ifstream myReader;
  string line;
  myReader.open("names.csv");
  cin >> line;
  
  
  return 0;
}