#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int size;
    cin>>size;
    vector<int> arr;

    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        if(ele%2==0){
            arr.insert(arr.begin(),ele);
        }
        else{
            arr.push_back(ele);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
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
