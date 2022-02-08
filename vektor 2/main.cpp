#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>a;
    int n,k;
    cout <<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        int x;
        cin >>x;
        a.push_back(x);
    }
    cout <<"k=";
    cin >>k;
    for(int i=0;i<n;i++){
       a.pop_back ();

    }
    n-=k;
     for(int i=0;i<n;i++){
        cout <<a[i]<<" ";

        }
    return 0;
}
