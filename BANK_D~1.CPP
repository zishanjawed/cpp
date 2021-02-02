#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class bank

{
char name[20];
char accno[16];
char acct[10];
int dip,wid;
double bl;
public:
bank()
{ bl=500000;
}
void initial();
void diposit();
void withdrow();
void display1();
void display2();
};
void bank::initial()
{ cout<<endl<<"ENTER YOUR NAME"<<endl;
cin>>name;
cout<<endl<<"ENTER YOUR ACCOUNT NUMBER"<<endl;
cin>>accno;
cout<<endl<<"AND YOUR ACCOUNT TYPE IS:"<<endl;
cin>>acct;
//bl=50000;
}
void bank::diposit()
{
cout<<endl<<"HOW MUCH MONEY YOU WANT TO DIPOSIT IN YOUR ACCOUNT"<<"\n";
cin>>dip;
bl=bl+dip;
}
void bank::withdrow()
{
abc:
cout<<endl<<"YOU HAVE "<<bl<<"MONEY IN YOUR ACCOUNT"<<"\n";
cout<<endl<<"HOW MUCH MONEY YOU WANT TO WITHDRAW"<<endl;
cin>>wid;

if(wid>bl)
	{
cout<<endl<<"SORRY THE MONEY YOU HAVE ENTERED IS MORE THAN THE MONEY YOU HAVE IN YOUR ACCOUNT"<<"\n";
cout<<endl<<"TRY AGIN"<<"\n";
goto abc;  }
else
bl=bl-wid;
}
void bank::display1()
{
cout<<endl<<"THANKYOU FOR BANKING WITH US"<<"\n";
cout<<endl<<name;
cout<<endl<<"YOU HAVE "<<bl<<" AMOUNT IN YOUR ACCOUNT"<<"\n";
}
void bank::display2()
{
cout<<endl<<"THANKYOU FOR BANING WITH US"<<"\n";
cout<<endl<<name;
cout<<endl<<"YOU HAVE "<<bl<<" MONEY LEFT IN YOUR ACCOUNT"<<"\n";

}
int main()
{
bank z[50];
int i,ans,ans1;
clrscr();
for (i=0;i<50 ;i++)
{
	z[i].initial();
	cout<<endl<<"PRESS 1 TO DIPOSIT AND 0 TO WITHDROW AN AMOUNT";
	cin>>ans;
	if(ans==1)
	{z[i].diposit();
	z[i].display1();}
	else if(ans==0)
	{z[i].withdrow();
	 z[i].display2();
	}
	cout<<endl<<"PRSS 1 TO CONTINEU.........";
	if (ans1!=1)
		break;

}
cout<<endl<<"##############################################"<<endl<<"coded by ZISHAN JAWED";
getch();
return 0;
}
