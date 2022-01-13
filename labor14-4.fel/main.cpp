#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout <<"a=";
    cin>>a;
    d=0;b=a;
    while (b>0){
      c=b%10;
      b=b/10;
      d=d*10+c;

    }
    if (a==d){
      cout << "a szam pallindrom";

      }else{
      cout <<"a szam nem pallindrom";
    }


    return 0;
}
