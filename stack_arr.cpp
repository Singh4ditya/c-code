#include <iostream>
using namespace std;
#define n 100

int arr[n], top;

void push();
void pop();
void display();

int main()
{
repeat:
    char choice, yesno;

    cout << "a == insert " << endl
         << "b == delete" << endl
         << "c == display" << endl;

    cin >> choice;

    if (choice == 'a')
    {
        push();
    }
    else if (choice == 'b')
    {
        pop();
    }
    else if (choice == 'c')
    {
        display();
    }
    else
    {
        cout << "wrong input" << endl;
    }

    cout << "\nDo you want to do more operations ? y/n" << endl;
    cin >> yesno;
    while (yesno == 'y')
    {
        goto repeat;
    }

    return 0;
}

void push()
{
    int value;
    cout << "enter value to insert" << endl;
    cin >> value;
    if (top == n)
    {
        cout << "stack full" << endl;
    }
    else
    {
        top++;
        arr[top] = value;
        cout << "element inserted" << endl;
    }
}

void pop()
{
    if (top == 0)
    {
        cout << "stack empty cant delete" << endl;
    }
    else
    {
        cout << "Element deleted" << endl;
        arr[top--];
    }
}

void display()
{
    cout << "\n";
    for (int i = top; i >= 1; i--)
    {
        cout << arr[i] << endl;
    }
}