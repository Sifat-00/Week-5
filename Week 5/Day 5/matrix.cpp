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

        set<int> s;

        int x = n*n;
        queue<int> q;

        int l=1;
        int r=x;
        while(l<=r)
        {
            q.push(r);
            q.push(l);
            l++;
            r--;
        }

        bool flag = false;

        vector<vector<int>> v;

        for(int i=0;i<n;i++)
        {
            vector<int> track;
            
            for(int j=0;j<n;j++)
            {
                track.push_back(q.front());
                q.pop();
            }
            if(flag)
            {
                reverse(track.begin(),track.end());
                v.push_back(track);
                flag = false;
            }
            else
            {
                flag = true;
                v.push_back(track);
            }
        }


        for(auto x:v)
        {
            for(auto ans:x)
            {
                cout<< ans <<" ";
            }
            cout << endl;
        }
    }
    return 0;
}