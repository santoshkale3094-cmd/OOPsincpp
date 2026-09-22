#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    inline int getValue() {
        return value;
    }

    friend void display(Number n);
};

void display(Number n) {
    cout << "Value: " << n.value;
}

int main() {
    Number n(100);

    cout << "Using Inline Function: "
         << n.getValue() << endl;

    cout << "Using Friend Function: ";
    display(n);

    return 0;
}