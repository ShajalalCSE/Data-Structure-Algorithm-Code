#include <iostream>
using namespace std;

int bsearch(int *data, int size, int item)
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
    int data[] = {1, 2, 4, 7, 9, 17, 19};
    int item = 2;
    cout << bsearch(data, 7, item) << endl;
}