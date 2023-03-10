#include <iostream>

using namespace std;
 int joc(int n){
 int cr=0;
 for(int i=n;i>1;i--){
  if(n%i==0){
    cr++;
  }
 }
 return cr;
 }
 int main()
 {
   int n;
   cin >>n;
   cout<<joc(n);
   return 0;
 }
