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
#define precision cout.precision(numeric_limits<ld>::max_digits10);
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

    ll n, flag = 0, st, end;
    cin >> n;

    ll arr[n + 1];
    ll sho = 1;

    mll mp;

    // for(auto z: mp) cout << z.second << "->";

    // 3 1 2 4
    // 3 1 2 4

    // 12 11 7 15
    // 7  11 12 15

    // 3  2  1 4

    vll vec;

    ll arr2[n + 1];
    for (int i = 1; i <= n; i++)
    {
        ll u;
        cin >> u;
        vec.push_back(u);
        arr2[i] = u;
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++)
    {
        mp[vec[i]] = i + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        auto it = mp.find(arr2[i]);

        arr[i] = it->second;
    }

    // for(int i=1; i<=n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != i && arr[i] != arr[i - 1] - 1)
        {
            st = i;
            end=i;
            flag++;
        }
        else if (arr[i] != i)
            end = i;

        if (arr[i] != i)
            sho = 0;
    }
    if (sho)
    {
        cout << "yes" << nline << 1 << " " << 1;
        return 0;
    }
    if (flag == 1)
    {
        cout << "yes" << nline << st << " " << end;
    }
    else
        cout << "no";
    return 0;
}