#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n,i,prim=1;
cout<<”n=”;
 cin>>n;
for (i=2;i<=sqrt(float(n));i++)
if (n%i==0) prim=0;
if (n<2) prim=0;
if (prim) cout<<”Prímszám!”;
else cout<<”Nem prímszám!”;
return 0;

}
