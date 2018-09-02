#include <iostream>

using namespace std;

int main (){
	
int result;
cout<<"please enter your results"<<endl;
cin>>result;

if(result >=80 && result <=100){
	cout<<"A";
	
}
else if(result>=75 && result <=79){
	cout<<"B+";
}
else if(result>=70 && result <=74){
	cout<<"B";
}
else if(result>=65 && result <=69){
	cout<<"C+";
}
else if(result>=60 && result <=64){
	cout<<"C";
}
else if(result>=55 && result <=59){
	cout<<"D+";
}
else if(result>=50 && result <=54){
	cout<<"D";
}
else if(result>=45 && result <=49){
	cout<<"E";
}
else if(result>=0 && result <=44){
	cout<<"F";
}
else{
	cout<<"invalid result"<<endl;
}
return 0;
}


