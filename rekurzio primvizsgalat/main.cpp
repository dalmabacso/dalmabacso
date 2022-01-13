#include<iostream>
using namespace std;


bool prim(long n, long i){


    if (i>(n/2+1)){

        return true;
    }

    if (n%i == 0){

        return false;
    }

    return prim(n, i+1);
}
int main()
{
int n,i;
cout <<"n=";
cin >>n;
cout << prim(n,i)<<endl;
cout << i << endl;
return 0;

}
