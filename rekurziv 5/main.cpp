#include <iostream>

using namespace std;
int szam(int n){
if (n==0){return 1;}
return n%10*szam(n/10);

}

int main()
{
  cout << szam(1234)<<endl;

    return 0;
}
