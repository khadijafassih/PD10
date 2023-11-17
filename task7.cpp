#include <iostream>
using namespace std;
bool arrangement(int arr[], int n)
{
    //Sorting the array in ascending order
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Checking if the elements form a consecutive list
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }

    return true;
}

main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    cout << "Enter the elements of an array: \n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Can be arranged: "<< arrangement(arr, n);
}