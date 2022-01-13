#include <iostream>

using namespace std;

int maximum (int v[],int n){
  int m=v[0];
  int main =v[0];
  for (int i=1;i<n;i++){
    if (m<v[i]){m=v[i];}
  }
  return 0;

  }

    int main ()
    {
    int v[10]={1,2,5,6,3,9,77,45,7,0};
    cout << maximum (v,10);
    return 0;

    }
