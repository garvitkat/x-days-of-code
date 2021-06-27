#include <bits/stdc++.h>
using namespace std;
bool isValidHTMLTag(string str);
void solve()
{
    string str;
    cin>>str;
    cout<<isValidHTMLTag(str);
}

bool isValidHTMLTag(string str)
{
 
  // Regex to check valid HTML tag.
  const regex pattern("</(\"[^\"]*\"|'[^']*'|[^'\">])*>");
  if (str.empty())
  {
     return false;
  }

  if(regex_match(str, pattern))
  {
    for (int i=1; i<str.length(); i++)
    {
        if (isupper(str[i]))
            return false;
    }
    return true;
  }
  else
  {
    return false;
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