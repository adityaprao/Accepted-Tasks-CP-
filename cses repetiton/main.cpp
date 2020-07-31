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

    string s;

    cin >> s;
    int count = 0, ans = 1;

    char l = 'A';
    for(char d : s)
    {
        if(d == l)
        {
            count++;
            ans = max(ans, count);
        }
        else
        {
            l = d;
            count = 1;

        }

    }
    cout << ans;





    return 0;

}

