#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str; 
    int a,b,c; 
    cin>>str;
    str="0"+str; 
    c=str.size(); 
    int arr[c];
    b=0; 
    while(b!=c) 
    { 
    arr[b]=str[b]-'0';
    b++; 
    }
    if(arr[1]==1){
        arr[0]=arr[1];
        arr[1]=0;
    }else{
        arr[0]=1;
    }
    for(int i=0;i<c;i++){
        cout<<arr[i];
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
