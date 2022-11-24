#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * nn, *start, *temp, *loc;

void insert_beg();
void traverse();
void insert_end();
void insert_after();
void delete_beg();
void delete_end();
void searching();

int main()
{
    insert_beg();
    insert_beg();
    insert_end();
    insert_end();
    insert_end();
    traverse();
    delete_beg();
    delete_end();
    cout << "\n";
    traverse();
    searching();

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
        nn->next = NULL;
        start = nn;
    }
    else
    {
        nn->next = start;
        start = nn;
    }
}

void traverse()
{
    temp = start;
    while (temp != NULL)
    {
        cout << temp->data << "->\t";
        temp = temp->next;
    }
}

void insert_end()
{
    int value;
    cout << "Enter value ";
    cin >> value;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    nn->next = NULL;

    if (start == NULL)
    {
        start = nn;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
    }
}

void delete_beg()
{
    if (start == NULL)
    {
        cout << "Empty list";
    }
    else
    {
        loc = start;
        start = start->next;
        delete (loc);
    }
}

void delete_end()
{
    temp = start;
    if (start == NULL)
    {
        cout << "Empty list";
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        loc = temp->next;
        temp->next = NULL;
    }
}

void searching()
{
    int value, count = 1;
    cout << "Enter value you want to search";
    cin >> value;
    temp = start;
    if (start == NULL)
    {
        cout << "Empty list";
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << "Element found  at position = " << count << endl;
            }
            temp = temp->next;
            count++;
        }
    }
}