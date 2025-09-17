#include <iostream>
using namespace std;
void bubbleSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
}
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    bubbleSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
