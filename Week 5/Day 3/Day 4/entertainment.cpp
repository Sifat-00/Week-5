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
        string x;
        cin>>x;

        int l=0;
        int r=x.size()-1;
        bool flag = false;

        while(l<r)
        {
            if(x[l]==x[r])
            {
                l++;r--;
            }
            else if(x[l]>x[r])
            {
                flag = true;
                break;
            }
            else break;
        }

        if(flag)
        {
            string ans = x;
            reverse(ans.begin(),ans.end());
            ans+=x;
            cout<<ans << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    return 0;
}