#include <iostream>

using namespace std;


int Mandelbrot(int c ,int k){
if(c==0){return 0;}
if(k==0){
    return c;


}
return Mandelbrot(c,k-1)+Mandelbrot(c,k+1)+c;

}
int main()
{


int c,k;
cin >>c;
cin >>k;
cout <<Mandelbrot(c,k);
    return 0;
}
