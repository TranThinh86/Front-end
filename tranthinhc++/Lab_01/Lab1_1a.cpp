#include <iostream>
#include <cmath>
using namespace std;

double sum(int n) {
    if (n == 1) {
        return 1;
    } else
              return ((pow(-1, n+1) * (1.0/n))+sum(n-1));
}

int main() {
    int n;
    cin>>n;
    double s = sum(n);
    cout << s << endl;
    return 0;
}