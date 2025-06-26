#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    int res = 0;
    bool prime = false;

    for (int i = num + 1;; ++i) {
        prime = true;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            res = i;
            break;
        }
    }

    cout << res << endl;
    return 0;
}
