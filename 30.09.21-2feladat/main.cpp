#include <iostream>

using namespace std;

int main()
{
    int v[100][100],n,i,j,S1=0,S2=0;
   cout << "n=";
   cin >> n;
   for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      cin >> v[i][j];
    }
   }
      if (i+j==n-1){
        S1=S1+m[i][j];
      }
    cout << S1<<endl;
    }
    return 0;
}
