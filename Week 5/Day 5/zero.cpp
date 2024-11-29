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
        int XOR = 0;
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        for(int i=0;i<n;i++)
        {
            XOR^=ar[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ar[i] = ar[i]^XOR;
            
            ans^=ar[i];
        }
        if(ans==0)
        {
            cout<<XOR<< endl;
        }
        else
        {
            cout<< -1 << endl;
        }
    }
    return 0;
}