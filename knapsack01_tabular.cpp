#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
int static t[2003][2003];
int knapsack(int wt[], int val[], int W, int n)
{
    int t[n + 1][W + 1];
    fo(i, 0, n + 1)
        fo(j, 0, W + 1) if (i == 0 || j == 0)
            t[i][j] = 0;
    fo(i, 1, n + 1)
        fo(j, 1, W + 1)
    {
        if (wt[i - 1] <= j)
            t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]],
                          t[i - 1][j]);
        else

            t[i][j] = t[i - 1][j];
    }
    return t[n][W];
}

int main()
{
    ll tt, n, s;
    cin >> tt;
    while (tt--)
    {

        int wt[2003];
        int val[2003];
        cin >> s;
        cin >> n;
        fo(i, 0, n)
        {
            cin >> wt[i];
            cin >> val[i];
        }
        cout << knapsack(wt, val, s, n);
    }
}