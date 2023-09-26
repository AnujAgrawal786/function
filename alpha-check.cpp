#include<iostream>
using namespace std;
void alphaCheck(char i){
if(i>='A'&&i<='Z'){
cout<<"uppercase";
}
else if(i>='a'&&i<='z'){
cout<<"lower case:";
}
}


int main(){
char j;
cout<<"enter alphabet:";
cin>>j;
alphaCheck(j);
}