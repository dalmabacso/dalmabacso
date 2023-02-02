#include <iostream>

using namespace std;
void secventa (int&n){
int ujszam=0,szorzo=1;
while(n>0)
{
int szj=n%10;
if(n%100==22){
  szorzo=szorzo%10;

}else{
ujszam=szj*szorzo+ujszam;
szorzo=szorzo*10;

}
n/=10;
}
n=ujszam;
}
int main()
{
  int n;
}
    return 0;
}
