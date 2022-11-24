#include <iostream>
using namespace std;
#define max 10

int stack[max], top = -1;
void push();
void pop();
void peek();
void display();

int main()
{
repeat:
    char choice, yesno;

    cout << "a == insert " << endl
         << "b == delete" << endl
         << "c == display" << endl
         << "d == peek" << endl
         << "e == exit" << endl;

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
    else if (choice == 'd')
    {
        peek();
    }
    else if (choice == 'e')
    {
        return 0;
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
    if (top == max - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "Enter value to insert" << endl;
        cin >> value;
        top++;
        stack[top] = value;
    }
    cout << "Element inserted !!" << endl;
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        stack[top--];
    }
    cout << "Element deleted" << endl;
}

void peek()
{
    cout << "Peek element = " << stack[top] << endl;
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}