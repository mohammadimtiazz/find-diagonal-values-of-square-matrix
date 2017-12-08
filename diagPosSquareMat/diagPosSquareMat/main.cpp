#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int diagonalDIff(vector<vector<int>> matIn){
	int size = matIn.size();
	int dig1 = 0, dig2 = 0;
	int diff;
	for(int i = 0; i < size; i ++){
		for (int j = 0; j < size; j++){
			//this condition only applies for odd square matrix becasue the centre values are shared by both diagonal
			if (i == j && j == size - i - 1){
				dig1+=matIn[i][j];
				dig2+=matIn[i][j];
			}
			//diagonal that come from up to down from left to right 
			//x1
			//	x2
			//		x3
			else if (i == j){
				dig1+=matIn[i][j];
			}
			//diagonal that come from up to down from right to left 
			//		x1
			//	x2
			//x3
			else if (j == size - i - 1){
				dig2+=matIn[i][j];
			}

			else
			{
			}
		}
	}

	diff = abs(dig1 - dig2);
	return diff;
}


// this is faster as it doesn't need to scan the whole matrix
int diagonalDIffFast(vector<vector<int>> matIn){
	int size = matIn.size();
	int dig1 = 0, dig2 = 0;
	int diff;
	for(int i = 0; i < size; i ++){
		dig1 += matIn[i][i];
		dig2 += matIn[i][size-i-1];
	}

	diff = abs(dig1 - dig2);
	return diff;
}






int main(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n,vector<int>(n));

	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}

	int absDifference = diagonalDIff(mat);
	int absDifferenceFast = diagonalDIffFast(mat);
	cout << absDifference<< endl;
	cout << absDifferenceFast<< endl;
    return 0;
}