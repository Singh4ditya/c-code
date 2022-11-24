#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
} * start, *nn, *temp, *loc;

void insert_end();
void delete_end();
void traverse();

int main()
{
repeat:
    int n, m;
    char opt, more;
    cout << "Enter Options \n 1. Inserting = I \n 2. Deleting = D \n 3. traversing = T\n 4. Exit = E\n " << endl;
    cin >> opt;

    if (opt == 'I')
    {
        cout << "How much element you want to insert at the end" << endl;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            insert_end();
        }
    }

    else if (opt == 'D')
    {
        cout << "How much element you want delete from end" << endl;
        cin >> m;

        for (int i = 0; i < m; i++)
        {
            delete_end();
        }
    }

    else if (opt == 'T')
    {
        traverse();
    }

    else if (opt == 'E')
    {
        return 0;
    }

    else
    {
        cout << "wrong choice";
    }

    cout << "\n Do you want to perform more action Y/N" << endl;
    cin >> more;

    while (more == 'Y')
    {
        goto repeat;
    }

    return 0;
}

void insert_end()
{
    int value;
    cout << "Enter value you want to insert at end" << endl;
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

void traverse()
{

    temp = start;

    while (temp != NULL)
    {
        cout << temp->data << "-> \t";
        temp = temp->next;
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