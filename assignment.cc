#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter your marks to determine your grade"<<endl;
	cin>>number;
	
	if(number>=80 && number <= 100)
	{
		cout<<"Grade A"<<endl;
	}else if(number>=75 && number<= 79)
	{
		cout<<"B+"<<endl;
	}else if(number>=70 && number<=74)
	{
			cout<<"B"<<endl;
		}else if(number>=65 && number<=69)
		{
			cout<<"C+";
		}else if(number>=60 && number<=64)
		{
			cout<<"C";
		}else if(number>=55 && number<=59)
		{
			cout<<"D+";
		}else if(number>=50 && number<=54)
		{
			cout<<"D";
		}else if(number>=45 && number<=49)
		{
			cout<<"E";
		}else{
			cout<<"FAILED";
		}
		
		return 0;
	}

//index number 10670360.
