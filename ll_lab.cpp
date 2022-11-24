#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

} * start, *temp, *nn, *loc;

void insert_beg(int value);
void insert_end(int value);
void traverse();
void insert_after();
void delete_beg();
void delete_end();
void delete_value();
void search();

int main()
{
    int value;
    cout << "ENter value";
    cin >> value;
    insert_beg(value);
    insert_beg(50);
    insert_beg(200);

    insert_end(300);
    insert_end(4210);
    insert_end(1120);
    traverse();
    delete_value();
    traverse();
    search();

    return 0;
}

void insert_beg(int value)
{
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

void insert_end(int value)
{
    nn = (struct node *)malloc(sizeof(struct node));
    nn->next = NULL;
    nn->data = value;
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

void traverse()
{
    temp = start;
    while (temp != NULL)
    {
        cout << temp->data << "-> \t";
        temp = temp->next;
    }
}

void insert_after()
{
    int pos, value;
    cout << "Enter the element you want to enter" << endl;
    cin >> value;
    cout << "Enter value after which you want your element" << endl;
    cin >> pos;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    temp = start;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            nn->next = temp->next;
            temp->next = nn;
        }
        else
        {
            cout << "Element not present" << endl;
        }

        temp = temp->next;
    }
}

void delete_beg()
{
    temp = start;
    if (start == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        start = temp->next;
        delete (temp);
    }
}

void delete_end()
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

void delete_value()
{
    int value;
    cout << "Enter which value you want to delete" << endl;
    cin >> value;
    if (start == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        temp = start;
        while (temp->next->data != value)
        {
            temp = temp->next;
        }
        loc = temp->next;
        temp->next = loc->next;
        delete (loc);
    }
}

void search()
{
    int value, count = 1;
    cout << "which element you want to search ";
    cin >> value;
    temp = start;
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