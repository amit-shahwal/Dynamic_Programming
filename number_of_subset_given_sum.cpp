//this program is to roate matrix clock wise or anti cockwise
#include<bits/stdc++.h>
#define R 3
#define C 3
//no of subset of certain sum
int static arr[1002];
int t[100][100];

int subset(int arr[],int n,int s)

{
    if(n==0 && s==0)
        return 1;
    if(s==0)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    if(t[n][s]!=-1)
    {
        return t[n][s];
    }
    if(arr[n-1]<=s)
    {
        t[n][s]=((subset(arr,n-1,s))+(subset(arr,n-1,s-arr[n-1])));
        return t[n][s];
    }
    else if(arr[n-1]>s)
    {

        t[n][s]=(subset(arr,n-1,s));
        return t[n][s];
    }
}


using namespace std;
int  main()
{
    memset(t,-1,sizeof(t));
    int n,s;
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++)
        cin>>arr[i];
    // kk();

    cout<<subset(arr,n,s);


    return 0;

}
