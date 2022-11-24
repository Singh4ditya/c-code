#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, pos, value, search, prime;
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
    cout << "Prime numbers searching" << endl;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        prime = 0;
        for (int j = 2; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                prime = prime + 1;
                count = +i;
            }
        }
        if (prime == 1)
        {
            cout << "Found prime element " << arr[count] << " at position " << count << endl;
        }
    }

    return 0;
}