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
#define no cout << "NO" << nline;
#define set_bits __builtin_popcountll
#define vecin           \
    for (auto &a : vec) \
        cin >> a;
#define vecout          \
    for (auto &a : vec) \
        cout << a << " ";
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
    ll T;
    cin >> T;

    while (T--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll maxx = INT_MIN;
        maxx = max(a, b);
        maxx = max(maxx, c);

        // cout << "max=" << maxx;

        if (a == b && a == c)
        {
            cout << 1 << " " << 1 << " " << 1 << nline;
            continue;
        }
        else if(a==b && a==maxx)
        {
            cout << 1 << " " << 1 << " " << maxx-c+1 << endl;
            continue;
        }
        else if(a==c && a==maxx)
        {
            cout << 1 << " " << maxx- b+1 << " " << 1 << endl;
            continue;
        }
        else if(b==c && b==maxx)
        {
            cout << maxx- a+1 << " " << 1 << " " << 1 << endl;
            continue;
        }

        if (maxx - a == 0)
        cout << 0 << " ";
        else
            cout << maxx - a + 1 << " ";
        if (maxx - b == 0)
            cout << 0 << " ";
        else
            cout << maxx - b + 1 << " ";
        if (maxx - c == 0)
            cout << 0 << endl;
        else
            cout << maxx - c + 1 << " " << endl;

        // cout << maxx -a << " " << maxx - b<< " " << maxx-c<< endl;
    }
    return 0;
}