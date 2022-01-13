#include <stdio.h>
#include <stdlib.h>

int main()
{
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

  cout << i << endl;
  cout << prim(64)<<endl;
    return 0;
}
