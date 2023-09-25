#include<iostream>
using namespace std;
int addition(int i,int j){
int result=i+j;
return result;
}
int main(){
int  a,b,sum;
cout<<"enter the value a=";
cin>>a;
cout<<"enter the value b=";
cin>>b;
sum=addition(a,b);
cout<<"sum="<<sum;


}