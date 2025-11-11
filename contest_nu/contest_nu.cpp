#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cin >> n;

    int result = 1;

    if (n == 1) {
        cout << result;
        return 0;
    }

    result = n + (n - 2);

    cout << result;

    return 0;
}