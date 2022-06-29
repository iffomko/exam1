//
// Created by Iluha on 28.06.2022.
//
#pragma once
#ifndef PROJECT12_MATRIX_H
#define PROJECT12_MATRIX_H

#include <iostream>
#include <fstream>

class Matrix {
    int** array;
    int n;
    int m;
public:
    Matrix();
    Matrix(const Matrix &other);
    ~Matrix();

    void readMatrix(std::ifstream &fin);
    void search();
};


#endif //PROJECT12_MATRIX_H
