#include <iostream>
using namespace std;
class Number {
protected:
    int M, N, K;

public:
    Number(int m, int n, int k) : M(m), N(n), K(k) {}

    void printNumbers() {
        for (int i = M; i <= N; i += K) {
            cout << i << " ";
        }
        cout << endl;
    }
};

class Skipper : public Number {
public:
    Skipper(int m, int n, int k) : Number(m, n, k) {}
};

int main() {
    int M = 50, N = 100, K = 7;
    Skipper obj(M, N, K);
    obj.printNumbers();

    return 0;
}

