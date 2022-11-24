#include <iostream>
using namespace std;

int main()
{
    int arr[10], odd_arr[10], n, j = 0;
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
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd_arr[j] = arr[i];
            j++;
        }
    }
    cout << "*****ODD ARRAY*****" << endl;
    for (int i = 0; i < j; i++)
    {
        cout << "The Element at arr[" << i << "] is " << odd_arr[i] << endl;
    }

    return 0;
}