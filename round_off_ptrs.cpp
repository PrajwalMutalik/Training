#include <iostream>
using namespace std;

int main() {
    float arr[] = {3.8, 4.4, 5, 7.7, 5};
    float j, *ptr = arr, *q = arr;

    // Round each value to nearest int-like float for display
    for (j = 0; j < 5; j++) {
        cout << static_cast<int>(*arr) << " ";
        ++q;
    }

    for (j = 0; j < 5; j++) {
        cout << static_cast<int>(*ptr) << " ";
        ++ptr;
    }

    return 0;
}
