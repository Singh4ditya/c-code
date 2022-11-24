#include <iostream>

using namespace std;

int main()
{
    int i, n, s, temp = 0, a[100];
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter Elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The current array is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << "Reverse of this array is" << endl;
    s = n;
    for (i = 0; i < s; i++)
    {
        temp = a[i];
        a[i] = a[s - 1];
        a[s - 1] = temp;
        s--;
        if (i == s / 2)
        {
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}