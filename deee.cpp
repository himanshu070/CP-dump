#include <iostream>
using namespace std;

class shop
{
    int code_no[50];
    float price[50];
    static int count;

public:
    void additem()
    {
        cout << "Enter code number of the item:";
        cin >> code_no[count];
        cout << "Enter price of the item:";
        cin >> price[count];
        count++;
    }
    void removeitem()
    {
        int n;
        cout << "Enter the code of item to be removed:";
        cin >> n;
        for (int i = 0; i < count; i++)
        {
            if (code_no[i] == n)
            {
                price[i] = 0;
            }
        }
    }
    void total()
    {
        float sum = 0.0;
        for (int i = 0; i < count; i++)
        {
            sum = sum + price[i];
        }
        cout << "\nTotal Price = " << sum << endl;
    }
    void display()
    {
        cout << "\n\tITEMS LIST\n";
        cout << "\t-------------\n";
        cout << "CODE\t"
             << "PRICE\t" << endl;
        cout << "\n--------------------------------" << endl;
        for (int i = 0; i < count; i++)
        {
            cout << "\t" << code_no[i] << "\t" << price[i] << endl;
        }
        cout << "\n";
    }
};

int shop :: count;
int main()
{
    shop item;
    int ch;
    do
    {
        cout << "Options are:\n";
        cout << "1. Add an item\n";
        cout << "2. Delete an item\n";
        cout << "3. Total Price\n";
        cout << "4. Display items\n";
        cout << "5. Exit\n";
        cout << "Enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            item.additem();
            break;
        case 2:
            item.removeitem();
            break;
        case 3:
            item.total();
            break;
        case 4:
            item.display();
            break;
        case 5:
            exit(0);
        default:
            cout << "\n Error in input\n";
        }
    } while (ch != 5);
    return 0;
}