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
	float total[9] = {0,0,0,0,0,0,0,0,0};
	float sum;
	int counter;
	
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
		total[0]+=a*6;
		cout<<" and the Price is $"<<total[0]<<endl<<endl;	
	}
	else if(choice==2)
	{
		cout<<"how many soap you want to buy ";
		cin>>b;
		cout<<"you just bought "<<b<<" soap";
		total[1]+=b*5;
		cout<<" and the Price is $"<<total[1]<<endl<<endl;
	}
	else if(choice==3)
	{
		cout<<"how many shampoo you want to buy ";
		cin>>c;
		cout<<"you just bought "<<c<<" shampoo";
		total[2]+=c*3;
		cout<<" and the price is $"<<total[2]<<endl<<endl;
	}
	else if(choice==4)
	{
		cout<<"how many tooth paste you want to buy ";
		cin>>d;
		cout<<"you just bought "<<d<<" tooth paste";
		total[3]+=d*2;
		cout<<" and the price is $"<<total[3]<<endl<<endl;
	}
	else if(choice==5)
	{
		cout<<"how many cocacola you want to buy ";
		cin>>e;
		cout<<"you just bought "<<e<<" cocacola";
		total[4]+=e*1;
		cout<<" and the price is $"<<total[4]<<endl<<endl;
	}
	else if(choice==6)
	{
		cout<<"how many sprite you want to buy ";
		cin>>f;
		cout<<"you just bought "<<f<<" sprite";
		total[5]+=f*1.5;
		cout<<" and the price is $"<<total[5]<<endl<<endl;
	}
	else if(choice==7)
	{
		cout<<"how many fanta you want to buy ";
		cin>>g;
		cout<<"you just bought "<<g<<" fanta";
		total[6]+=g*1.75;
		cout<<" and the price is $"<<total[6]<<endl<<endl;
	}
	else if(choice==8)
	{
		cout<<"how many wax you want to buy ";
		cin>>h;
		cout<<"you just bought "<<h<<" wax";
		total[7]+=h*7;
		cout<<" and the price is $"<<total[7]<<endl<<endl;
	}
	else if(choice==9)
	{
		cout<<"how many toys you want to buy ";
		cin>>i;
		cout<<"you just bought "<<i<<" toys";
		total[8]+=i*8;
		cout<<" and the price is $"<<total[8]<<endl<<endl;
	}
	else
	{
		return 0;
	}
	
	//string chooice;
	//next:
		cout<<"any other item you want to buy ? Yes/No"<<" ";
		string nextchoice;
		cin>>nextchoice;
		cout<<endl;

	if(nextchoice=="Y" || nextchoice=="y" || nextchoice=="yes" || nextchoice=="Yes")
	{
	goto chooice;	
	}
	else if(nextchoice=="n" || nextchoice=="N" || nextchoice=="no" || nextchoice=="No")
	{  
		for(int i =0; i <9; i++)
		sum += total[i];
		cout<<"the total price is $"<<sum<<endl;
		
	}
	
	if (sum>=100 && sum<=200)
	{
		cout<<"this is the total price after discount $"<<sum-(sum*0.1);
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
	
