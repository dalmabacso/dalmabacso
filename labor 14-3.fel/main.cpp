#include <iostream>

using namespace std;
 int lnko(int a,int b){
 if(a==b){
    return a;
    }
    if (a>b){
return lnko (a-b,b);
    }
    return lnko (a,b-a);

    }
  int main()
{
    cout << lnko(6,3)<<endl;

    cout << lnko(3,7)<<endl;
    cout << lnko(9,15)<<endl;
    return 0;
}
