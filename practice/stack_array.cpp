#include <iostream>
using namespace std;
#define n 10
int stack[n], top = -1;

void push();
void pop();
void display();

int main()
{
    push();
    push();
    push();
    push();
    cout << "Top " << top << endl;
    display();
    pop();
    display();
    return 0;
}

void push()
{
    int value;
    cout
        << "Enter value" << endl;
    cin >> value;
    if (top == n)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }

    cout << "Innserted successfully" << endl;
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "ELement deleted = " << stack[top] << endl;
        top--;
    }
}

void display()
{
    for (int i = top; i > -1; i--)
    {
        cout << stack[i] << endl;
    }
}