#include <bits/stdc++.h>
using namespace std;
// Function to find the total number of distinct ways to get a change of `N`
// from an unlimited supply of coins in set `S`
int count(int S[], int n, int N)
{
    int T[n + 1][N + 1];
 
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i == 0) {
                T[0][j] = 0;
            }
            else if (j == 0) {
                T[i][0] = 1;
            }
            else if (S[i - 1] > j) {
                T[i][j] = T[i - 1][j];
            }
            else {
                T[i][j] = T[i - 1][j] + T[i][j - S[i - 1]];
            }
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=N;j++){
            cout << T[i][j] << " ";
        }
        cout<<endl;
    }
 
    return T[n][N];
}
 
int main(void)
{
    // `n` coins of given denominations
    int S[] = { 1, 2};
    int n = sizeof(S) / sizeof(S[0]);
 
    // total change required
    int N = 4;
 
    printf("The total number of ways to get the desired change is %d", count(S, n, N));
 
    return 0;
}