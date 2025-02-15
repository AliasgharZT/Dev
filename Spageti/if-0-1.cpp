#include<iostream>

using namespace std;

int main(){
	
	cout<<(1>2)<<endl;
	
	int a=10,b=11,c=12;
	cout<<(a<b)<<endl;
	
// c not change
	cout<<(a>b?c++:c--)<<endl<<c<<endl;
	
// c change 
	cout<<(a>b?++c:--c)<<c<<endl;
			
	          
	return 0;
}
            
