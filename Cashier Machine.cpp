#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
// planned to using void (void nextchoice();)

int main()
{
	const int items=9;
	cout<<"this is the list of available items that you can buy : "<<endl<<endl;
	string itemsarr[items]={"detergen $6","soap $5","shampoo $3",
						   	"tooth paste $2","cocacola $1","sprite $1.5",
						   		 "fanta $1.75","wax $7","toys $8"	};
						   		 
	int choice;
	int a,b,c,d,e,f,g,h,i;
	float total;
	int sum;
	
	for(int i=0;i<9;i++)
	{
		cout<< i+1<<". "<< itemsarr[i] <<endl;
	}
	
	
	cout<<endl;
	
	chooice:
	cout<<"Input the items number that you want to buy : ";
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"how many detergen you want to buy ";
		cin>>a;
		cout<<"you purchase "<<a<<" detergen";
		total=a*6;
		cout<<" and the Price is $"<<total<<endl<<endl;	
	}
	else if(choice==2)
	{
		cout<<"how many soap you want to buy ";
		cin>>b;
		cout<<"you just bought "<<b<<" soap";
		total=b*5;
		cout<<" and the Price is $"<<total<<endl<<endl;
	}
	else if(choice==3)
	{
		cout<<"how many shampoo you want to buy ";
		cin>>c;
		cout<<"you just bought "<<c<<" shampoo";
		total=c*3;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==4)
	{
		cout<<"how many tooth paste you want to buy ";
		cin>>d;
		cout<<"you just bought "<<d<<" tooth paste";
		total=d*2;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==5)
	{
		cout<<"how many cocacola you want to buy ";
		cin>>e;
		cout<<"you just bought "<<e<<" cocacola";
		total=e*1;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==6)
	{
		cout<<"how many sprite you want to buy ";
		cin>>f;
		cout<<"you just bought "<<f<<" sprite";
		total=f*1.5;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==7)
	{
		cout<<"how many fanta you want to buy ";
		cin>>g;
		cout<<"you just bought "<<g<<" fanta";
		total=g*1.75;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==8)
	{
		cout<<"how many wax you want to buy ";
		cin>>h;
		cout<<"you just bought "<<h<<" wax";
		total=h*7;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==9)
	{
		cout<<"how many toys you want to buy ";
		cin>>i;
		cout<<"you just bought "<<i<<" toys";
		total=i*8;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	
	//string chooice;
	next:
		cout<<"any other item you want to buy ? Yes/No"<<" ";
		string nextchoice;
		cin>>nextchoice;
		cout<<endl;
	
	if(nextchoice=="Y" || nextchoice=="y")
	{
	goto chooice;	
	}
	/* still confused how to sum all
	else if(nextchoice=="N" || nextchoice=="n")
	{
	total+=total;
	cout<<total;
	}*/ 
	//nextchoice();

	
	
	return 0;
}


/*	void nextchoice()
{
	string chooice;
	next:
		cout<<"any other item you want to buy ? Yes/No"<<endl;
		string nextchoice;
		cin>>nextchoice;
	
	if(nextchoice=="Y" || nextchoice=="y")
	{
	goto next;	
	}	
	
}*/
	
