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
    ll magic_squares_3x3[8][9] = {
        {8, 1, 6, 3, 5, 7, 4, 9, 2},
        {4, 3, 8, 9, 5, 1, 2, 7, 6},
        {2, 9, 4, 7, 5, 3, 6, 1, 8},
        {6, 7, 2, 1, 5, 9, 8, 3, 4},
        {6, 1, 8, 7, 5, 3, 2, 9, 4},
        {8, 3, 4, 1, 5, 9, 6, 7, 2},
        {4, 9, 2, 3, 5, 7, 8, 1, 6},
        {2, 7, 6, 9, 5, 1, 4, 3, 8}};
    ll count = 0;
    // ll arr[3][3];
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // ll sumrow, sumcol;
    // for (int i = 0; i < 3; i++)
    // {
    //     sumcol=0, sumrow=0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sumrow = arr[i][0] + arr[i][1] + arr[i][2];
    //         sumcol = arr[0][j] + arr[1][j] + arr[2][j];

    //         if(sumrow==sumcol && sumrow!=15)
    //         {
    //             count = abs(15-sumrow);
    //             arr[i][j] = arr[i][j] + 15 - sumrow;
    //         }
    //     }
    // }
    ll arr[9];
    for (auto &a : arr)
        cin >> a;
    ll minn = INT_MAX;
    for (int k = 0; k < 8; k++)
    {
        count = 0;
        for (int i = 0; i < 9; i++)
        {
            count += abs(arr[i] - magic_squares_3x3[k][i]);
        }
        minn = min(minn, count);
    }

    cout << minn;
    return 0;
}

// // 8 3 4   1 5 9   6 7 2 =

// 4 8 2 4 5 7 6 1 6