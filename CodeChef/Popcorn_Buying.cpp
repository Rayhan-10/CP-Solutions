#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int remaining = X - 100;
    int popcorn = remaining / 50;

    cout << popcorn << endl;

    return 0;
}