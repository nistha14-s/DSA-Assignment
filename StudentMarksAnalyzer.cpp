#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
    cout << "Enter marks:\n";
    for(int i=0; i<n; i++)
        cin >> marks[i];

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(marks[j] < marks[j+1]) {
                swap(marks[j], marks[j+1]);
            }
        }
    }

    cout << "\nTop 3 Marks:\n";
    for(int i=0; i<3 && i<n; i++)
        cout << marks[i] << " ";

    float sum = 0;
    for(int i=0; i<n; i++)
        sum += marks[i];

    cout << "\nAverage Score: " << sum/n;

    return 0;
}
