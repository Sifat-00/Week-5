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
        int ar[n];

        map<int,int> mp;

        int mx = INT_MIN;

        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            int val = ar[i];
            mx = max(mx,mp[val]);
        }

        if(mx==n)
        {
            cout<< 0 << endl;
            continue;
        }

        int save = mx;
        int cnt = 0;
        while(save<n){
            cnt++;
            save*=2;
        }
        cout<< cnt - (n-mx)<< endl;
    }
    return 0;
}