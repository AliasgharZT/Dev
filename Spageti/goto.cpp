#include<iostream>

using namespace std;

int main(){
	int q=0;
	l1:
		if(q>=5)
			goto l2;
		cout<<q<<endl;
		q++;
		goto l1;
	l2:
		cout<<"finish\n";
	l3:
		cout<<"bye...\n";
	l4:
		cout<<"exit???\n";		
	
		
	return 0;
}

