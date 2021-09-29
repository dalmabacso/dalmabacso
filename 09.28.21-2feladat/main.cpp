#include <iostream>

using namespace std;

int main()
{
    int m[100][100],n,i,j,P1=1,P2=1,P3=1,P4=1;
    cout << "n=";
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> m[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        }
    }
    if (i<j && i+j<n-1){
        P1=m[i][j]*P1;
    }
    if (i<j && i+j>n-1){
        P2=m[i][j]*P2;
    }
    if (i>j && i+j>n-1){
        P3=m[i][j]*P3;
    }
    if (i>j && i+j<n-1){
        P4=m[i][j]*P4;
    }
     cout << P1<<endl;
     cout << P2<<endl;
     cout << P3<<endl;
     cout << P4<<endl;

    return 0;
}
