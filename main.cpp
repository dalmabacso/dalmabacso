#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out ("output.txt");
    int v[100][100],n,i,j,f=0,a=0;
    in >>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            in >>v[i][j];

        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
                if(i<j){
                    f+=v[i][j];

                }
                if(i<j){
                    a+=v[i][j];

                }
                int x,lkkt=0;
                x=f*a;
                while (a!=f){
                    if(f>a){
                        f=f-a;

                    }else{
                    a=a-f;}
                    }
                    lkkt=x/a;
                    cout <<"lkkt"<<lkkt;
                    in.close();
                    out.close();
                    }

                }


    return 0;
}
