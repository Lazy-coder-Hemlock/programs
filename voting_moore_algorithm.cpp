#include<bits/stdc++.h>
using namespace std;
int find_candidate_key(int arr[],int size){
	int maj_index=0,count=1;
	for(int i=1;i<size;i++){
		if(arr[maj_index]==arr[i])
		count++;
		else
		count--;
		if(count==0){
			maj_index=i;
			count=1;
		}
	}
	return arr[maj_index];
}
bool is_majority(int arr[],int size,int cand){
	int count=0;
	for(int i=0;i<size;i++)
		if(arr[i]==cand)
		count++;
	if(count>size/2)
	return true;
	else
	return false;
}

void print_majority(int arr[],int size){
	int cand=find_candidate_key(arr,size);
	if(is_majority(arr,size,cand))
	cout<<cand<<" ";
	else
	cout<<"No majority element"<<endl;
}
int main(){
	int size;
	cin>>size;
	int *arr=new int[size];
	for(int i=0;i<size;i++)cin>>arr[i];
	print_majority(arr,size);
	delete[]arr;
	return 0;
}
