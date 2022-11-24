#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, t, pos, value, arr_value, count = 0;
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
    cout << "Enter element which you want to add";
    cin >> value;
    cout << "After what value in current array you want yours element ";
    cin >> arr_value;
    for (int i = 0; i < n; i++)
    {
        if (arr_value == arr[i])
        {
            count = i + count;
        }
    }
    n = n + 1;
    for (t = n - 1; t >= count; t--)
    {
        arr[t + 1] = arr[t];
    }
    arr[count + 1] = value;
    // n = n + 1;
    cout << "New array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Array [" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
