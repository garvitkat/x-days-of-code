#include <bits/stdc++.h>
using namespace std;
template<typename K, typename V>
void print_map(unordered_map<K, V> const &m)
{   vector<int> vec;
    for (auto const &pair: m) {
        vec.push_back(pair.second);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
}

void solve()
{
    int numofprobs;
    cin>>numofprobs;
    numofprobs*=3;

    unordered_map<string, int> map;

    for(int i=0;i<numofprobs;i++){
        string name;
        int count;
        cin>>name>>count;

        if(map.find(name)!=map.end()){
            map[name]+=count;
        }
        else{
            map[name]=count;
        }
    }
    print_map(map);
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
