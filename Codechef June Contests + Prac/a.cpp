#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,x;
    cin>>a>>b>>x;
    cout<<(b-a)/x;
}

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout<<"\n";
    }
}