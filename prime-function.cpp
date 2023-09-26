#include<iostream>
using namespace std;
/*void isPrime(int s,int l){
int flag;
int j=1;
int iterator = 0;
while(s<=l){
	flag=0;
	j=1;
	while(j<=s){
		if(s%j==0){
			flag ++;
		}
		j++;
	}
	if(flag==2){
		cout<<s<<"\n";
	}
	s++;
}
}
*/
int primeOrNot(int number){
int flag = 0;
int iterator = 1;
while (iterator<=number) {
if (number%iterator==0){
flag++;
}
iterator++;
}
if(flag==2){
	return 1;
}
else {
	return 0;
}
}

void primeRange(int lowerLimit,int upperLimit){
while (lowerLimit<=upperLimit)	{
	if (primeOrNot(lowerLimit)) {
	cout<<lowerLimit<<" is a prime number\n";
	}
	lowerLimit++;
}
}

int main(){
	int start ,last,result;
	cout<<"enter starting point:";
	cin>>start;
	cout<<"enter last point";
	cin>>last;
	primeRange(start,last);
	
}