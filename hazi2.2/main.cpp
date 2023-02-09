#include <iostream>

using namespace std;

int main()
{
    int n, x, k, c, i, a, s = 0;
    cin >> n >> k;
    for(i = 1; i <= n; i++)
    {
        c = 0;
        cin >> x;
        a = x;
        while(a != 0)
        {
            a = a / 10;
            c++;
        }
        if(c >= k)
        {
            cout << x <<" ";
            s++;
        }
    }
    cout << endl << s;
    return 0;
}
