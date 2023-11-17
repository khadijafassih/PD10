#include <iostream>
using namespace std;

main()
{
    int n, dimentions;
    cout << "Enter the number of boxes: ";
    cin >> n;
    cout << "Enter the dimentions of the boxes(length,width,height): \n";
    int arr[n];
    int result=0;
    for (int i = 0; i < n; i++)
    {
        int length, width , height;
        cin >> length;
        cin >> width;
        cin >> height;
        cout<<length<<" ";
        arr[i]= {length*height*width};
        result+=arr[i];
    }
        cout << "Total volume of all boxes: "<< result;
}