#include <iostream>
using namespace std;

int main()
{
    int arr1[10], n;
    cout << "Enter number of elements in array";
    cin >> n;
    cout << "Enter Elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    // Reversing
    int t;
    for (int i = 0; i < n / 2; i++)
    {
        t = arr1[n - i - 1];
        arr1[n - i - 1] = arr1[i];
        arr1[i] = t;
    }
    cout << "New array after reversed" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << "\t";
    }

    return 0;
}