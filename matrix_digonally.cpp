#include<bits/stdc++.h>
using namespace std;
const int column=3;
void diagonal_matrix(int matrix[][column],int row,int column){
	for(int i=0;i<row;i++){
		for(int r=0,col=i;r<=i and col<=i;r++,col--){
			cout<<matrix[r][col]<<" ";
		}
		cout<<endl;
		}
	for(int i=1;i<column;i++){
		for(int r=i,col=column-1;r<=row-1 and col<=column-1;r++,col--){
			cout<<matrix[r][col]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};
	diagonal_matrix(matrix,3,3);
}
