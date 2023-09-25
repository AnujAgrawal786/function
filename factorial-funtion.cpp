#include<iostream>
using namespace std;
int findFactorial(int j){
int fact=1;
while(j!=0){
fact=fact*j;
j--;
}
return fact;
}
int main(){
	int i;
	cout<<"enter the number=";
	cin>>i;
	i=findFactorial(i);
	cout<<"factorial: "<<i; 
}
