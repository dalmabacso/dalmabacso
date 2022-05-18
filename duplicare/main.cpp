#include <iostream>

using namespace std;


void duplicare(int n, int &d){

    d=0;
    int p=1,x=n;
while (x>0){
    if(x%10%2==1){
        d=d+x%10*p;
    }
    else{
        d=d+x%10*p;
        p=p*10;
        d=d+x%10*p;
    }
    x=x/10;
    p=p*10;
}
if(d==n){
d=-1;
}
}
return d;
}

int main(){
    int n,d=0;
    cin >>n;
    cout <<duplicare(n,d);
}
