#include <iostream>
using namespace std;
int arr[]={};
bool isRepeatingCycle(int cycle)
{
  for(int k = 0; k < cycle; k = k + cycle)
  {
    int r = cycle;
    if(arr[k]== arr[cycle])
    {
        cycle++;
        if (k == cycle)
        {
            return true;
        }
    }
    return false;
  }
}

main()
{
    int n, cycle;
    cout << "Enter the length of the array: ";
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the length of the cycle: ";
    cin >> cycle;
    if(cycle = n)
    {
       cout<< "Output: 1";
    }
    else
    {
        cout << "Output: " <<isRepeatingCycle(cycle);
    }
}