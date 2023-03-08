#include <iostream>

using namespace std;

int main()
{
  int  a [100][100],m,n,i,j;
  cout<<"m=";
  cin >>m;
  cout <<"n=";
  cin >>n;
  for(i=0;i<m;i++){
  for(j=0;j<n;j++){

  cin>>a[i][j];
  }
  }
  for(i=0;i<m;i++){
    int max=0;
    for(j=0;j<n;j++){
      if(a[i][j]>max && a [i][j]<21)
        max=a[i][j];
    }

      if(max==0){

      cout<<"nu exista"<<endl;
  }else{
  cout<<max<<endl;}
  }


    return 0;
}
