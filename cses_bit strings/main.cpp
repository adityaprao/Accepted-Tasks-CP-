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
#define mod             1e9+7
#define setbits(x)      __builtin_popcountll(x)


#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
	cout << name << " : " << arg1 << endl;
	//use cerr if u want to display at the bottom
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
#else
#define trace(...)
#endif





int32_t main()
{
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", 	stdout);
	#endif*/
	boostUP;

	int n;
	cin >> n;
	ll s = 1;
	for (int i = 0; i < n; i++)
		s = 2 * s % ((int)mod);
	cout << s;



	return 0;

}

