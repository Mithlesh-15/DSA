#include <iostream>
using namespace std;
void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[smallestIndex] > arr[j])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
    return;
}
int main()
{
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    selectionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
