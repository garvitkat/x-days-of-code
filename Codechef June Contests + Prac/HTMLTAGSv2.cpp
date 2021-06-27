#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    int len=str.length();
    //edge case for length of string
    if(str.length()==3){
        cout<<"Error";
        return;
    }
    bool isHTML=true;
        
        if(str[0]=='<' && str[1]=='/' && str[len-1]=='>'){
            //its a tag
            for (int i=2; i<len-1; i++)
                {
                    if (islower(str[i]) || isdigit(str[i])){
                        continue;
                    }
                    else{
                        isHTML=false;
                        break;
                    }
    
                }
            isHTML?cout<<"Success":cout<<"Error";
        }
        else{
            cout<<"Error";
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