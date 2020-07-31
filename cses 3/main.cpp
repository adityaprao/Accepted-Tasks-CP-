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

    int count_a = 0, count_t = 0, count_g = 0, count_c = 0;

    sort(s.begin(), s.end());

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'A')
        {
            count_a ++;
            continue;
        }


        if(s[i] == 'T')
        {
            count_t ++;
            continue;
        }
        if(s[i] == 'G')
        {
            count_g ++;
            continue;
        }
        else{
            count_c ++;
            continue;
        }

    }
    cout<< max(max(count_a, count_t), max(count_g, count_c));



    return 0;

}

