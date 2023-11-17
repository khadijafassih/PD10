#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of Saturdays: ";
    cin >> n;
    int count = 0;

    int miles[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter miles run for Saturday " << i << " :";
        cin >> miles[i];
    }    
    for (int i = 0; i <= n-1; i++)
    {
        if (miles[i] < miles[i + 1])
        {
            count++;
        }
    }
    cout << "Total progress days: " << count;
    return 0;
}