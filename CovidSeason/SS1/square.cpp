/*
1) Construct a sum matrix S[R][C] for the given M[R][C].
     a)    Copy first row and first columns as it is from M[][] to S[][]
     b)    For other entries, use following expressions to construct S[][]
         If M[i][j] is 1 then
            S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1
         Else (If M[i][j] is 0)
            S[i][j] = 0
2) Find the maximum entry in S[R][C]
3) Using the value and coordinates of maximum entry in S[i], print sub-matrix of M[][]
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
const int maxn = 1e3 + 1;
const int maxm = 1e3 + 1;
bool input[maxn][maxm];
int square[maxn][maxm];

void printMaximumSquare(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        square[i][0] = input[i][0];
    }
    for (int i = 0; i < col; i++)
    {
        square[0][i] = input[0][i];
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (input[i][j] == 1)
            {
                square[i][j] = min(square[i][j - 1], min(square[i - 1][j], square[i - 1][j - 1])) + 1;
            }
            else
            {
                square[i][j] = 0;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(res < square[i][j]){
                res = square[i][j];
            }
        }
    }
    cout<<res;
}

signed main()
{
    int row, col;
    cin>>row>>col;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>input[i][j];
        }
    }
    printMaximumSquare(row, col);
}