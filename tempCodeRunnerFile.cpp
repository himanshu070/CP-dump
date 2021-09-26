#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	ll x = 9;
	cin>>x;
	debug(x);
	cout<<x;
	return 0;
}