#include<bits/stdc++.h>
using namespace std;
void consecutive_char(string s){
	char sub=s[0];
	int count=1;
	int max_count=0;
	for(int i=0;i<s.length();i++){
		if(i<s.length()-1 and s[i]==s[i+1])
		count++;
		else
		{
			if(count>max_count)
			{
				max_count=count;
				sub=s[i];
			}
			count=1;
		}
	}
	cout<<sub<<" "<<max_count<<" ";
}
int main(){
	string s;
	cin>>s;
	consecutive_char(s);
}
