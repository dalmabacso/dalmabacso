#include <iostream>

using namespace std;

int main()
{
    int x, a[100], b[100], paros=0, paratlan=0;

    cin >> x;

    for(int i=0; i<x; i++){
        cin >> a[i];
    }

    for(int i=0; i<x; i++){
        cin >> b[i];
    }

    for(int i=0; i<x; i++){
        if(a[i]%2==0){
            paros = paros + a[i];

        }
    }

    for(int i=0; i<x; i++){
        if(b[i]%2!=0 && b[i]<paros){
            paratlan = paratlan + b[i];
        }
    }

    cout << paratlan;
    return 0;
}

