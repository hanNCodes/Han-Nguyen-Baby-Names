#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>


using namespace std;

struct nameData {
    string name;
    int count;
    int year;
    char sex;
};

int main() {
  // Open the baby names file, store all the data within a vector, each element of the vector should be a struct.
  vector<nameData> dataList;
  vector<string> recordedNames;
  vector<int> indexOfSameName;
  ifstream myReader;
  ofstream myWriter;
  string line;
  myReader.open("names.csv");
  myWriter.open("newData.txt");
  stringstream stream1;
  
    while (myReader.good()) {
      nameData temp;
      getline(myReader, line);
        if (myReader.fail()) {
          break;
        }
      //gets name
        size_t found = line.find(",");
          string nameT = line.substr(0, found);
            line = line.substr(found+1);
      //gets sex
          char sexT = line.at(0);
            line = line.substr(2);
      //gets count
        int countT;
        found = line.find(",");
          stream1.clear();
          stream1.str(line.substr(0,found));
          stream1 >> countT;
            line = line.substr(found+1);
      //gets year
        int yearT;
        stream1.clear();
          stream1.str(line.substr(0));
          stream1 >> yearT;
      temp.name = nameT;
      temp.sex = sexT;
      temp.count = countT;
      temp.year = yearT;
        dataList.push_back(temp);
      
    }
  myReader.close();

    
      
  //how to iterate through a vector of structure and add total count of same names
  for(int i = 1; i < dataList.size(); i++) {
    if(dataList.at(i).name == " ... ") {
      continue;
    }

    int totalCount = dataList.at(i).count;
    
    for(int o = i+1; o < dataList.size(); o++) {
      if(dataList.at(o).name == dataList.at(i).name) {
        totalCount += dataList.at(o).count;
        dataList.at(o).name = " ... ";
      }
    }
    myWriter << dataList.at(i).name << " " << totalCount << " " << dataList.at(i).sex << "\n";
  }

   
  myWriter.close();
  cout << "finished";
  
  return 0;
}

