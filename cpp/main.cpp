#include <iostream>
using namespace std;

void print_i(int);

int main() {
    cout << "Hi World!" << endl;
    for (int i = 0; i < 20; i += 2) {
        print_i(i);
    }
    return 0;
}

void print_i(int i) {
    cout << "The number is " << i << endl;
}