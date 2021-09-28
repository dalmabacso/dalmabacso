#include <iostream>

using namespace std;

int main()
{
    int m[100][100],n,i,j,S1=0,S2=0;
    cin >>n;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++)
        cin >> m[i][j];

      }
  }
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if (i+j<n-1);
    S1=S1+m[i][j];
    if (i+j>n-1)
      S2=S2+m[i][j];

  }
}
    cout << S1<< S2<<endl;
    }
    return 0;

