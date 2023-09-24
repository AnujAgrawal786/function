#include<iostream>
using namespace std;
double power(double m, int n ){
	double res;
	res= 1;
while(n!=0){
	res = res*m;
	n--;
}
return res;	
}
float compoundInterest(int p,float r, int t){
float result;
result=p*power((1+r/100),t);
return result;
}

int main()
{
	int pri,time,ci;
	float rate;
	cout<<"enter principle";
	cin>>pri;
	cout<<"enter time";
	cin>>time;
	cout<<"enter rate";
	cin>>rate;
	cout<<"compound interest ="<<compoundInterest(pri,rate,time);
}