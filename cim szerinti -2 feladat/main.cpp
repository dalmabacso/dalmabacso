#include <iostream>

using namespace std;

int a ,b;
int lnko(){//(int &a,int &b{
              int a1=a,b1=b;
      while(a!=b){
                if (a>b){
                a-=b;
              }else{
              b-=a;
              }
              }
              int lnko =a;
              a=a1;
              b=b1;
              return lnko;

              }
      int lkkt (){ //(int &a,int &b){
      return a *b/lnko();//(a,b);
      }
      int main()
      {
       a=4;
       b=6;
       cout << lkkt()<<endl;
       cout << lnko ()<<endl;
       return 0;


       }

