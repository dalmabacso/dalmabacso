#include <iostream>

using namespace std;

int hatvany(int n,int x){
if (n==1){return x;}
return x*hatvany(n-1,x);

}
int main ()
{
  cout << hatvany (10,2)<<endl;
  return 0;

}
