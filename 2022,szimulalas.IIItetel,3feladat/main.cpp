#include <iostream>

using namespace std;

int main()
{

  int n,p,k3=0,k5=0;
  cin>>n;
  for(int i=1;i<n+1;i++){
    int j=i;
    while(j%3==0){
      k3++;
      j/=3;
    }
     while(j%5==0){
        k5++;
      j/=5;
  }
  }
  k3/=2;
   if(k3<k5){
    cout <<" "<<k3;

   } else{
   cout<<" "<<k5;
   }

  return 0;
}
