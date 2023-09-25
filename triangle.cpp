#include<iostream>
#include<math.h>
using namespace std;
float tri(float i,float j,float k){
	float s = (i+j+k)/2;
	s=s*(s-i)*(s-j)*(s-k);
	return s;
	
}
int main(){
float a ,b ,c ,area;
cout<<"enter the value a=";
cin>>a;
cout<<"enter the value b=";
cin>>b;
cout<<"enter the value c=";
cin>>c;
area= tri(a,b,c);
area= sqrt(area);
cout<<"area of triangle ="<<area;
}


