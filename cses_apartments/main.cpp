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

        int n, m, k;
        cin >> n >> m >> k;

        vector<int> guys(n);
        vector<int> houses(m);

        for(int i = 0; i < n; i++)
            cin >> guys[i];
        for(int i = 0; i < m; i++)
            cin >> houses[i];

        int count = 0;
        sort(guys.begin(), guys.end());
        sort(houses.begin(), houses.end());
        for(int i = 0, j = 0; i < n; i++)
        {
            while(j < m && houses[j] < guys[i] - k)
                j++;

            if(j < m && houses[j] <= guys[i] + k)
            count++, j++;


        }
        cout << count;




    return 0;

}

