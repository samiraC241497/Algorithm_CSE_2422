#include <bits/stdc++.h>
using namespace std;

void scana(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void printa(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void countingSort(int a[], int n)
{
    int maxVal = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > maxVal)
            maxVal = a[i];

    int count[maxVal + 1] = {0};
    for (int i = 0; i < n; i++)
        count[a[i]]++;

    int index = 0;
    for (int i = 0; i <= maxVal; i++)
    {
        while (count[i] > 0)
        {
            a[index++] = i;
            count[i]--;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    scana(arr, n);

    countingSort(arr, n);

    printa(arr, n);

    return 0;
}

