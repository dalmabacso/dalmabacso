#include <iostream>

using namespace std;
struct diak{
int azonosito;
string nev;
string osztaly;
double media;

} a,b,c;

int main()
{
   cin >>a.nev;
   cin >>a.media;
   cin >>b.nev;
   cin >>b.media;
   cin >>c.nev;
   cin >>c.media;
   if(a.media>b.media && a.media>c.media){
    cout <<a.nev;

   } else{
   if(b.media>c.media){
      cout << b.nev;

   }else{
     cout <<c.nev;
   }
   }
    return 0;
}
