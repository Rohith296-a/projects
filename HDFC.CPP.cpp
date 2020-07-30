#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class hdfc
{
char *accountholdername;
char *accountno;
int accountpin;
char *accounttype;
int accountbalance;        // class member variables
public:
hdfc(char *ahn,char *an,int ap,char *at,int ab)
// classname & constructor name must be same
{
accountholdername=ahn;
accountno=an;
accountpin=ap;
accounttype=at;
accountbalance=ab;
}
void process(hdfc g)
{
int option;
char choice='y';
while(choice=='y')
{
	cout<<"***** Welcome to hdfc bank *******"<<endl;
	cout<<"1. Balance "<<endl;
	cout<<"2. Withdraw "<<endl;
	cout<<"3. Transfer "<<endl;
	cout<<"4. Deposit "<<endl;
	cout<<"************************************"<<endl;
	cout<<"Enter ur option"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
		char *accno;
		int acpin;
		//cout<<"Lets start balance process"<<endl;
		cout<<"Please enter Your Account Number"<<endl;
		//cin>>accno;
		gets(accno);
		if(strcmp(accno,accountno)==0)
		{
		     cout<<"Enter Your Pin no for Confirmation"<<endl;
		     cin>>acpin;
		     if(acpin==accountpin)
		     {
			cout<<"*** Your Current Balance Amt ***"<<accountbalance<<endl;
		     }
		     else
		     {
			cout<<"Sorry !! Your Pin No is Incorrect"<<endl;
		     }
		}
		else
		{
			cout<<"Sorry !! Your Account No is Invalid"<<endl;
		}
		//cout<<accno;
		break;
		case 2:
		//char *accno;
		//int acpin;
		int wamount;
		//cout<<"Lets start balance process"<<endl;
		cout<<"Please enter Your Account Number"<<endl;
		//cin>>accno;
		gets(accno);
		if(strcmp(accno,accountno)==0)
		{
		     cout<<"Enter Your Pin no for Confirmation"<<endl;
		     cin>>acpin;
		     if(acpin==accountpin)
		     {
			//cout<<"*** Your Current Balance Amt ***"<<accountbalance<<endl;
			 cout<<"Please enter your withdrawl Amont"<<endl;
			 cin>>wamount;
			 if(wamount>accountbalance)
			 {
				cout<<"Sorry !!! Insufficient Balance"<<endl;
			 }
			 else
			 {
				accountbalance=accountbalance-wamount;
				cout<<"Your Transaction is Processed..\n Please take your cash"<<endl;
			 }
		     }
		     else
		     {
			cout<<"Sorry !! Your Pin No is Incorrect"<<endl;
		     }
		}
		else
		{
			cout<<"Sorry !! Your Account No is Invalid"<<endl;
		}
		break;
		case 3:
		int tamount,tpin;
		char *taccountno;
		cout<<"Please enter Your Account Number"<<endl;
		gets(accno);
		if(strcmp(accno,accountno)==0)
		{
		      cout<<"Enter Transfer Person Account Number"<<endl;
		      gets(taccountno);
		      if(strcmp(taccountno,g.accountno)==0)
		      {
			     cout<<"Account Number is Verified Successfully"<<endl;
			     cout<<"Enter Transfer Amount"<<endl;
			     cin>>tamount;
			     if(tamount>accountbalance)
			     {
				cout<<"Insufficient Fund !!! to Transfer"<<endl;
			     }
			     else
			     {
				cout<<"To Confirm Transaction Enter ur 4 digit Pin no"<<endl;
				cin>>tpin;
				if(tpin==accountpin)
				{
				    accountbalance=accountbalance-tamount;
				    g.accountbalance=g.accountbalance+tamount;
				    cout<<"Transaction Done !!! "<<endl;
				}
				else
				{
				cout<<"Sorry !! Incorrect pin no"<<endl;
				}

			     }
		      }
		      else
		      {
		      cout<<"Incorrect !! Transfer Account Number"<<endl;
		      }
		}
		else
		{
		cout<<"Sorry !!! Incorrect Account Number"<<endl;
		}
		break;
		case 4:
		int damount;
		//cout<<"Lets start balance process"<<endl;
		cout<<"Please enter Your Account Number"<<endl;
		//cin>>accno;
		gets(accno);
		if(strcmp(accno,accountno)==0)
		{
		     cout<<"Enter Your Pin no for Confirmation"<<endl;
		     cin>>tpin;
		     if(tpin==accountpin)
		     {
			//cout<<"*** Your Current Balance Amt ***"<<accountbalance<<endl;
			 cout<<"Please enter your Deposit Amont"<<endl;
			 cin>>damount;
				accountbalance=accountbalance+damount;
				cout<<"Your Deposited Successfully.."<<endl;

		     }
		     else
		     {
			cout<<"Sorry !! Your Pin No is Incorrect"<<endl;
		     }
		}
		else
		{
			cout<<"Sorry !! Your Account No is Invalid"<<endl;
		}
		break;
	}
cout<<"Do u want to continue Press y or exit  for n"<<endl;
cin>>choice;
} // while loop block
cout<<"****** Thank You ****"<<endl;
exit(1);
//getch();
}
void display()
{
cout<<"Account HolderName " <<accountholdername<<endl;
cout<<"Account number "<<accountno<<endl;
cout<<"Account pin "<<accountpin<<endl;
cout<<"Account type"<<accounttype<<endl;
cout<<"Account Balance "<<accountbalance<<endl;
}
};
void main()
{
clrscr();
hdfc chiru("chiru","hdfc12345",1234,"savings",5000);
hdfc gagan("gagan","hdfc56789",1111,"savings",1200);
chiru.process(gagan);
chiru.display();
gagan.display();
getch();
}