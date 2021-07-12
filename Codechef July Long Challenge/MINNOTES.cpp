#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
ll findGCD(vector<ll> arr,ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

void solve()
{
       ll n;
       cin>>n;
       if(n==1){
        cout<<1;
       }
       else if(n==2){
        cout<<2;
       }
       else{
        vector<ll> denoms;
        int sum=0;
        for(ll i=0;i<n;i++){
        ll item;
        cin>>item;
        sum+=item;
        denoms.push_back(item);
       }
       sort(denoms.begin(),denoms.end());
       // ll maxele=*max_element(denoms.begin(), denoms.end());
       // ll minele=*min_element(denoms.begin(), denoms.end());

    ll maxele=denoms[n-1];
    ll minele=denoms[0];
    // cout<<maxele<<" "<<minele;
    auto first = denoms.begin() + 1;
    auto last = denoms.end()-1;
 
    vector<ll> midDenoms(first, last);
    for(auto ele:midDenoms){
        cout<<ele;
    }

    ll gcdofmids=findGCD(midDenoms,n-2);
    cout<<gcdofmids;

       //Case 1 -- no replace



       }


       

       // 
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
