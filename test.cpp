#include <iostream>

using namespace std;

int main() {
    int arr[5] = {};

    cout << "Bai toan tim so nguyen duong lon nhat." << endl;
    cout << "Nhap vao 5 so nguyen!" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "So thu " << i+1 << ": ";
        cin >> arr[i];
    }

    int max = 0;
    for (int i = 0; i < 5; i++) {
        if ( max < arr[i])
            max = arr[i];
    }

    cout << "So nguyen duong lon nhat la: " << max;
    return 0;
}
