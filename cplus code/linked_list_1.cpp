#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} * start, *nn, *temp;

void insert_beg(int x)
{
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = x;
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
        cout << temp->data << "\t ->";
        temp = temp->next;
    }
}

void insert_end(int x)
{
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = x;
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
int main()
{
    insert_beg(100);
    insert_beg(200);
    insert_beg(300);

    traverse();
    cout << endl;
    insert_end(400);
    insert_end(500);
    traverse();

    return 0;
}