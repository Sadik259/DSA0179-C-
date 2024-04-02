#include <iostream>

class MyFunction {
public:
    void operator()(int a, int b) {
        std::cout << "Sum: " << (a + b) << std::endl;
    }
};

int main() {
    MyFunction func;
    func(5, 7); 

    return 0;
}

