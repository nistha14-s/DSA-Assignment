#include <iostream>
using namespace std;

int main() {
    int n, swaps = 0;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << "\nTotal swaps: " << swaps;
    return 0;
}
