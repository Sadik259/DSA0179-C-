#include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int count;
    int sum;

public:
    DivisibleByNine() {
        count = 0;
        sum = 0;
    }
    ~DivisibleByNine() {
        cout << "Total numbers divisible by 9 between 100 and 200: " << count << endl;
        cout << "Sum of numbers divisible by 9: " << sum << endl;
    }
    void findAndSumDivisibleByNine() {
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
    }
};

int main() {
    DivisibleByNine obj;
    obj.findAndSumDivisibleByNine();
    return 0;
}

