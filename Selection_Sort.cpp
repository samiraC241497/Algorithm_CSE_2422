#include <bits/stdc++.h>
using namespace std;

void scana(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
}

void printa(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    scana(a, n);

    cout << "before sorting: ";
    printa(a, n);
    cout << endl;

    selection_sort(a, n);

    cout << "after sorting: ";
    printa(a, n);

    return 0;
}

