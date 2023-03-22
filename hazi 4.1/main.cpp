#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
getline(cin,s);
    string str;
    cout <<"Kerem a szoveget";
    cin >>str;
    int n=str.size();
    swap (str[0],str[n-1]);
    for (int i=1;i<n-1;i++){
        swap (str[i],str[n-1]);
      str[i]=str [i-1];
    }
     cout <<str;
    return 0;

}
