#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve() {
	int A, B; cin >> A >> B;
	int ans;
	if (__gcd(A, B) > 1)
		ans = 0;
	else if (__gcd(A + 1, B) > 1 or __gcd(A, B + 1) > 1)
		ans = 1;
	else
		ans = 2;
	cout << ans << '\n';
}

signed main() {
	fast;

#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	for (int tt = 1; tt <= t; tt++) {
		// cout << "Case #" << tt << ": ";
		solve();
	}
	return 0;
}