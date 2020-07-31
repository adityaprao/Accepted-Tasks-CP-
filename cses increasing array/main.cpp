#include <bits/stdc++.h>
using namespace std;

#define ll               long long
#define inf            1e18
#define w(x)          int x; cin>>x; while(x--)
#define endl          "\n"
#define boostUP   ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fsr(i,n)      for(int i=0;i<n;i++)
#define fcr(i,a,b)   for(int i=a;i<b;i++)
#define pb             push_back
#define sz(arr)      sizeof(arr)/sizeof(arr[0])




int main(void)
{
    boostUP;
    ll n;
    cin >> n;
    ll arr[n];

    fsr(i,n)
    cin >> arr[i];
    ll count = 0;

    for(ll i = 1; i < n; i++)
    {

        while(arr[i] < arr[i-1])
        {
            arr[i]++;
            count++;
        }


    }
    cout << count;






    return 0;

}

