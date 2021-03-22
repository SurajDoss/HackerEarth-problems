/*
Given a 2D array A, your task is to convert all rows to columns and columns to rows.

Input:
First line contains 2 space separated integers, N - total rows, M - total columns.
Each of the next N lines will contain M space separated integers.

Output:
Print M lines each containing N space separated integers.


*/



#include <iostream>

using namespace std;

int main(){
	int row, col;
	int matrix[10][10];

	cin>>row>>col;
	for (int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			cin>>matrix[i][j];
		}
		cout<<endl;
	}
	for(int i = 0; i<col; i++){
		for(int j = 0; j<row; j++){
			cout<<matrix[j][i]<<" ";
		}
		cout<<endl;
	}
}
