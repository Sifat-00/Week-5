#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int ar[n];
        for(int i=1;i<=n;i++)
        {
            ar[i-1] = i;
        }
        if(k == 0)
        {
            for(int i=n-1;i>=0;i--)
            {
                cout << ar[i] << " ";
            }
            continue;
        }
        
        vector<int> ans;

        priority_queue<int,vector<int>,greater<int>> pr;


        for(int i=n-1;i>=(n-k);i--)
        {
            pr.push(ar[i]);
        }
        
        ans.push_back(ar[0]);
        while(!pr.empty())
        {
            ans.push_back(pr.top());
            pr.pop();
        }
        for(int i=n-k-1;i>=1;i--) ans.push_back(ar[i]);

       for(auto x : ans) cout << x <<" ";
        cout << endl;

    }
    return 0;
}