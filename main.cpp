#include <iostream>
#include <fstream>
#include "Matrix.h"

int main() {
    std::ifstream fin("C:\\project12\\input.txt");

    if (!fin) {
        std::cout << "Failed!\n";
    } else {
        int n;

        fin >> n;

        for (int i = 0; i < n; i++) {
            Matrix matrix;
            matrix.readMatrix(fin);
            matrix.search();
        }
    }

    return 0;
}
