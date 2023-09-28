#include <bits/stdc++.h>
using namespace std;
// selection sort function
void selectionSort(int n, int arr[])
{
    int min;
    for (int i = 0; i <= n - 2; i++)
    {
        min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        
    }
}

int main()
{
    int n;
    cout << "Enter size of an array :" << endl;
    cin >> n;
    int arr[n];
    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}