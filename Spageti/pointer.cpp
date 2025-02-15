#include<iostream>

using namespace std;

int main(){
	int a=10;
	cout<<"a="<<a<<endl;
	
	int *b;
	b=&a;
	cout<<"b="<<b<<"\n*b="<<*b<<endl;
	
	int **c;
	c=&b;
	cout<<"c="<<c<<"\n*c="<<*c<<"\n**c="<<**c<<endl;
	
	a=12;
	cout<<"a:12=> "<<"a="<<a<<" *b="<<*b<<" **c="<<**c<<endl;
	
	**c=13;
	cout<<"**c:13=> "<<"a="<<a<<" *b="<<*b<<" **c="<<**c<<endl;
	
	*b=119;
	cout<<"*b:119=> "<<"a="<<a<<" *b="<<*b<<" **c="<<**c<<endl;	
	
	return 0;
}

