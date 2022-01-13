#include <iostream>

using namespace std;

int fakt (int n){
int P=1;
for (int i=1;i<=n;i++)
{
  P*=i;

  }
return P;

}
int fakt_rek(int n){
if (n==1)return 1;
return n*fakt_rek(n-1);
}
int main()
{
  cout << fakt_rek(6)<<endl;
  return 0;
}

