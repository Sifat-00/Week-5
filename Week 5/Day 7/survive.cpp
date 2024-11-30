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

        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            sum+= ar[i];
        }
        int val = (2*ar[n-2]);
        
        cout<<sum- val << endl;
    }
    return 0;
}