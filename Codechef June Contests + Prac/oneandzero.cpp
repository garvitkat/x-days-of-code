#include <bits/stdc++.h>
using namespace std;
// `M × N` matrix
#define M 3
#define N 3
 
// Function to find the size of the largest square submatrix of 1's
// present in a given binary matrix
int findLargestSquare(int mat[M][N], int m, int n, int &maxsize)
{
    // base condition
    if (m == 0 || n == 0)
    {
        if (maxsize != 0)
        {
            maxsize = max(maxsize, mat[m][n]);
            return mat[m][n];
        }
 
        for (int i = 0; i <= m; i++)
        {
            if (mat[i][n] == 1)
            {
                maxsize = 1;
                break;
            }
        }
 
        for (int j = 0; j <= n; j++)
        {
            if (mat[m][j] == 1)
            {
                maxsize = 1;
                break;
            }
        }
 
        return maxsize;
    }
 
    // find the largest square matrix ending at `mat[m][n-1]`
    int left = findLargestSquare(mat, m, n - 1, maxsize);
 
    // find the largest square matrix ending at `mat[m-1][n]`
    int top = findLargestSquare(mat, m - 1, n, maxsize);
 
    // find the largest square matrix ending at `mat[m-1][n-1]`
    int top_left = findLargestSquare(mat, m - 1, n - 1, maxsize);
 
    /* The largest square matrix ending at `mat[m][n]` will be 1 plus
        minimum of largest square matrix ending at `mat[m][n-1]`,
        mat[m-1][n] and mat[m-1][n-1] */
 
    int size = 0;
    if (mat[m][n] != 0) {
        size = 1 + min (min(top, left), top_left);
    }
 
    // update maximum size found so far
    maxsize = max(maxsize, size);
 
    // return the size of the largest square matrix ending at `mat[m][n]`
    return size;
}


 
int main()
{
    int mat[M][N] =
    {
        // { 0, 0, 1, 0, 1, 1 },
        // { 0, 1, 1, 1, 0, 0 },
        // { 0, 0, 1, 1, 1, 1 },
        // { 1, 1, 0, 1, 1, 1 },
        // { 1, 1, 1, 1, 1, 1 },
        // { 1, 1, 0, 1, 1, 1 },
        // { 1, 0, 1, 1, 1, 1 },
        // { 1, 1, 1, 0, 1, 1 }

        { 0, 1, 1},
        { 0, 1, 1},
        { 0, 0, 1},
    };

    int mat2[M][N] =
    {
        // { 0, 0, 1, 0, 1, 1 },
        // { 0, 1, 1, 1, 0, 0 },
        // { 0, 0, 1, 1, 1, 1 },
        // { 1, 1, 0, 1, 1, 1 },
        // { 1, 1, 1, 1, 1, 1 },
        // { 1, 1, 0, 1, 1, 1 },
        // { 1, 0, 1, 1, 1, 1 },
        // { 1, 1, 1, 0, 1, 1 }

        { 1, 1, 1},
        { 1, 1, 1},
        { 1, 1, 1},
    };
 
    // `size` stores the size of the largest square submatrix of 1's
    // and is passed by reference
    int size = 0;
 
    // findLargestSquare(mat, M - 1, N - 1, size);
    findLargestSquare(mat2, M - 1, N - 1, size);
 
    cout << "The size of the largest square submatrix of 1's is " << size;
 
    return 0;
}