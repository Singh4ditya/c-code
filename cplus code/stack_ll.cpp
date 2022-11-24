#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * start, *nn, *top = NULL, *temp;

void push();
void pop();
void display();

int main()
{
    push();
    push();
    push();
    display();
    pop();
    display();
    return 0;
}

void push()
{
    int value;
    cout << "Enter value to insert" << endl;
    cin >> value;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    nn->next = top;
    top = nn;
    cout << "inserted successfully" << endl;
}

void pop()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        while (start->next->next != NULL)
        {
            delete (top);
            top = start;
            top->next = NULL;
        }
    }
}

void display()
{
    temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}