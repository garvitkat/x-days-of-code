#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+c==180) &&(b+d==180)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
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
