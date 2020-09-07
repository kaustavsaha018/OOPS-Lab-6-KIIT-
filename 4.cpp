#include<iostream>
using namespace std;

class complex{
	float real;
	float img;
	
	public:
	void getData(float r, float i){
			real=r;
			img=i;
		}
		void display(void){
			cout<<"The complex number is:"<<endl;
			cout<<real<<" + "<<img<<"i"<<endl;
		}
		friend complex add_complex(complex c1, float f);
};

complex add_complex (complex c1, float f){
	complex temp;
	temp.real=c1.real+f;
	temp.img=c1.img;
	
	return temp;
}

int main(){
	complex c1,c2;
	c1.getData(1,2);
	c2=add_complex(c1,2);
	c2.display();
}
