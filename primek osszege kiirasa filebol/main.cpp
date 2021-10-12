#include <iostream>

using namespace std;

int main()
{
   ifstream input("in.txt");
   int i,n,j,v[100][100],S=0;
   input>> n;
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        input>>v[i][j];
   bool prim=true;
   for(int oszto=2;oszto<v[i][j]/2+1;oszto++){
    if(v[i][j]%oszto ==0){
      prim=false;
    }
   }
   if (prim){
    S+=v[i][j];
   }
      }
   }
   cout <<S<<endl;
    return 0;
}
