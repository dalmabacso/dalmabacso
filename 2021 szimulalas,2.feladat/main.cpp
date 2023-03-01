#include <iostream>

using namespace std;

int main()
{

    int n,a[100][100],k;
    cout<<"n=";
    cin >>n;
    cout<<"k=";
    cin >>k;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        cin>>a[i][j];
       }
    }
   int tmp=a[k-1][k-2];
   for(int j=k-1;j>=1;j--){
      a[k-1][j]=a[k-1][j-1];
   }
   a[k-1][0]=tmp;
    for(int i=0;i<n;i++){
        cout<<endl;
       for(int j=0;j<n;j++){
          cout <<a[i][j]<<" ";

   }

}
cout<<endl;
return 0;
}
