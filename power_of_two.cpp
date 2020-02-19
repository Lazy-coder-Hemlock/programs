#include<bits/stdc++.h>
using namespace std;
bool power(int n){
	return ceil(log2(n))==floor(log2(n));
	}
bool po(int n){
		return n and (!(n&(n-1)));
}
int main(){
	int n;
	cin>>n;
	cout<<power(n)<<" "<<po(n);
}
