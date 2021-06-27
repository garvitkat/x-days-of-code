#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int xa,xb,Xa,Xb;
    cin >>xa>>xb>>Xa>>Xb;
    int numCoconuts=(Xa/xa)+(Xb/xb);
    cout<<numCoconuts<<endl;

}

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}