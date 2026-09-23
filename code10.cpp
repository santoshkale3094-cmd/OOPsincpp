#include <iostream>
using namespace std;

int maximum(int, int);

int main() {
    int a = 25, b = 40;

    cout << "Maximum = " << maximum(a, b) << endl;

    return 0;
}

int maximum(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}