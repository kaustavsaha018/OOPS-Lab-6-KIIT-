#include<iostream>
using namespace std;

class complex{
	public:
		float real;
		float img;
		
		void getData(float r, float i){
			real=r;
			img=i;
		}
		void display(void){
			cout<<"The complex number is:"<<endl;
			cout<<real<<" + "<<img<<"i"<<endl;
		}
		complex add(complex c1, complex c2){
			complex temp;
			temp.real = c1.real+c2.real; 
			temp.img = c1.img+c2.img;
			
			return temp;
		}
};

int main(){
	complex c1,c2;
	c1.getData(1,2);
	c2.getData(3,4);
	c1.display();
	c2.display();
	
	complex c3;
	c3=c3.add(c1,c2);
	cout<<"The sum is:"<<endl;
	c3.display();
	
}
