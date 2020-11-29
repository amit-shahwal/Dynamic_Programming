#include<bits/stdc++.h>
using namespace std;
#define fo(a,j, n) for (long long int a = j; a < n; a++)
#define foe(a,j, n) for (long long int a = j; a <=n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a) 
vector<int> arr {1,1,2,3};

int t[100][100];

int countsubset(int sum, int n)
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
        return t[sum][n] = countsubset(sum - arr[n - 1], n - 1) + countsubset(sum, n - 1);
    else
        return t[sum][n] = countsubset(sum, n - 1);
}
int main()
 {
     //given diff if it is 10
     //s1-s2=diff;s1+s2=sum(Array)
     //2s1=sum(array)+diff
     memset(t,-1,sizeof(t));
    int diff=1,s1=0; 
    fo(i,0,(int)arr.size())
    s1+=arr[i];

   cout<< countsubset((s1+diff)/2,4);

 }