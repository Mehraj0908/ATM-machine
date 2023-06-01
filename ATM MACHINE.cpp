#include<iostream>
using namespace std;
class bank
{
	int dbal,wbal,bal;
	string name;
	string address;
	int acct;
	
	public:
		bank()
		{
			cout<<"enter your name"<<endl;
			cin>>name;
			cout<<"enter address"<<endl;
			cin>>address;
			cout<<"enter your balance"<<endl;
			cin>>bal;
		}
void display()
     {
	 cout<<"name is="<<name<<endl;
     cout<<"address is="<<address<<endl;
     cout<<"balance is="<<bal<<endl;
 }
 void dep()
 {
 	cout<<"enter amount to deposit"<<endl;
 	cin>>dbal;
 	bal+=dbal;
 }
 void with()
   {
 	cout<<"enter the amount to withdraw"<<endl;
 	cin>>wbal;
 	if(bal<wbal)
 	{
	 
 	 cout<<"insufficient balance"<<endl;
     }
 	 else
 	bal-=wbal;
  }
  ~bank()
  {
  }
};
int main()
{
	
bank b;
int pass;
int q=1;
while(q!=0)
{
switch(q)
{
case 1:
{
	int num,c=0,temp;
	cout<<"entr account number"<<endl;
	cin>>num;
	temp=num;  
	while(temp!=0) 
	 	{
		temp=temp/10;  
		c++;
		}
cout<<"Enter pass"<<endl;
cin>>pass;	
if(pass==123 && c==10)
{

int ch=0;
while(ch!=4)
{
	cout<<"1-dep\n2-with\n3-check\n4-exit\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				b.dep();
				break;
			}
		case 2:
			{
			b.with();
			break;
			}
		case 3:
			{
				b.display();
				break;
				
			}
		case 4:
			{
				break;
			}
	}
  }
}
}
}
}
}
