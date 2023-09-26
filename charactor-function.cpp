#include<iostream>
using namespace std;
void charCheck(char i){
	cout<<i;
if((i>=65&&i<=90)||(i>=97&&i<= 122)){
cout<<"alpabet";
}
else if(i>=48&&i<57){
cout<<"digit";
}
else{
cout<<"special charactor";
}
}
int main(){
	char charactor;
	cout<<"enter the value:";
	cin>>charactor;
	charCheck(charactor);

	
}