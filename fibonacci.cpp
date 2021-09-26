#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int fibo(int n)
{
    if(n==0||n==1)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // finding the nth fibonacci number
    ll n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
