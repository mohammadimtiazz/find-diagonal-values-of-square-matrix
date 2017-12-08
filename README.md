# find-diagonal-values-of-square-matrix
The algorithm for accessing the diagonal values of a square matrix

square matrix::: same number of row and column

2 x 2

00  01
10  11

diagonal pos1: 00, 11
doagonal pos2: 10, 11

3x3
00  01  02
10  11  12
20  21  22

diagonal pos1: 00, 11, 22
doagonal pos2: 10, 11, 20
an important fact of odd size sqaure matrix is that both diagonal share one common center

diagonalDIff >> function that find or locate the diagonal positions by scaning the entire matrix
and contain a special condition when it see both of the diagonal share one similar center

diagonalDIffFast > function that find diagonal values without scanning the entire matrix. thus it is faster
