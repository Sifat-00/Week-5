#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int l =1;
        int r = n*3;
        cout << ceil(1.0*n/2) << endl;

        while(l<r)
        {
            cout << l <<" " << r << endl;
            l+=3;
            r-=3;
        }
    }
    return 0;
}