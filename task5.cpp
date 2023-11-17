#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter the wight of ten packages: ";
    cin >> n;
    int weight[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (weight[i] > weight[j])
            {
                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;
            }
        }
    }

    cout << "Sorted array in asscending order: " << "[";
    for (int i = 0; i < n; i++)
    {
        cout<<weight[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
    return 0;
}