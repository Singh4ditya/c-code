#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, value;
    cout << "Enter no. of elements ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The Element at arr[" << i << "] is " << arr[i] << endl;
    }

    cout << "Which element you want to delete ";
    cin >> value;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n = n - 1;
        }
    }

    cout << "New array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Array [" << i << "] = " << arr[i] << endl;
    }

    return 0;
}