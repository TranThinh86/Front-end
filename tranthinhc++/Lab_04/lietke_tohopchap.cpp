#include <iostream>
#include <vector>

using namespace std;

void xuly(vector<int>& arr, int len, vector<int>& kq, int brr) {
    if (kq.size() == len) {
        for (int i = 0; i < len; i++) {
            cout << kq[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = brr; i < arr.size(); i++) {
        kq.push_back(arr[i]);
        xuly(arr, len, kq, i);
        kq.pop_back();
    }
}

int main() {
    vector<int> arr = {1, 2, 3,5,1};
    int len = 2;
    vector<int> kq;
    xuly(arr, len, kq, 0);
    return 0;
}
