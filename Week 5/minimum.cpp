#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int XOR = 0;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }


        for(int i=0;i<n;i++)
        {
            XOR^=ar[i];
        }

        int ans = XOR;

        for(int i=0;i<n;i++)
        {
            int track = (XOR^ar[i]);
            ans = min(ans,track);
        }
        cout << ans << endl;
    }
    return 0;
}