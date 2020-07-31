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

    int n,x;
    int mod = 1e9+7;
    cin >> n >> x;
    vector<int> dp(x+1, 0);
    dp[0] = 1;
    int coins[n];

    for(int i = 0; i < n; i++)
        cin >> coins[i];



    for(int i = 1; i <= x; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i - coins[j] >= 0)
            dp[i] = (dp[i] + dp[i-coins[j]]) % mod;
        }
    }
    cout<<dp[x];







    return 0;

}

