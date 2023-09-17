#include <iostream>
using namespace std;

void lietKeChinhHopKhongLap(int n, int r, int mang[], int index) {
    if (index == r) {
        for (int i = 0; i < r; i++) {
            cout << mang[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        bool check = false;
        for (int j = 0; j < index; j++) {
            if (mang[j] == i) {
                check = true;
                break;
            }
        }
        if (!check) {
            mang[index] = i;
            lietKeChinhHopKhongLap(n, r, mang, index+1);
        }
    }
}

int main() {
    int n, r;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap r: ";
    cin >> r;
    int mang[r];
    lietKeChinhHopKhongLap(n, r, mang, 0);
    return 0;
}
