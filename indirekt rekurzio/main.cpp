#include <iostream>

using namespace std;

    int paratlan(int n);
    int paros(int n);
    if(n==0){
      return 0;}
    return n+paratlan(n-1);}
    int paratlan(int n){
      if (n==1){
          return 1 ;}
          return n+paros(n-1);
    }
    int main()
      {
        cout <<paratlan(n)<<endl;
        cout << paros (4)<<endl;
        return 0;
      }



