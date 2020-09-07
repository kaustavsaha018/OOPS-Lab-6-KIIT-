#include<iostream>
using namespace std;

class Account{
	static int interest_rate;
	char name[30];
	int account_no;
	float balance;
	public:
		void getdata(char s[], int ac, float b){
			int i;
			for(i=0;i<30;i++){
				name[i] = s[i];
			}
			account_no=ac;
			balance=b;
		}
		float find_balance(int years){
			float Amt=balance+(balance*interest_rate*years)/100;
			return Amt;
		}
		void show(){
			int i;
			cout<<"Name: "<<name<<endl;
			cout<<"Account Number: "<<account_no<<endl;
			cout<<"Balance: "<<balance<<endl;
		}
		static void change_rate(int rate){
			interest_rate=rate;
		}
};

int Account::interest_rate=0;

int main(){
	Account a1;
	a1.getdata((char *)"Kaustav Saha", 1929018, 1000);
	a1.show();
	a1.change_rate(10); 
	cout<<"\nWhen interest rate is 10%"<<endl;
	int curr_bal=a1.find_balance(2);
	cout<<"The current balance is: "<<curr_bal<<endl;
	a1.change_rate(15);
	cout<<"\nWhen interest rate is 15%"<<endl;
	curr_bal=a1.find_balance(2);
	cout<<"The current balance is: "<<curr_bal<<endl;
	
	return 0;
}
