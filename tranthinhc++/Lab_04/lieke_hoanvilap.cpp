#include <bits/stdc++.h>
#define MAX 100
using namespace std;
int n;
int a[MAX];

void xuly(int i)
{
    if (i == n) {
        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    } else {
        for (int j = i; j < n; j++) {
            swap(a[i], a[j]);
            xuly(i + 1);
            swap(a[i], a[j]);
        }
    }
}

int main()
{
    cout << "Nhap so phan tu n = ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    xuly(0);

    return 0;
}
