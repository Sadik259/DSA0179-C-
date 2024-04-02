#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    MyNumber& operator+=(const MyNumber& other) {
        this->value += other.value;
        return *this;
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(10);

    num1 += num2;

    std::cout << "Result after addition:" << std::endl;
    num1.display(); 

    return 0;
}

