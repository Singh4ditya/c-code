#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * start, *nn, *temp, *loc;

void insert_beg();
void insert_end();
void traverse();
void deletion();

int main()
{
    insert_beg();
    insert_beg();
    traverse();
    insert_end();
    traverse();
    deletion();
    traverse();

    return 0;
}

void insert_beg()
{
    int value;
    cout << "Enter value";
    cin >> value;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    if (start == NULL)
    {
        start = nn;
        nn->next = start;
    }
    else
    {
        temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }

        nn->next = start;
        start = nn;
        temp->next = start;
    }
}

void insert_end()
{
    int value;
    cout << "Enter value";
    cin >> value;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    if (start == NULL)
    {

        start = nn;
        nn->next = start;
    }
    else
    {
        temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        nn->next = start;
        temp->next = nn;
    }
}

void traverse()
{
    if (start == NULL)
    {
        cout << "Empty list" << endl;
    }
    else
    {
        temp = start;
        while (temp->next != start)
        {
            cout << temp->data << "-> \t";
            temp = temp->next;
        }
        cout << temp->data << "-> \t";
    }
}

void deletion()
{
    int value;
    cout << "which value you want to delete" << endl;
    cin >> value;
    temp = start;
    while (temp->next->data != value)
    {
        temp = temp->next;
    }
    loc = temp->next;
    temp->next = loc->next;
    delete (loc);
    cout << "Element deleted" << endl;
}