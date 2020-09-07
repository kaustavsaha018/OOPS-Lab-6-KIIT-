#include<iostream>
using namespace std;

class item{
	static int count;
	int num;
	public:
		
		void getNumber(int n){
			num=n;
			count++;
		}
	    void getCount(void){
			cout<<"\nThere are "<<count<< " numbers"<<endl;
		}
};

int item::count;

int main(){
	
	item n1,n2,n3;
	
	n1.getCount();
	n2.getCount();
	n3.getCount();
	
	n1.getNumber(1);
	n1.getCount();
	
	n2.getNumber(2);
	n2.getCount();
	
	n3.getNumber(3);
	n3.getCount();
	
	return 0;
}
