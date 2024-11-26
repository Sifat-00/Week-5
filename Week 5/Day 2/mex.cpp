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
        int ar[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];

            mp[ar[i]]++;
        }
        int track = n - mp[0];
        if(mp[0]<=track+1) cout << 0 << endl;
        else if(mp.upper_bound(1)!=mp.end()||mp[0]==n) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
