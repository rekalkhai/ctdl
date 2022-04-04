#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* T?o các m?ng t?m */
    int L[n1], R[n2];

    /* Copy d? li?u sang các m?ng t?m */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* G?p hai m?ng t?m v?a r?i vào m?ng arr*/
    i = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con d?u tiên
    j = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con th? hai
    k = l; // IKh?i t?o ch? s? b?t d?u c?a m?ng luu k?t qu?
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy các ph?n t? còn l?i c?a m?ng L vào arr n?u có */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy các ph?n t? còn l?i c?a m?ng R vào arr n?u có */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Tuong t? (l+r)/2, nhung cách này tránh tràn s? khi l và r l?n
        int m = l + (r - l) / 2;

        // G?i hàm d? quy ti?p t?c chia dôi t?ng n?a m?ng
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        mergeSort(a, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
