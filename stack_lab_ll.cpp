#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *top = NULL, *nn, *temp;

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
    cout << "Enter value" << endl;
    cin >> value;
    nn = (struct node *)malloc(sizeof(struct node));

    nn->data = value;

    if (top == NULL)
    {
        nn->next = NULL;
        top = nn;
    }
    else
    {
        nn->next = top;
        top = nn;
    }
}

void pop()
{
    if (top == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        temp = top;
        top = top->next;
        delete (temp);
    }
}

void peek()
{
    if (top == NULL)
    {
        cout << "NO element present" << endl;
    }
    else
    {
        cout << top->data << endl;
    }
}

void display()
{
    temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "-> \t";
        temp = temp->next;
    }
}