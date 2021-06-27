#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll h,l;
    cin>>l>>h;
    string inp;
    cin>>inp;
    if(h>0 && l==0){
        cout<<"Yes";
        return;
    }
    vector<ll> a;
    int counter=0;
    for(ll i=0;i<inp.length();i++){
        if(inp[i]-'0'==0){
            counter++;
        }
        else{
            if(counter!=0){
                a.push_back(counter);
            }
            counter=0;
        }
    }

    if(counter!=0){
        a.push_back(counter);
    }


    bool isEnoughSleep=false;
    for(ll i=0;i<a.size();i++){
        if(a[i]>=h){
            isEnoughSleep=true;
            break;
        }
        else{
            h=2*(h-a[i]);
        }
    }
    isEnoughSleep?cout<<"yes":cout<<"no";


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
