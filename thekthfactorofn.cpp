#include <iostream>
using namespace std;

int kthFactor(int n, int k) {
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (cnt == k) {
                return i;
            }
        }
    }

    return -1;
}

int main() {
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    int result = kthFactor(n, k);

    cout << "Kth Factor: " << result << endl;

    return 0;
}
