#include <bits/stdc++.h>
using namespace std;
// int findLargestSquare(int mat[][], int m, int n, int &maxsize);
// int findLargestSquare(int mat[][], int m, int n, int &maxsize)
// {
//     // base condition
//     if (m == 0 || n == 0)
//     {
//         if (maxsize != 0)
//         {
//             maxsize = max(maxsize, mat[m][n]);
//             return mat[m][n];
//         }
 
//         for (int i = 0; i <= m; i++)
//         {
//             if (mat[i][n] == 1)
//             {
//                 maxsize = 1;
//                 break;
//             }
//         }
 
//         for (int j = 0; j <= n; j++)
//         {
//             if (mat[m][j] == 1)
//             {
//                 maxsize = 1;
//                 break;
//             }
//         }
 
//         return maxsize;
//     }
 
//     // find the largest square matrix ending at `mat[m][n-1]`
//     int left = findLargestSquare(mat, m, n - 1, maxsize);
 
//     // find the largest square matrix ending at `mat[m-1][n]`
//     int top = findLargestSquare(mat, m - 1, n, maxsize);
 
//     // find the largest square matrix ending at `mat[m-1][n-1]`
//     int top_left = findLargestSquare(mat, m - 1, n - 1, maxsize);
 
//     /* The largest square matrix ending at `mat[m][n]` will be 1 plus
//         minimum of largest square matrix ending at `mat[m][n-1]`,
//         mat[m-1][n] and mat[m-1][n-1] */
 
//     int size = 0;
//     if (mat[m][n] != 0) {
//         size = 1 + min (min(top, left), top_left);
//     }
 
//     // update maximum size found so far
//     maxsize = max(maxsize, size);
 
//     // return the size of the largest square matrix ending at `mat[m][n]`
//     return size;
// }

void solve()
{   int n,m,k;
    cin>>n>>m>>k;
    if(n>=1 && n<=50 && m>=1 && m<=50){
    int alice[n][m]={0};
    int bob[n][m]={0};
    for(int i=0;i<(n*m)/2;i++){
        int a,b,c,d;
        cin>>a>>b;
        alice[a-1][b-1]=1;
        cin>>c>>d;
        bob[c-1][d-1]=1;
    }
    // int size = 0;
    // findLargestSquare(alice,n,m,size);
    // cout << "The size of the largest square submatrix of 1's is " << size;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<alice[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<bob[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
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