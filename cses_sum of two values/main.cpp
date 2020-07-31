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

    int n;
    int target;
    cin >> n >> target;
    int arr[n];
    int fake[n];
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        fake[i] = a;

    }

    sort(arr, arr+ n);
    int v1 = -1, v2 = -1;
    int pos1, pos2;

    int i = 0, j = n - 1;
    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            v1 = arr[i];
            v2 = arr[j];
            break;
        }
        if(arr[i] + arr[j] > target)
        {
            j--;
        }
        if(arr[i] + arr[j] < target)
        {
            i++;
        }
    }

    if(v1 == -1 && v2 == -1)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        int p = 0, q = 0;
        for(; p < n; p++)
        {
            if(fake[p] == v1)
            {
                pos1 = p+1;
                break;
            }
        }

        for(; q < n; q++)
        {
            if(fake[q] == v2 && q != p)
            {
                pos2 = q+1;
                break;
            }
        }

        cout << pos1 << " " << pos2;
    }







    return 0;

}

