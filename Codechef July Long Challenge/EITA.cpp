#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll x,y,z,d;
    cin>>d>>x>>y>>z;
    ll strat1=x*7;
    ll strat2=(y*d)+(z*(7-d));
    cout<<max(strat1,strat2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout<<"\n";
    }
}
