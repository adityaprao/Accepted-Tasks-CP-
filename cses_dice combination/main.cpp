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
    int M = 1e9+7;
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 6 && i - j >= 0; j++)
        {
            dp[i] = (dp[i] + dp[i-j] ) % M;
        }
    }
    cout<<dp[n];



    return 0;

}

