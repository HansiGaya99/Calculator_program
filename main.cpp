#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
main() {
	float a, b;
	char operation;
	
	
	cout<<" Enter First Number :  ";
	cin>>a;
	
	cout<<" Enter Operation (+,-,*,/) : ";
	cin>>operation;
	
	cout<<" Enter Second Number : ";
	cin>>b;
	
	switch(operation) {
		case '+' :
			cout<<" Result : "<<a+b;
			break;
		case '-' :
			cout<<" Result : "<<a-b;
			break;
		case '*' :
			cout<<" Result : "<<a*b;
			break;
		case '/' :
			cout<<" Result : "<<a/b;
			break;
		default:
			cout<<" Invalid Operation ";
			
	}
}
