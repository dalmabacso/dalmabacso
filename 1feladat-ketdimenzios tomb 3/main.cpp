#include <iostream>
#include<string>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
string szavak[100][100];
ifstream in ("input.txt");
ofstream out ("output.txt");
int i,j,n;
in >>n;
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      in >> szavak [i][j];
    }
    }
  for (i=0;i<-1;i++){
    for (j=i+1;j<n;j++){
  transform(szavak [i][j].begin(),szavak [i][j].begin +2,szavak [i][j].begin(),::toupper);
  transform(szavak [j][i].end()-2,szavak [j][i].end(),szavak [j][i].end()-2,::toupper);
    }


 }
 for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        out << szavak [i][j]<< " ";
    }
    out <<endl;

    }
    return 0;
}
