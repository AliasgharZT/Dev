#include<iostream>

using namespace std;

void func1(){
	cout<<"hello ...\n\n";
}

void func2();

int main(){
	
	func1();
	func2();
	return 0;
}

void func2(){
	cout<<"bye ...\n";
}
