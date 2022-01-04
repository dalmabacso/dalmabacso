#include <iostream>

using namespace std;
int reverse (long int n,long int rev){
if (n==0)
  return rev;
return reverse (n/10,rev*10+n%10);
}
int tukor (long int a ){
if (a<10){
  return a;

  }
  int x=a;
  int h=1;
  while(x>10){
      x/=10;
  h*=10;


  }
  return a%10*h+tukor (a/10);
}
  int main()
  {


 cout << tukor (123)<<endl;
 cout <<reverse (123,0)<<endl;
 return 0;
}

