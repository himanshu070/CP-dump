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
    ll T;
    cin >> T;
    ll ct = 0;

    while (T--)
    {
        ll check1 = 0, check2 = 0;
        ll ccc1 = 0, ccc2 = 0;
        ct++;
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll count = 0;

        ll hash1[n], hash2[n];

        for (int i = 0; i < n; i++)
        {
            hash1[i] = -1;
            hash2[i] = -1;
        }

        ll gino = 0, chhh=0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1')
                hash1[i] = 0, gino = 0, chhh=1;
            else
            {
                gino++;
                hash1[i] = gino;
            }
            if (chhh == 0)
                hash1[i] = -1;
        }
        gino = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     gino = 0;
        //     if (s[i] == '1')
        //         hash2[i] = 0;
        //     else
        //     {
        //         ll flag = 0;
        //         for (int j = i + 1; j < n; j++)
        //         {
        //             gino++;

        //             if (s[j] == '1')
        //             {
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //         if (flag)
        //             hash2[i] = gino;
        //     }

        ll coount = 0;
        ll one = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            coount++;
            if (s[i] == '1')
            {
                one = 1;
                hash2[i] = 0;
                coount = 0;
            }
            else if (one == 1)
            {
                hash2[i] = coount;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (hash2[i] != -1 && hash1[i] != -1)
                count += min(hash1[i], hash2[i]);
            else if (hash2[i] == -1)
                count += hash1[i];
            else
                count += hash2[i];
        }

        cout << "Case #" << ct << ": " << count << nline;
    }
    return 0;
}