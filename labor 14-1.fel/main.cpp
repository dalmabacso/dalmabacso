#include <iostream>

using namespace std;



    int osszeg (int v[],int n,int i){
    if (i==n-1){
      return v[i];

    }
    return v[i]+osszeg(v,n,i+1);
    }
    int main ()
    {
      int v[5]={1,2,3,4,5};
      int n=5,S=0;
      for (int i=0;i<n;i++){
          S=S+v[i];

      }
      cout <<S<<" ";
      cout << osszeg(v,n,0);
      return 0;
    }



