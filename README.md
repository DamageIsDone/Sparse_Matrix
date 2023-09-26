# Sparse_Matrix

Compute y = Ax, where A is a sparse matrix
In the first Lecture (see the file in An introduction to Data Structures and Algorithms), we introduce the
definition of a sparse matrix, and we store the sparse matrix in three formats: the triplet format, the Compressed
Sparse Column (CSC) format, and the Compressed Sparse Row (CSR) format.
Given the following matrix A
A =
−2 −1 0 0
1 3 0 0
0 0 4 0
0 5 0 −1
The triple format of this sparse matrix is characterized by following tree arrays:
For a C program
#define nnz 7
int row_index [ nnz ] = {0 , 0 , 1 , 1 , 2 , 3 , 3 };
int column_index [ nnz ] = {0 , 1 , 0 , 1 , 2 , 1 , 3 };
double value [ nnz ] = {−2, −1, 1 , 3 , 4 , 5 , −1};
or for a C++ program
const i n t nnz = 7 ;
int row_index [ nnz ] = {0 , 0 , 1 , 1 , 2 , 3 , 3 };
int column_index [ nnz ] = {0 , 1 , 0 , 1 , 2 , 1 , 3 };
double value [ nnz ] = {−2, −1, 1 , 3 , 4 , 5 , −1};
• Please provide the CSR format of this matrix. You can directly write down the three arrays associated
with the CSR format for this sparse matrix.
• Please write a C or C++ program to implement b = Ax based on the three arrays for the CSR format of
the sparse matrix A, where
x =
1
2
1
2
In the code, please print of values of bi for i = 0, 1, 2, 3.
