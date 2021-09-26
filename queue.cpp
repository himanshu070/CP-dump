#include <iostream>
using namespace std;
class Queue
{
private:
    int rear;
    int front;
    int arr[5];

public:
    Queue()
    {
        rear = -1;
        front = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isempty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }
    bool isfull()
    {
        if (rear == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int val)
    {
        if (isfull())
        {
            cout << "no space" <<endl;
        }
        else if (isempty())
        {
            front = 0;
            rear = 0;
            arr[rear] = val;  // you missed this. if the queue is empty we insert val inside the queue.
        }
        else
        {
            rear++;
            arr[rear] = val; // you missed this. if the queue is neither full nor empty (has a few places empty) we insert val inside the queue.
        }
        // arr[rear] = val;  we will not write this.
    }
    int dequeue()
    {
        int x;
        if (isempty())
        {
            cout << "ghetr" <<endl;
            return 0;
        }
        else if (rear == front)
        {
            x = arr[front];
            arr[front] = 0;
            rear = -1;
            front = -1;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
        }
        return x;
    }
    int count()
    {
        return (rear - front + 1); // you missed adding 1 here.. 
    }
};
int main()
{
    Queue q1;
    int option, val;

    do
    {
        cout << "choose an option";
        cout << "0. TO exit out of this program" << endl; // we also want the user to be able to exit from this never ending loop. So I added this option.
        cout << "1. isempty()" << endl;
        cout << "2. enqueue()" << endl;
        cout << "3. isfull()" << endl;
        cout << "4. dequeue()" << endl;

        cin >> option; // we will take option as an input inside the do while loop. cause we want to ask for an option every time we enter the loop.

        switch (option)
        {
            
        case 0:  //added case 0 so that user can exit.
            break;
        case 1:
            if (q1.isempty())
            {
                cout << "empty" << endl;
            }
            else
            {
                cout << "not empty";
            }
            break;
        case 2:
            cin >> val;
            q1.enqueue(val); //you missed passing the val here in the function.
            break;
        case 3:
            if (q1.isfull()) //function name was wrong here. Corrected!
            {
                cout << "full";
            }
            else
                cout << "not full";
            break; // you missed a break statement here.
        case 4:
            cout << q1.dequeue() << endl;
            break;
        default:
            cout << "enter a correct number";
            break;
        }
    } while (option != 0);
}