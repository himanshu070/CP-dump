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
        ll n, capacity, query;
        cin >> n >> capacity >> query;

        mll mp;
        
        for(int i=1; i<=n; i++)
        {
            mp[i] = 0;
        }

        ll insideCapacity=0;

        char arr1[query];
        ll arr2[query];
        for (int i=0; i<query; i++)
        {
            cin >> arr1[i];
            cin >> arr2[i];
        }

        for (int i=0; i<query; i++)
        {
            char sign;
            ll person;
            sign = arr1[i];
            person = arr2[i];
            if(sign == '-')
            {
                insideCapacity--;
                if(insideCapacity<0)
                {
                    cout << "Inconsistent"<< endl;
                    goto x;
                }
            }
            if(sign == '+')
            {
                insideCapacity++;
                if(insideCapacity>capacity)
                {
                    cout << "Inconsistent"<< endl;
                    goto x;
                }
            }
            auto itr = mp.find(person);
            if (itr->second == 0)
            {
                if(sign == '-')
                {
                    cout << "Inconsistent"<< endl;
                    goto x;
                }
                    mp[person]++;
            }
            else
            {
                if(sign == '+')
                {
                    cout << "Inconsistent"<< endl;
                    goto x;
                }
                    mp[person]--;
            }
        }
        cout << "Consistent" << endl;
        x:
        query++;

        debug(mp);
    }

    return 0;


}