#include <bits/stdc++.h>
using namespace std;

#define ll               	long long
#define ld              	long double
#define inf            	1e18
#define w(x)          	int x; cin>>x; while(x--)
#define endl           "\n"
#define boostUP   	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fsr(i,n)      	for(int i=0;i<n;i++)
#define fcr(i,a,b)   	for(int i=a;i<b;i++)
#define pb             	push_back
#define sz(arr)      	sizeof(arr)/sizeof(arr[0])





int main(void)
{
    boostUP;
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);

    int i = 0;
    int j = n - 1;
    int ans = 0;

    for(; j >= i; j--)
    {
        if(i == j)
        {
            ans++;
            break;
        }
        if(arr[j] + arr[i] <= target)
        {
            ans++;
            i++;
            continue;
        }
        if(arr[i] + arr[j] > target)
        {
            ans++;
            continue;
        }


    }
    cout << ans;



    return 0;

}

