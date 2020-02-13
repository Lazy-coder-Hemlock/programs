#include<bits/stdc++.h>
using namespace std;
string shift_cipher(string s,int shift){
	string result="";
	for(int i=0;i<s.length();i++){
	if(isupper(s[i]))
			result+=char(int(s[i]+shift-65)%26+65);
			else
			result+=char(int(s[i]+shift-97)%26+97);
	}
		return result;
	}
string decrypter(string s,int shift){
	string r="";
	for(int i=0;i<s.length();i++){
		if(isupper(s[i])){
			r+=char(int(s[i]+26-shift-65)%26+65);
		}
		else
		r+=char(int(s[i]+26-shift-97)%26+97);
	}
	return r;
}
int main(){
	string s;
	int shift;
	cin>>s>>shift;
	cout<<"Plain text is "<<s<<endl;
	cout<<"Encrypted text is ";
	string q=shift_cipher(s,shift);
	cout<<q<<endl;
	cout<<"After decyption:- ";
	cout<<decrypter(q,shift);
}
