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
#define vecin for(auto &a: vec) cin >> a;
#define vecout for(auto &a: vec) cout << a << " ";
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
        ll n;
        cin >> n;
        vll vec(n);
        vecin;
        ll a=0;

        ll ans=0;
        vector< vector<ll>> answer;

        for(int i=1; i<n; i++)
        {
            ll temp = vec[i], index=i;
            int j;
            for(j=0; j<i; j++)
            {
                if(vec[j]>temp)
                {
                    index = j;
                    break;
                }
            }
            if(index!=i)
            {
                ans++;
                // cout << index+1 << " " << i+1 << " " << i-index << nline;
                vll tempp;
                tempp.push_back(index+1);
                tempp.push_back(i+1);
                tempp.push_back(i-index);

                answer.push_back(tempp);


                for(int x=i; x>index; x--)
                {
                    swap(vec[x], vec[x-1]);
                }
                
            }

            
        }

        cout << ans << nline;
        for(int i=0; i<answer.size(); i++)
        {
            for(int j=0; j<answer[i].size(); j++)
            {
                cout << answer[i][j] << " ";
            }
            cout << nline;
        }

        // cout << nline;
    }
    return 0;
}


//    x x 5 x x 
//    1 2 3 4 5
   

//    if(i.second>i) shitf- i.second-i timespec
//    else 
