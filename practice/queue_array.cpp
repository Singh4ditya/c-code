#include <iostream>
using namespace std;
#define n 10
int queue[n], front = -1, last = -1;

void enqueue();
void dequeue();
void display();

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
    return 0;
}

void enqueue()
{
    int value;
    if ((front == 0 && last == n) || (last + 1 == front))
    {
        cout << "overflow" << endl;
    }
    else
    {
        cout << "Value?";
        cin >> value;

        if (front == -1 && last == -1)
        {
            front++;
            last++;
            queue[last] = value;
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
    }
    cout << "Inserted successfully" << endl;
}

void dequeue()
{
    if (front == -1 && last == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        if (front == 0 && last == 0)
        {
            front--;
            last--;
        }
        else
        {
            front++;
        }
    }
    cout << "deleted successfully" << endl;
}

void display()
{
    if (front > last)
    {
        for (int i = front; i <= n; i++)
        {
            cout << queue[i] << endl;
        }
        for (int i = 0; i <= last; i++)
        {
            cout << queue[i] << endl;
        }
    }
    else
    {
        for (int i = front; i <= last; i++)
        {
            cout << queue[i] << endl;
        }
    }
}