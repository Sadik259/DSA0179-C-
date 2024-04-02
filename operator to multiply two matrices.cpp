#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int> > data;
    int rows;
    int cols;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data.resize(rows, std::vector<int>(cols, 0));
    }

    // Overloading the * operator to multiply two matrices
    Matrix operator*(const Matrix& other) {
        if (this->cols != other.rows) {
            std::cerr << "Cannot multiply matrices: Inner dimensions do not match!" << std::endl;
            return Matrix(0, 0);
        }

        Matrix result(this->rows, other.cols);

        for (int i = 0; i < this->rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < this->cols; ++k) {
                    result.data[i][j] += this->data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Display the matrix
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Manual assignment of matrix elements
    void set(int row, int col, int value) {
        data[row][col] = value;
    }
};

int main() {
    Matrix mat1(2, 3);
    Matrix mat2(3, 2);

    // Initialize matrices
    mat1.set(0, 0, 1);
    mat1.set(0, 1, 2);
    mat1.set(0, 2, 3);
    mat1.set(1, 0, 4);
    mat1.set(1, 1, 5);
    mat1.set(1, 2, 6);

    mat2.set(0, 0, 7);
    mat2.set(0, 1, 8);
    mat2.set(1, 0, 9);
    mat2.set(1, 1, 10);
    mat2.set(2, 0, 11);
    mat2.set(2, 1, 12);

    std::cout << "Matrix 1:" << std::endl;
    mat1.display();

    std::cout << "Matrix 2:" << std::endl;
    mat2.display();

    Matrix result = mat1 * mat2;

    std::cout << "Result of Matrix Multiplication:" << std::endl;
    result.display();

    return 0;
}

