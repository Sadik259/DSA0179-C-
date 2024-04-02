#include <iostream>
using namespace std;

int main() {
    float arr[] = {3.14f, 2.718f, 1.618f, 4.669f, 2.303f};
    float* ptr = arr;
    cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " "; 
    }
    cout << endl;

    return 0;
}

