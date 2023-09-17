#include <iostream>

using namespace std;

const int MAX = 100;
int arr[MAX], idx[MAX];

void A(int n, int r) {
    for (int i = 0; i < r; i++) {
        arr[i] = i + 1; // khởi tạo tổ hợp ban đầu
    }

    while (arr[0] <= n - r + 1) { // duyệt qua tất cả các tổ hợp có thể
        for (int i = 0; i < r; i++) {
            cout << arr[i] << " "; // in ra tổ hợp hiện tại
        }
        cout << endl;

        int i = r - 1;
        while (i >= 0 && arr[i] == n - r + i + 1) {
            i--;
        }
        if (i < 0) { // đã duyệt qua tất cả các tổ hợp
            break;
        }
        arr[i]++;
        for (int j = i + 1; j < r; j++) {
            arr[j] = arr[i] + j - i; // cập nhật tổ hợp tiếp theo
        }
    }
}



int main() {
    int n, r;
    cout << "Nhap n va r: ";
    cin >> n >> r;
    cout << "To hop chap k của r phan tu: " << endl;
    A(n, r); // tìm và in ra tất cả các tổ hợp chập r của n phần tử

    return 0;
}