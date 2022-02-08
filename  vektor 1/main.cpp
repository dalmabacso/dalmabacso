#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>a;
    int n;
    cout <<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        int x;
        cin >>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    return 0;
}
