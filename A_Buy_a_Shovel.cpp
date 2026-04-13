#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for(int x = 1; x <= 10; x++) {
        int total = k * x;
        if(total % 10 == 0 || total % 10 == r) {
            cout << x;
            break;
        }
    }
    return 0;
}
