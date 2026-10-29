#include <iostream>
using namespace std;

int main() {
     auto s = [](int a, int b) {
        return a + b;
     };
    cout << s(5, 10) << endl;
}