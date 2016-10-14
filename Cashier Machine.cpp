#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	const int items=9;
	cout<<"this is the list of available items: "<<endl<<endl;
	string itemsarr[items]={"detergen","soap","shampoo",
						   	"toothpaste","cocacola","sprite",
						   		 "fanta","wax","toys"	};
	
	
	
	for(int i=0;i<9;i++)
	{
		cout<< itemsarr[i] <<endl;
	}
	
	cout<<endl;
	
	
	//string itemstobuy;
	/*cout<<"Input the items you want to buy : "<<itemstobuy;
	
	getline(cin,itemstobuy);
	
	
	if (itemstobuy!=itemsarr[items])
	{
		return 0;
	}*/
	
		
	
	

	
	return 0;
}
