#include <iostream>

using namespace std;

int main()
{
    int a[100], b[100], i, n, m;
    cout << "Enter the size of first array" << endl;
    cin >> n;
    cout << "Enter Elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "First array is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << "Enter the size of the second array" << endl;
    cin >> m;
    cout << "Enter Elements" << endl;
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << "The second array is:" << endl;
    for (i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl
         << "The merged array is:" << endl;
    for (i = 0; i < m; i++)
    {
        a[n] = b[i];
        n++;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}