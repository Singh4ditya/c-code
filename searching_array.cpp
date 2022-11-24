#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, pos, value, search, count = 0;
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
    cout << "Enter which element you want to search ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count = count + i;
        }
    }
    cout << "Your Element " << search << " is at array [" << count << "]";

    return 0;
}