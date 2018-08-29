#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int a, b=1;
	cout<<"Please enter your positive integer"<<endl;
	cin>>a;
	
	for(int n=2; n<a-1; n++){
		
		if(a%n!=0){
			
			continue;
		}
		else{
			b=0;
		}
	}
	if(b==0){
	   
	   cout<<"Your number is not a prime"<<endl;
	   
	}
	else{
		cout<<"Your number is a prime"<<endl;
	}
	return 0;
}
