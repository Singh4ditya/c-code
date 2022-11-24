#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, item, count, prime_item, s_temp;
    char c;
    cout << "Enter how much elements you want in array";
    cin >> n;
    cout << "Enter elements of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sorting

    cout << "Sorted array" << endl;
    int temp;
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
        cout << arr[i] << endl;
    }
repeat:
    cout << "Enter elements you want to delete" << endl;
    cin >> item;
    // int x = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == item)
    //     {
    //         x++;
    //     }
    // }
    // if (x = 0)
    // {
    //     cout << "element not present" << endl;
    //     goto repeat;
    // }

    for (int i = 2; i <= item; i++)
    {
        if (item % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        prime_item = item;
    }
    else
    {
        cout << "Element not prime" << endl;
        goto noprime;
    }

    // Deleting
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == prime_item)
        {
            s_temp += i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == prime_item)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n = n - 1;
        }
    }
    cout << "The item is deleted" << endl;
    cout << "New array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
noprime:
    cout << "Do you want to delete more elements Y/N";
    cin >> c;

    if (c == 'Y')
    {
        goto repeat;
    }
    else
    {
        return 0;
    }
}
