#include <bits/stdc++.h>
using namespace std;

//outofbound error presents
//solved by changing the type from int to string

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int temp = a, flag = 0;
    a = a * 10;

    for (int i = 0; i <= 9; i++) {
        temp = a + i;
        if (temp % b == 0) {
            a = temp;
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        for (int i = 1; i < n; i++) {
            a *= 10;
            a %= 100000000;
        }
        cout << a;
    } else {
        cout << -1;
    }

    return 0;
}
