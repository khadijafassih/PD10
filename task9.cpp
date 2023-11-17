#include <iostream>
using namespace std;

int specialValue(int arr[], int n)
{
    for (int x = 0; x < n; x++)
    {
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] >= x)
            {
                count++;
            }
        }
        if (count == x)
        {
            return x;
        }
    }
    return -1; //Returning -1 if no special value is found
}


int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array( left or right): \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Special value : " << specialValue(arr, n);
    return 0;
}
