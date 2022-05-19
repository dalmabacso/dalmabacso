#include <iostream>
#include <fstream>

using namespace std;

int minmax(int n,int &min,int &max){
    while(n>0){
        if(min>n%10){
            min = n%10;
        }
        if(max<n%10){
            max = n%10;
        }
        n/=10;
    }
}

int main()
{
    ifstream in("def.in");

    int v[100],n=0;
    while(in>> v[n]){
        n++;
    }
    int min,max,szamlalo=0;
    for(int i=0;i<n;i++){
        min = INT_MAX;
        max = INT_MIN;
        minmax(v[i],min,max);


        if(max-min==1){
            szamlalo++;
        }
    }
    cout <<endl << szamlalo;
    return 0;
}
