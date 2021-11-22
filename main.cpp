#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100][100], n, SK=0, SNY=0;
    int lnko = 0;
    int c, d;
    ifstream in ("input.txt");
    ofstream out ("lnko.out");
    in >> n;
     for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           in >> v[i][j];
        }
     }
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i<j && i+j>n-1){
                SK= SK + v[i][j];
            }
             if (i>j && i+j<n-1){
                SNY= SNY + v[i][j];
            }
        }
    }


c = SK;
d = SNY;

if( SK < SNY )
{
    int p = SK;
    SK = SNY;
    SNY = p;
}

while( SNY != 0 )
{
    int m = SK % SNY;
    SK = SNY;
     SNY = m;
}

lnko = SK;


   out << "lnko=" << lnko << endl;
   in.close();
   out.close();
    return 0;
}
