#include <iostream>

using namespace std;

int main()
{
    int v[100][100],i,j,S1=0,S2=0;
   ifstream in("input.txt");
    in>>n;
   for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      in >> v[i][j];
    }
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
  if(i<j && i+j<n-1){
        S1=S1+v[i][j];
      }
    }
    if(i>j && i+j>n-1){
      S2=S2+v[i][j];

      }
    }
    if (S1<<S2)
      cout <<"deli magyobb";
      } else{
    cout <<"eszaki a nagyobb"
    }
    return 0;
}
