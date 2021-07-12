#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int amill=1e6;
ll Prefix[amill];
ll Suffix[amill];
ll a[amill];

void maximizeGCD(ll n, ll sum)
{
 
    sort(a,a+n+1);
    Prefix[1]=a[1];Suffix[n]=a[n];
    for(ll i=n-1;i>0;i--)
     {
       Suffix[i]=__gcd(Suffix[i+1],a[i]);
      }
    for(ll i=2;i<n+1;i++)
     {
       Prefix[i]=__gcd(Prefix[i-1],a[i]);
      }

    ll finalAns=LLONG_MAX;
    for(ll i=1;i<n+1;i++)
        {
            ll ans=(sum-a[i]+__gcd(Prefix[i-1],Suffix[i+1]))/__gcd(Prefix[i-1],Suffix[i+1]);
            if(ans<finalAns)
            finalAns=ans;
        }
      cout<<finalAns;

}

void solve()
{
       int n;
       cin>>n;

        ll sum=0;
        for(ll i=1;i<n+1;i++){
        cin>>a[i];
        sum+=a[i];
    }
        maximizeGCD(n,sum);
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
