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

    if(n == 1)
        cout<< 1 << endl;
    else if(n == 2 || n==3)
        cout<< "NO SOLUTION"<<endl;

    else if(n == 4)
    {
        for(int i = 2; i <= n; i+= 2)
            cout<<i <<" ";
        for(int i = 1; i <= n; i += 2)
        cout << i << " ";
    }

    else
    {
        for(int i = 1; i <= n; i += 2)
            cout << i << " ";
        for(int i = 2; i <= n; i+= 2)
            cout<<i <<" ";
    }



    return 0;

}

