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
        if(n%2!=0)
        {
            cout<<"NO" << endl;
        }
        else
        {
            char track ='A';
            int x = n/2;

            string ans;

            for(int i=0;i<x;i++)
            {
                ans.push_back(track+i);
                ans.push_back(track+i);
            }
            cout <<"YES"  << endl <<ans <<endl;
        }
    }
    return 0;
}