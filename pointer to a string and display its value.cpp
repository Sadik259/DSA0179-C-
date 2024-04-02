#include <iostream>
#include <string>

using namespace std;

int main() {
    string* ptr;
    ptr = new string;
    *ptr = "Hello, world!";
    cout << "Value pointed to by the pointer: " << *ptr << endl;
    delete ptr;

    return 0;
}

