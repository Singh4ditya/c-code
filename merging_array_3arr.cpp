#include <iostream>
using namespace std;
int main()
{
    int arr1[10], arr2[10], arr3[20];
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
    // Merging array
    int n3 = n1 + n2;
    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    int j = 0;
    for (int i = n1; i < n3; i++)
    {
        arr3[i] = arr2[j];
        j++;
    }
    // Printing array
    cout << "Final array" << endl;
    for (int i = 0; i < n3; i++)
    {
        cout << arr3[i] << endl;
    }

    return 0;
}