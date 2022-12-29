#include <iostream>
using namespace std;
int main() {
    double a, result;
    cin >> a;
    if (a < 0) {
        cout << "Illegal!";
      return 0;
    }
    if (a == 0) {
        result = 0;
        cout << "Result: " << result << endl;
       return 0;
    }
    double x = a , x0;
    int i = 0;

    do {
        x0 = x;
        i++;
        x = 0.5 * (x0 + a / x0);
        cout << "第" << i << "次迭代： " << x << endl;
        result = x;
    } while (abs(x0 - x) >= 1.0e-5);
    cout << "final result: " << result << endl;
    return 0;
}
