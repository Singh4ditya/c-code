#include <iostream>
using namespace std;

int main()
{
    int arr1[20], arr2[10];
    int n1, n2;
    // Inserting elements in array 1
    cout << "Enter number of elements in array 1 ";
    cin >> n1;
    cout << "Enter Elements";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    // Inserting elements in array 2
    cout << "Enter number of elements in array 2 ";
    cin >> n2;
    cout << "Enter Elements ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    // Merging
    int j = 0;
    for (int i = n1; i < n1 + n2; i++)
    {
        arr1[i] = arr2[j];
        j++;
    }
    // Printing array
    cout << "Final array" << endl;
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << arr1[i] << endl;
    }

    return 0;
}