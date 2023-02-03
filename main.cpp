#include <iostream>

using namespace std;

int main()
{
  int i,j,m,n,s=0,a[100][100];
  cout<<"n=";
  cin>>n;
  cout<<"n=";
  cin >>n;
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      cout<<"a["<<i<<"]["<<j<<"]=";
      cin >>a[i][j];

    }
  }
  for(i=0;i<=m+1;i++){
    a[i][0]=11;
    a[i][n+1]=11;

  }
  for(j=0;j<=n+1;j++){
  a[0][j]=11;
    a[m+1][j]=11;
  }
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      int min=a[i-1][j];
      if(a[i+1][j]<min) min=a[i+1][j];
      if(a[i][j-1]<min) min=a[i][j-1];
      if(a[i][j+1]<min) min=a[i][j+1];
      if(a[i][j]<min)
      s=s+(min-a[i][j]);
    }
  }
  cout<<s;
  return 0;
}







    return 0;
}
