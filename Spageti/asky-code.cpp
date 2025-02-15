#include<iostream>

using namespace std;

int main(){
	int a=10;
	cout<<"a=10 ==>"<<a<<endl;
	
	int b='b';
	cout<<"b='b' ==>"<<b<<endl;
	
	cout<<"(('a'*'z')+'A'-'Z')\n"<<"("<<int('a')<<"*"<<int('z')<<")+"<<int('A')<<"-"<<int('Z')<<"="<<int(('a'*'z')+'A'-'Z');
	
	return 0;
}

