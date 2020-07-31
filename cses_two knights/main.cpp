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
    int n;
    cin >> n;


    for(int k = 1; k <= n; k++)
    {
        ll a1 = k*k, a2 = a1*(a1 - 1) / 2;
        if(k > 2)
        {
            a2 -= 4*(k-1)*(k-2);

        }
        cout<<a2<<endl;


    }




    return 0;

}

