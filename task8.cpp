#include <iostream>
using namespace std;

int rotationCounter(string arr[], int n)
{
    if (n == 0) {
        return 0;
    }

    int rotate = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "left")
        {
            rotate -= 90;
        }
        else
        {
            rotate += 90;
        }
        if (rotate == 360 || rotate == -360)
        {
            count++;
            rotate = 0; // Reset the rotation after a full rotation
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    string arr[n];
    cout << "Enter the elements of an array( left or right): \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of full rotations: " << rotationCounter(arr, n);
}
