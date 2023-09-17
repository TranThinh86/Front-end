#include <iostream>
using namespace std;

void taoChuoiNhiPhan(int* arr, int n, int so_0, int vi_tri)
{
    if (so_0 == 0)
    {
// In ra chuỗi bit đã tạo
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << endl;
        return;
    }
// Trường hợp đệ quy: thử chèn 0 vào từng vị trí còn lại
    for (int i = vi_tri; i <= n - so_0; i++)
    {
        arr[i] = 0;
        taoChuoiNhiPhan(arr, n, so_0 - 1, i + 1);
        arr[i] = 1;
    }
}
    int main()
    {
        cout << "Nhap n: ";
        int n; cin >> n; // độ dài chuỗi bit
        int so_0 = 3; // số lượng số 0 cần chèn
        int arr[n];
// Khởi tạo mảng gồm toàn số 1
        for (int i = 0; i < n; i++)
        {
            arr[i] = 1;
        }

// Tạo tất cả các chuỗi bit có độ dài n và chứa chính xác 3 số 0
        taoChuoiNhiPhan(arr, n, so_0, 0);

        return 0;
    }