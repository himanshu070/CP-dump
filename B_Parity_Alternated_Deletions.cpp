#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define nline "\n"
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ll long long
#define ld long double
#define sll set<ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define gri greater<long long>()
#define set_bits __builtin_popcountll
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#ifndef himanshu070
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(ld t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(string t) { cerr << t; }

template <class T>
void _print(set<T> v);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::: SOLVE :::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

int main()
{
#ifndef himanshu070
    freopen("debug.txt", "w", stderr);
#endif
    fastio();

    ll n;
    cin >> n;
    vll vec(n);
    for (auto &a : vec)
        cin >> a;

    vll odd, even;
    for (int i = 0; i < n; i++)
    {
        if ((vec[i] & 1))
            odd.pb(vec[i]);
        else
            even.pb(vec[i]);
    }

    sort(even.begin(), even.end()); //2 4 6
    sort(odd.begin(), odd.end());   //1 3 5

    ll ans = 0;
    if (even.size() > odd.size())
    {
        even.pop_back();
        while (odd.size() > 0)
        {
            odd.pop_back();
            even.pop_back();
        }
    }
    else if (odd.size() > even.size())
    {
        odd.pop_back();
        while (even.size() > 0)
        {
            odd.pop_back();
            even.pop_back();
        }
    }
    else
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < even.size(); i++)
        ans += even[i];
    for (int i = 0; i < odd.size(); i++)
        ans += odd[i];

    cout << ans;
    return 0;
}

if (div_spaceleft > div_spaceright)
    while (div_spaceleft == div_spaceright)
        div.spaceright++;
else
    while (div.spaceleft == div.spaceright)
        div.spaceleft++;