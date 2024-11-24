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
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        map<char,int> mp;
        string ans;
        for(auto val : ar)
        {
            for(char i='a';i<='z';i++)
            {
                if(mp[i] == val)
                {
                    ans+=i;
                    mp[i]++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}