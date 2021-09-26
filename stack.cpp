#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct linkedList
{
    int data;
    struct linkedList *next;
};

struct stackk
{
    int top;
    int size;
    int *arr;
};

int isFull(struct stackk *sp)
{
    if(sp->top == sp->size-1)
        return 1;
    else
        return 0;
}
int isEmpty(struct stackk *sp)
{
    if(sp->top == -1)
        return 1;
    else
        return 0;
}

void push(struct stackk *sp, int val)
{
    if (isFull(sp))
        cout << "Stack overflow! Can't insert " << val << endl;
    else
    {
        sp->top++;
        sp->arr[sp->top] = val;
    }
}

int pop(struct stackk *sp)
{
    if (isEmpty(sp))
        {
        cout << "Stack underflow!\n";
        return -1;
        }
    else
    {
        int x = sp->arr[sp->top];
        sp->top--;
        return x;

    }
}

int peek(struct stackk *sp, int pos)
{
    int index = sp->top - pos + 1;
    if (index < 0)
    {
        cout << "NOT VALID" << endl;
        return -1;
    }
    else
        return(sp->arr[index]);
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    struct stackk *sp = (struct stackk *)malloc(sizeof(struct stackk));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sizeof(int) * sp->size);

    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);
    push(sp, 10);

    for(int i=1; i<=15; i++)
    {
        cout << peek(sp,i) << endl;
    }
    return 0;
}