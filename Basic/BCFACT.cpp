#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 1) return n;
    return n * factorial(n - 1);
}

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        else {
            cout << factorial(n) << endl;
        }
    }
    return 0;
}