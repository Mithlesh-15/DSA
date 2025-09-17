#include <iostream>
using namespace std;
void insertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    return;
}
int main()
{
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    insertionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
