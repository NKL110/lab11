#include <iostream>
#include "student.h"
#include <string>
#include <vector>


namespace LeeNaKyung2593202 {
  void readWritestudentDataFile(std::ifstream& fin, std::ofstream& fout){
    std::vector<student> v;
    while(!fin.eof()){
        student s;
        std::stream
    }
  };
  parsingstudent();
  
}
int main(){
    using namespace LeeNaKyung2593202;
    std::ifstream fin("studentData.txt");
    if( fin.fail()){
        std::cout<<"Input file opening failed.\n";
        std::exit(1);
    }
    std::ofstream fout;
    std::string fileName;
    std::cout <<"Enter file name:";
    std::cin >> fileName;
    fout.open(fileName);
    if(fout.fail())

    student s;
    s.
    std::cout<<s;
    return 0;

 
}