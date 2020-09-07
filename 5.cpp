#include<iostream>
using namespace std;
 class B;
 class A;

class A{
	int number1;
	public:
		void getData(int n){
			number1=n;
		}
		void show(void){
			cout<<"The first number is: "<<number1<<endl;
		}
		friend void Swap(A &m, B &n);
};

class B{
	int number2;
	public:
		void getData(int n){
			number2=n;
		}
		void show(void){
			cout<<"The second number is: "<<number2<<endl;
		}
		friend void Swap(A &m, B &n);
};

void Swap(A &n1 ,B &n2){
	int temp;
	temp=n1.number1;
	n1.number1=n2.number2;
	n2.number2=temp;
	
}

int main(){
	A n1;
	B n2;
	cout<<"Original Values:\n"<<endl;
	n1.getData(1);
	n1.show();
	n2.getData(2);
	n2.show();
	Swap(n1,n2);
	cout<<"\nAfter Swaping:\n"<<endl;
	n1.show();
	n2.show();
	return 0;
}
