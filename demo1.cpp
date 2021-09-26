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

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

// struc.  head. temp.  head = temp. for(2- n) p=temp 

void createList (int n)
{
    if(n==0)
    {
        cout << "No node created\n";
        return;
    }
    struct Node *temp, *ptr;
    head = (struct Node *) malloc (sizeof(struct Node));
    cout << "Enter the data of node 1\n";
    cin >> head->data;
    head->next=NULL;
    ptr = head;

    for(int i=2; i<=n; i++)
    {
        temp = (struct Node *) malloc (sizeof(struct Node));
        cout << "Enter the data of node " << i << nline;
        cin >> temp->data;
        temp->next=NULL;

        ptr->next = temp;
        ptr = ptr->next;
    }

}

void display()
{
    struct Node *temp;
    temp = head;

    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void createBeg()
{
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    cout << "Enter the data of the node you want to insert at beginning\n";
    cin >> ptr->data;
    ptr->next = head;
    head = ptr;
}

void createEnd()
{
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    cout << "Enter the data of the node you want to insert at end\n";
    cin >> ptr->data;
    ptr->next = NULL;

    struct Node *p = head;
    while(p->next!=NULL)
        p=p->next;
    p->next = ptr;

}

void createPos(int x)
{
    ll n;
    cout << "Enter the pos where you want to insert the node\n";
    cin >> n;
    if(n>x+1)
    {
        cout << "ABE MADARCHOD PAGAL HAI KYA ???";
    }
    if(n<1)
    {
        cout << "RE RANDI KA BACCHA PEHLE BASIC CODING SEEKH K AAO";
    }
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    struct Node *temp=head;
    cout << "Enter the data of the node you want to insert at position " << n << nline;
    cin >> ptr->data;
    ptr->next = NULL;

    if(n==1)
    {
        ptr->next = head;
        head = ptr;
    }
    else
    {
        n=n-2;
        while(n--)
        {
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
}

void delBeg()
{
    if(head==NULL)
    {
        cout << "The list is already empty\n";
        return;
    }
    struct Node *temp = head;
    head = head->next;
    delete temp;
    temp = NULL;
}

void delEnd()
{
    if(head==NULL)
    {
        cout << "The list is already empty\n";
        return;
    }
    struct Node *temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void delAtPos()
{
    if(head==NULL)
    {
        cout << "The list is already empty\n";
        return;
    }
    cout << "Insert the position where you want to delete the node\n";
    ll n; 
    cin >> n;
    struct Node *prev, *nxt=head;
    if(n==1)
    {
        head = head->next;
        free(nxt);
        nxt = NULL;
        return;
    }
    n--;
    while(n--)
    {
        prev = nxt;
        nxt = nxt->next;
    }
    prev->next = nxt->next;
    free(nxt);
    nxt = NULL;
}

void printRev(struct Node *ptr)
{
    if(ptr!=NULL)
    {
    printRev(ptr->next);
    cout << ptr->data << " ";
    }
}

// void revList()
// {
//     if(head->next==NULL)
//     {
//         return;
//     }
    
//     struct Node *prev, *nxt;
//     prev = NULL;
  

//     while(head != NULL)
//     {
//         nxt = head->next;
//         head->next = prev;
//         prev = head;
//         head = nxt;
//     }
//     head = prev;
// }


void revList()
{
    if(head->next==NULL)
    {
        return;
    }
    
    struct Node *prev, *nxt;
    prev = NULL;
  

    while(head != NULL)
    {
        nxt = head->next;
        head->next = prev;
        prev = head;
        head = nxt;
    }
    head = prev;
}

// 66->55->44->77->88->99->NULL

//       null <- 66 <- 55 <- 66 -> NULL
//                            p    hn                                  

int main()
{
#ifndef himanshu070
    freopen("debug.txt", "w", stderr);
#endif
    //fastio();

    cout << "Enter the size of list\n";
    ll n;
    cin >> n;
    createList(n);
    //createEnd();
    // createBeg();
    // createPos(n);
    //delBeg();
    // delEnd();
    //delAtPos();
    revList();
    display();
    return 0;
}