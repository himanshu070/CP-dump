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
    // freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    fastio();

    ll t, a, b, c, d;
    cin >> t >> a >> b >> c >> d;
    string s;
    cin >> s;

    ll reqa = c - a;
    ll reqb = d - b;

    char aa, bb;

    if (reqa > 0)
        aa = 'E';
    else
        aa = 'W';

    if (reqb > 0)
        bb = 'N';
    else
        bb = 'S';

    ll count = 0;


    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == aa && s[i] == 'E' && reqa != 0)
        {
            reqa--;
        }
        if (s[i] == aa && s[i] == 'W' && reqa != 0)
        {
            reqa++;
        }

        if (s[i] == bb && s[i] == 'N' && reqb != 0)
        {
            reqb--;
        }
        if (s[i] == bb && s[i] == 'S' && reqb != 0)
        {
            reqb++;
        }
        count++;
        if (reqa == 0 && reqb == 0)
        {
            cout << count;
            return 0;
        }
    }

    cout << -1;

    return 0;
}