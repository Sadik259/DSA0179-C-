#include <iostream>
class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    Counter operator++() {
        ++count;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }

    void display() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c1, c2;

    ++c1;
    c1.display();
    c2 = c1++;
    c1.display(); 
    c2.display(); 

    return 0;
}

