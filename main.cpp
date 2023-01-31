#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
  string szo,szo2;
  cout <<"kerem a beolvasando szot";
  getline (cin,szo);
  int elofordul=0;
  size_t hely;
  hely=szo.find("r");
  if(hely!=string::npos){
    szo.replace (hely,1,"o");

  }
  while(hely!string :: npos){
    hely=szo.find("r",hely+1);
    if(hely!=string::npos){
      szo.replace(hely,1,"o");

    }
  }
  hely=szo.find("m");
  if(hely!=string::npos){
    szo.replace(hely,1,"i");
  }
  while(hely!string :: npos){
      hely=szo,find("m",hely+1);
       if(hely!=string::npos){
        szo.replace(hely,1,"i");
       }
  }
  cout <<szo<<endl;
    return 0;
}
