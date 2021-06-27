#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int D, d, A, B, C;
    cin >> D >> d >> A >> B >> C;

    if ((D >= 1 && D <= 10) && (d >= 1 && d <= 5) && (A < B) && (B < C) && A >= 1) {
        int totalPossible = d * D;
        if (totalPossible >= 42) {
            cout << C;
        }
        else if (totalPossible < 42 && totalPossible >= 21) {
            cout << B;
        }
        else if (totalPossible < 21 && totalPossible >= 10)
        {
            cout << A;
        }
        else {
            cout << 0;
        }
    }


}
int main()
{

    int t;
    cin >> t;
    if ((t >= 1 && t <= 50) )
    {
        
        while (t--)
        {
            solve();
        }
    }


}