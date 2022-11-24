#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * front, *last, *temp, *nn, *loc;

void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    char rechoice;
repeat:
    cout << "1.insert in queue \n2.delete in queue \n3.Display Queue\n4.Exit \nEnter your choice ";
    cin >> choice;

    if (choice == 1)
    {
        enqueue();
    }
    else if (choice == 2)
    {
        dequeue();
    }
    else if (choice == 3)
    {
        display();
    }
    else if (choice == 4)
    {
        return 0;
    }
    else
    {
        cout << "wrong input" << endl;
    }

    cout << "\nDo you want to perform more actions y/n ";
    cin >> rechoice;

    while (rechoice == 'y')
    {
        goto repeat;
    }
    return 0;
}

void enqueue()
{
    int value;
    cout << "Enter value to insert" << endl;
    cin >> value;

    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    nn->next = NULL;

    if (front == NULL)
    {
        front = nn;
        last = nn;
    }
    else
    {
        last->next = nn;
        last = nn;
    }
    cout << "Element inserted!!" << endl;
}

void dequeue()
{
    if (front == NULL)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        loc = front;
        front = front->next;
        delete (loc);
    }
    cout << "Element deleted" << endl;
}

void display()
{
    temp = front;
    while (temp != NULL)
    {
        cout << temp->data << "->\t";
        temp = temp->next;
    }
}
