#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout <<"Kerem a szoveget";
    cin >>str;
    int n=str.size();
    char pohar =str[n-1];
    for (int i=n-1;i>0;i--){
      str[i]=str [i-1];
    }
    str[0]=pohar;
    cout <<str;
    return 0;

}
