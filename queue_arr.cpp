#include <iostream>
using namespace std;
#define n 4
int queue[n], front = -1, last = -1;

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
    if ((front == 0 && last == n) || (last + 1 == front))
    {
        cout << "\nqueue is full";
    }
    else
    {
        int value;
        cout << "\nenter value to insert ";
        cin >> value;

        if (front == -1 && last == -1)
        {
            front++;
            last++;
            queue[front] = value;
        }
        else if (last == n)
        {
            last = 0;
            queue[last] = value;
        }
        else
        {
            last++;
            queue[last] = value;
        }
        cout << "\nInserted succesfully";
    }
}

void dequeue()
{
    if (front == -1 && last == -1)
    {
        cout << "\nEmpty queue cant delete";
    }
    else if (front == 0 && last == 0)
    {
        front--;
        last--;
    }
    else
    {
        front++;
    }
    cout << "\nSuccesfully deleted";
}

void display()
{

    if (front > last)
    {
        for (int i = front; i <= n; i++)
        {
            cout << queue[i] << "\t";
        }
        for (int i = 0; i <= last; i++)
        {
            cout << queue[i] << "\t";
        }
    }
    else
    {
        for (int i = front; i <= last; i++)
        {
            cout << queue[i] << "\t";
        }
    }
}