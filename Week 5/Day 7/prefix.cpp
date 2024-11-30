#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll v[n];

        priority_queue<ll,vector<ll>,greater<ll>> pq;

        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }

        if(k==1)
        {
            cout<<"YES" << endl;
            continue;
        }


        bool flag = true;

        for(int i=k-1;i>=1;i--)
        {
            ll x = v[i] - v[i-1];
            pq.push(x);

            if(pq.top()!=x)
            {
                flag = false;
                break;
            }
        }


        if(flag==false)
        {
            cout<<"NO" << endl;
            continue;
        }

        ll val = v[0];
        ll x = n-k;

        while(x--)
        {
            val-=pq.top();
        }

        pq.push(val);

        if(flag == true && pq.top()==val)
        {
            cout<<"YES" << endl;
        }
        else
        {
            cout<<"NO" << endl;
        }
    }
    return 0;
}