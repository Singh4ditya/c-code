#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} * nn, *temp, *start, *loc;

void insert_beg();
void f_traverse();
void b_traverse();
void insert_end();
void delete_beg();
void delete_end();
void delete_value();
void insert_value();
void searching();

int main()
{

    insert_beg();
    insert_beg();
    insert_beg();
    insert_beg();
    insert_end();

    f_traverse();
    searching();

    return 0;
}

void insert_beg()
{
    int value;
    cout << "Enter lement you want to insert" << endl;
    cin >> value;
    nn = (struct node *)malloc(sizeof(struct node));

    if (start == NULL)
    {
        nn->data = value;
        nn->prev = NULL;
        nn->next = NULL;
        start = nn;
    }
    else
    {
        nn->data = value;
        nn->prev = NULL;
        nn->next = start;
        start->prev = nn;
        start = nn;
    }
}

void f_traverse()
{
    temp = start;
    while (temp != NULL)
    {
        cout << temp->data << "-> \t";
        temp = temp->next;
    }
}

void b_traverse()
{
    temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << "<-" << temp->data << "\t";
        temp = temp->prev;
    }
}

void insert_end()
{
    int value;
    cout << "Enter element" << endl;
    cin >> value;

    nn = (struct node *)malloc(sizeof(struct node));

    if (start == NULL)
    {
        nn->data = value;
        nn->next = NULL;
        nn->prev = NULL;
        start = nn;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        nn->data = value;
        nn->next = NULL;
        nn->prev = temp;
        temp->next = nn;
    }
}

void delete_beg()
{

    if (start == NULL)
    {
        cout << "Empty list" << endl;
    }
    else
    {
        loc = start;
        start = loc->next;
        start->prev = NULL;
        delete (loc);
    }
}

void delete_end()
{
    if (start == NULL)
    {
        cout << "Empty list" << endl;
    }
    else
    {
        temp = start;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        loc = temp->next;
        temp->next = NULL;
        delete (loc);
    }
}

void delete_value()
{
    int value;
    cout << "Enter value" << endl;
    cin >> value;
    temp = start;
    while (temp->next->data != value)
    {
        temp = temp->next;
    }
    loc = temp->next;
    temp->next = loc->next;
    loc->next->prev = temp;
    delete (loc);
}

void insert_value()
{
    int value, pos;
    cout << "Enter value to insert" << endl;
    cin >> value;
    cout << "Enter value after you want to insert" << endl;
    cin >> pos;

    nn = (struct node *)malloc(sizeof(struct node));

    nn->data = value;
    if (start == NULL)
    {
        nn->prev = NULL;
        nn->next = NULL;
        start = nn;
    }
    else
    {
        temp = start;
        while (temp->data != pos)
        {
            temp = temp->next;
        }
        nn->next = temp->next;
        temp->next = nn;
        nn->prev = temp;
        nn->next->prev = nn;
    }
}

void searching()
{
    int value, count = 1;
    cout << "Which element you want to search" << endl;
    cin >> value;
    if (start == NULL)
    {
        cout << "empty list" << endl;
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << "element found at position " << count << endl;
            }
            temp = temp->next;
            count++;
        }
    }
}