#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * nn, *temp, *pos, *start;

void insert_beg();
void insert_end();
void delete_beg();
void insert_after_value();
void insert_after_pos();
void delete_end();
void delete_ele();
void search();
void traverse();

int main()
{
    insert_beg();
    insert_beg();
    insert_beg();
    traverse();
    insert_after_value();
    traverse();
    return 0;
}

void insert_beg()
{
    int value;
    cout << "enter element to insert " << endl;
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

void insert_end()
{
    int value;
    cout << "enter element to insert" << endl;
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

void insert_after_value()
{
    int value, loc;
    cout << "Enter value you want to insert" << endl;
    cin >> value;
    cout << "enter value after you want to insert" << endl;
    cin >> loc;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    temp = start;
    while (temp != NULL)
    {
        if (temp->data == loc)
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

void traverse()
{
    temp = start;
    while (temp != NULL)
    {
        cout << temp->data << " ->\t ";
        temp = temp->next;
    }
}