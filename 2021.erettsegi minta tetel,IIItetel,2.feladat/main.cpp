#include <iostream>

using namespace std;

int main()
{
  int m,n,i,j,a[100][100],x;
  cout<<"m=";
  cin>>m;
  cout<<"n=";
  cin>>n;
  for(i=n;i>=0;i--){
    for(j=n;j>=0;j--){
        a[i][j]=x*x;
    x=x+2;

  }


    return 0;
}
