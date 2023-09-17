#include <iostream>

using namespace std;

void lietKe(int mang[], int n, int k, int vi_tri) {
    if (vi_tri == k) {
        // In các phần tử trong mảng
        for (int i = 0; i < k; i++) {
            cout << mang[i] << " ";
        }
        cout << endl;
    } else {
        int start = 1;
        if (vi_tri > 0) {
            start = mang[vi_tri - 1];
        }
        for (int i = start; i <= n; i++) {
            mang[vi_tri] = i;
            lietKe(mang, n, k, vi_tri + 1);
        }
    }
}

int main() {
    int n, r;
    cout << "Nhap n: "; cin >> n;
    cout << "Nhap r: "; cin >> r;
    int mang[r];
    lietKe(mang, n, r, 0);
    return 0;
}