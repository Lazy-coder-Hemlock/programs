#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 3
int min(int x,int y,int z){
	if(x>y)
	return x<z?x:z;
	else
	return y>z?y:z;
}
int min_cost(int arr[r][c],int row,int col){
	if(row<0 or col<0)
	return 0;
	if(row==0 and col==0)
	return arr[row][col];
	else
	return arr[row][col]+min(min_cost(arr,row-1,col-1),min_cost(arr,row-1,col),min_cost(arr,row,col-1));
}
int main(){
	int arr[r][c]={{1,2,3},{4,8,2},{1,5,3}};
	cout<<min_cost(arr,2,2);
}
