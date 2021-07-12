#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
      int n;
      cin>>n;
        if(n==1){
        cout<<1;
       }
       else if(n==2){
        cout<<2;
       }
       else{
      vector<ll> prefix(n+2);
      vector<ll> suffix(n+2);
      vector<ll> a(n);
      ll sum=0;
      ll ans=0;
      for(ll i=1;i<n+1;i++)
      {
          cin>>a[i];
      }

      
        prefix[1]=a[1];suffix[n]=a[n];
        for(ll i=n-1;i>0;i--)
         {
           suffix[i]=__gcd(suffix[i+1],a[i]);
          }
        for(ll i=2;i<n+1;i++)
         {
           prefix[i]=__gcd(prefix[i-1],a[i]);
          }

      for(ll i=1;i<n+1;i++)
      {
          sum+=a[i];
      }
      ll finalans=LLONG_MAX;
        for(ll i=1;i<n+1;i++)
        {
            // cout<<__gcd(prefix[i-1],suffix[i+1])<<" ";
          
            ans=(sum-a[i]+__gcd(prefix[i-1],suffix[i+1]))/__gcd(prefix[i-1],suffix[i+1]);
            if(ans<finalans){
                finalans=ans;
            }
            
        }



        cout<<finalans;
       }
      
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int t;
  cin>>t;
  while(t--)
  {
      solve();
      cout<<"\n";
  }
  return 0;
}