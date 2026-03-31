#include <iostream>
using namespace std;
// repo : MergeSort_0118

int arr[20];
int n;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else
        {
            cout << "\nMaksimum panjang array yang dapat dimasukkan adalah 20" << endl;
        }
    }

    cout << endl;
    cout << "========================================================" << endl;
    cout << "================Masukkan Element Array==================" << endl;
    cout << "========================================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

// create function mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) // step 1
    {
        return; // step 1.a
    }

    int mid = (low + high) / 2; // step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);      // step 3.a
    mergeSort(mid + 1, high); // step 3.b

    int i = low;      // step 4.a
    int j = mid + 1;  // step 4.b
    int k = low;      // step 4.c

    while (i <= mid && j <= high) // step 4.d
    {
        if (arr[i] <= arr[j]) // step 4.d.i
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++; // step 4.d.ii
    }



}