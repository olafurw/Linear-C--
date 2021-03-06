#ifndef MATRIXFUNCTIONS_H
#define MATRIXFUNCTIONS_H

#include <iostream>
#include <vector>
#include "Matrix.h"
#include "boost/tuple/tuple.hpp"

/*! \file MatrixFunctions.h
    
    This file contains the declarations of the basic Linear Algebra classes
    and some methods that operate on them.
*/

/** \fn int findNonZero(Matrix &m, int col);
    
    Given a Matrix and a column number, this functions
    returns the index of the first row which has a non-zero
    value in that column. If all rows have zeroes, it returns -1.
    This function is used by both gaussJordan and gaussianElimination.
*/
int findNonZero(Matrix &m, int col);

/** \fn Matrix& gaussJordan(Matrix& A, Matrix& b);
    
    Given two matrices A and b, solves the linear system of equations
    assuming the form Ax = b. Uses Gauss-Jordan. Returns a Matrix
    object containing the solution.
*/
Matrix& gaussJordan(Matrix& A, Matrix& b);

/** \fn Matrix& gaussianElimination(Matrix& A, Matrix& b);
    
    Given two matrices A and b, solves the linear system of equations
    assuming the form Ax = b. Uses Gaussian Elimination with backsubstitution.
    Returns a Matrix object containing the solution.
*/
Matrix& gaussianElimination(Matrix& A, Matrix& b);

/** \fn boost::tuple<Matrix,Matrix> LUDecompose(Matrix A);
    
    Given a matrix, returns it's LU decomposition. Two matrices L and U are returned
    as a boost tuple. Example usage:
    
    #include "boost/tuple/tuple.hpp"

    // create a new matrix
    Matrix A(3,3);
    A.populateRandom();
  
    // get its decomposition
    boost::tuple<Matrix,Matrix> lu = LUDecompose(A);
    Matrix L = lu.get<0>();
    Matrix U = lu.get<1>();
    
    // print out L and U matrices
    cout << L << endl;
    cout << U << endl;
 
*/
boost::tuple<Matrix,Matrix> LUDecompose(Matrix A);
#endif