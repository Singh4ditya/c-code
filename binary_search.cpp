#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int item);
int main()
{
    int arr[30], n, value;
    cout << "Enter no. of elements ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element in sorted order" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The Element at arr[" << i << "] is " << arr[i] << endl;
    }
    cout << "Enter element which you want to search";
    cin >> value;
    cout << "Element Found at position " << binary_search(arr, n, value);
    return 0;
}

int binary_search(int arr[], int n, int item)
{
    int beg = 0;
    int end = n - 1;
    int mid = (beg + end) / 2;

    while ((beg <= end) && (arr[mid] != item))
    {
        if (item < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    if (arr[mid] == item)
    {
        return mid;
    }
    else
    {
        return 0;
    }
}