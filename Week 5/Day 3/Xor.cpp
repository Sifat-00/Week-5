#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b;
        cin >> a >> b;
        long long int answer = a^b;
        cout << answer << endl;
    }
    return 0;
}