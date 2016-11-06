#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void nextchoice(float &); //function for buying the items
void yesNoContinue(float &); //for looping

int main()
{
	cout<<"\t\t\t\t\t\twelcome to GG Market "<<endl<<endl;
	const int items=9;
	cout<<"this is the list of available items that you can buy : "<<endl<<endl;
	string itemsarr[items]={"detergen $6","soap $5","shampoo $3",
						   	"tooth paste $2","cocacola $1","sprite $1.5",
						   		 "fanta $1.75","wax $7","toys $8"	};
						   		 
	
	float sum;
	int counter=0;
	
	for(counter =0;counter<9;counter++) //to show the list of the items
	{
		cout<< counter+1<<". "<< itemsarr[counter] <<endl;
	}
	
	cout<<endl;
	cout<<"if the total price is between $100 and $200 you'll get a 10% discount "<<endl;
	cout<<"and if the total price is between $1000 and $2000 you'll get a huge discount which is 30% ";
	
	cout<<endl<<endl;
	
	
	nextchoice(sum);	//calling the function
	
	
	
	
	return 0;
}

void nextchoice(float &sum) // function for user to input the items that he or she wants to buy
{
	int choice;
	unsigned int a;
	cout<<"Input the items number that you want to buy : ";
	cin>>choice; //input the choice of items that the user wants to buy
	float total; //for showing the current price
	
	
	cout << setprecision(2) << fixed << showpoint;
		
	if(choice==1)
	{
		
		cout<<"how many detergen you want to buy ";
		cin>>a;
		cout<<"you purchase "<<a<<" detergen";
		total = a*6;
		sum +=total; //sum+ for summing the prices
		cout<<" and the Price is $"<<total<<endl<<endl;	
		
	}
	else if(choice==2)
	{
		cout<<"how many soap you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" soap";
		total = a*5;
		sum+= total;
		cout<<" and the Price is $"<<total<<endl<<endl;
	}
	else if(choice==3)
	{
		cout<<"how many shampoo you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" shampoo";
		total = a*3;
		sum+=total;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==4)
	{
		cout<<"how many tooth paste you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" tooth paste";
		total = a*2;
		sum+=total;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==5)
	{
		cout<<"how many cocacola you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" cocacola";
		total = a*1;
		sum+=total;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==6)
	{
		cout<<"how many sprite you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" sprite";
		total = a*1.5;
		sum+= total;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==7)
	{
		cout<<"how many fanta you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" fanta";
		total = a*1.75;
		sum+= total;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==8)
	{
		cout<<"how many wax you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" wax";
		total = a*7;
		sum+= total;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else if(choice==9)
	{
		cout<<"how many toys you want to buy ";
		cin>>a;
		cout<<"you just bought "<<a<<" toys";
		total = a*8;
		sum+=total;
		cout<<" and the price is $"<<total<<endl<<endl;
	}
	else
	{
		cout<<"that's an invalid number! ";
		cout<<endl<<endl;
		nextchoice (sum);
		
	}
	
	
		if(a==0)
	{
		nextchoice(sum);
	}

	
	cout << "current price is : $" << sum << endl<<endl;
	yesNoContinue(sum);
}

void yesNoContinue(float &sum)  //function for looping (it will ask the user if he or she wants to buy another things)
{
	string userInput;
	cout << "Do you want to buy another item ? " ;
	cin >> userInput;
	cout<<endl;
	if (userInput == "y" || userInput == "yes" || userInput == "Yes" || userInput== "Y")
		nextchoice(sum);
	else if(userInput == "n" || userInput == "no" || userInput == "No" || userInput== "N")
		{
			if(sum>=100 && sum<=200)
			{
				sum=sum-(sum*0.1);
			}
			if(sum>=1000 && sum<=2000)
			{
				sum=sum-(sum*0.3);
			}
		cout<<"the total price is $"<<sum<<endl;
		cout<<"Thank you for shopping in our place, please come again ";
		exit(0);	
		}
	
	
}
