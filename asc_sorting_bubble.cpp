#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, temp;
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
    cout << "********Sorting in ascending order*********" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "The Element at arr[" << i << "] is " << arr[i] << endl;
    }

    return 0;
}