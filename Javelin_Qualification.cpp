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
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#ifndef himanshu070
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(string t) {cerr << t;}

template <class T> void _print(set <T> v);
template <class T> void _print(vector <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::: SOLVE :::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/


int main()
{
#ifndef himanshu070
    freopen("debug.txt", "w", stderr);
#endif
    fastio();

    ll T;
    cin >> T;
    
    while(T--)
    {
        ll n, m, x;
        cin >>  n >> m >> x;
        multimap <ll, ll> mp;
        multimap <ll, ll, greater <ll>> mp2;
        vll vec;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            mp.insert({a, i});
        }

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if((it->first) >= m)
            {
                x--;
                vec.push_back(it->second);
                // mp.erase(it);
            }
            else
            {
                mp2.insert({it->first, it->second});
            }
        }

            for(auto it=mp2.begin(); it!=mp2.end(); it++)
            {
                if(x<=0)
                {
                    break;
                }
                vec.push_back(it->second);
                x--;
            }

        sort(vec.begin(), vec.end());

        cout << vec.size() << " ";
        for(auto &a: vec) cout << a+1 << " ";
        cout << nline;
    }


    return 0;
}