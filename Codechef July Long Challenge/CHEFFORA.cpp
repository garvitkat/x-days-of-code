#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N=1e5+5;
const ll mod=1e9+7;



ll findPower(ll base,ll power){
    ll res = 1;
    while (power>0){
        if (power%2==0){
            base = ((base%mod)*(base%mod))%mod;
            power = power/2;
        }
        else{
            res = ((res%mod)*(base%mod))%mod;
            power = power-1;
        }
        }
    return res;
}

ll findNthChefora(ll i){
    ll temp=i;
    ll n=i;
    n=n/10;
    while(n>0){
        ll digit=n%10;
        temp=temp*10+digit;
        n=n/10;
    }
    return temp;
}

void solve()
{
    ll a[N];
    a[0]=0;
    for(ll i=1;i<N;i++){
        a[i]=findNthChefora(i);
    }
    ll L,R;
    cin>>L>>R;
    ll sumOfPowers=0;
    for(ll i=L+1;i<=R;i++){
        sumOfPowers+=a[i];
    }

    cout<<findPower(a[L],sumOfPowers);
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
