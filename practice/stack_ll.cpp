#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * nn, *top = NULL, *temp;

void push();
void pop();
void display();

int main()
{
    push();
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
    cout << "Value ?" << endl;
    cin >> value;

    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;

    nn->next = top;
    top = nn;
    cout << "Inserted successfully" << endl;
}

void pop()
{
    cout << "Element " << top->data << " deleted succesfully" << endl;
    temp = top;
    top = top->next;
    delete (temp);
}

void display()
{
    temp = top;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}