#include <iostream>

using namespace std;
bool prim(int a){
for (int i=2;i<a/2+1;i++){
if (a%1==0){
  return false;
}
}
return true;
}
bool pallindrom(int a){
int d =0,x=a;
while (x>0){
  int c=x%10;
  d=d*10+c;
  x=x/10;
}
//return a ==d;
if(a==d){
    return true;

} else{
 return false;

}


}
  int lnko(int a,int b)
  {


  while (a!=b){
    if (a>b){
       a-=b;

    }
    else{
      b-=a;
    }
}
    return a;


    }
    int main()



   while(a>0)
      {
    cout <<"Mit szeretnél csinálni?"<<endl<<endl;
    cout <<"1. Megvizsgálni, hogy egy szám prím-e"<<endl;
    cout <<"2. Megvizsgálni, hogy egy szám pallindróm-e"<<endl;
    cout <<"3. Megkeresni két szám legnagyobb közös osztóját"<<endl;
    cout <<"0. Kilépni"<<endl;
    cin >>a;
    if (a==1)
    {
      int x;
      cout <<"a szam";
      cin >>x;
      if (prim(x))
    {
      cout <<"a szam prim"<<endl;

      }
      else
        {
        cout <<" a szam nem prim"<<endl;

        }

}
if(a==2)
{
  int x;
  cout <<"a szam";
  cin >>x;
  if(pallindrom(x))
{
  cout <<"a szam pallindrom "<<endl;

  }
else
{
  cout <<"a szam nem pallindrom"<<endl;

}
}
 if(a==3) {
  int x,y;
  cout <<"elso szam";
  cin >>x;
  cout <<"masodik szam";
  cin >>y;
  cout <<lnko (x,y);

 }
return 0;
}


