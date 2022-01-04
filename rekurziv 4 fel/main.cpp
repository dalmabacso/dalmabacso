#include <iostream>

using namespace std;
int szam (int n){
if (n==0){return 0;}
return 1+szam(n/10);

}

int main()
{
    cout <<szam(123456)<<endl;
    return 0;
}
