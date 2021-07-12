#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int isKthBitSet(ll n, ll k)
{
    
    if (n & (1 << (k - 1)))
        return 1;
    else
        return 0;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> arr;
    for(ll i=0;i<n;i++){
        ll item;
        cin>>item;
        arr.push_back(item);
    }
    ll maxnum=(int)log2(*max_element(arr.begin(), arr.end()))+1;
    ll operations=0;
    ll countForK=0;

    for(ll i=0;i<maxnum;i++){
        countForK=0;
        for(ll j=0;j<n;j++){
            if(isKthBitSet(arr[j],i+1)){
                countForK++;
                }
            }
        if(countForK>k){
            operations+=countForK/k;
            if(countForK%k>0){
                operations++;
            }
        }else if(countForK>0 && countForK<=k){
            operations++;
        }
    }
    cout<<operations;
    
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
