#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll g,c,h;
    cin>>g>>c;
    h=(c*c)/(2*g);
    cout<<h;
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