#include <iostream>

using namespace std;

int main()
{
    int v[100][100],n,i,j,S=0,oszto;
    cout <<"n=";
    cin >> n;
    for (i=0;i<n;i++){
      for(j=0;j<n;j++){
        cin >> v[i][j];
        bool prim=true;
        for(i=0;i<n;i++){
          for(j=0;j<n;j++){
            for(oszto=2;oszto<v[i][j]/2+1;oszto++){
              if(v[i][j]%oszto==0){
                prim=false;
              }
            bool prim=true;

          }
        }
      if(prim){
        S+=v[i][j];
      }
    cout <<"S="<<S;
        }
        }
    return 0;
}
