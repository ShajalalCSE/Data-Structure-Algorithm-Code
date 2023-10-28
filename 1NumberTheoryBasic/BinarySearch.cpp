#include <iostream>
using namespace std;

int bsearch(int size, int item, int data[])
{
    int mid, left = 0, right = size - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (data[mid] == item)
            return mid;
        else if (data[mid] > item)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
int main()
{
    // int size;
    // cin>>size;
    // int ar[size];
    // for(int i=0;i<size;i++){
    //     cin>>ar[i];
    // }
    // int target;
    // cin>>target;

    int data[] = {1, 2, 4, 7, 9, 17, 19};
    int item = 2;
    cout << bsearch(7, item, data) << endl;
}