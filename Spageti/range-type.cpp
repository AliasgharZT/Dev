#include<iostream>

using namespace std;

int main(){
	char c1=-128,c2=128;
	cout<<"char:"<<int(c1)<<" to "<<int(c2)<<endl;
	
	int a1=-32000,a2=32000;
	cout<<"int:"<<a1<<" to "<<a2<<endl;
	
	float b1=-2000000000,b2=2000000000;
	cout<<"float:"<<b1<<" to "<<b2<<endl;
	
	cout<<"float 3.4*10^-38 to 3.4*10^38\n";
	cout<<"double 1.7*10^-308 to 1.7*10^308\n";
	
	return 0;
}

