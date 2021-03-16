#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
vector<int> arr{2, 3, 5, 6, 8, 10};
int t[100][100];

int countsubsetsum(int sum, int n)
{
    if (sum == 0 & n == 0)
        return 1;
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;
    if (t[sum][n] != -1)
        return t[sum][n];
    if (arr[n - 1] <= sum)
        return t[sum][n] = countsubsetsum(sum - arr[n - 1], n - 1) + countsubsetsum(sum, n - 1);
    else
        return t[sum][n] = countsubsetsum(sum, n - 1);
}
int main()
{
    memset(t, -1, sizeof(t));
    int sum = 10;
    cout << countsubsetsum(sum, 6);
}