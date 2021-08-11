#include <iostream>
using namespace std;

int main()
{
	
	char lastra;
	int change;
	int singson;
	int ker = 500;
	int un = 400;
	int des = 200;
	int prem = 1000;
	int num1, num2, num3, num4;
	int tot1 = 0, tot2 = 0, tot3 = 0, tot4 = 0;
	int final,final1;
	
	cout<<"\t\t\t\t\t<Welcome to the Lasingson Gasoline Station>"<<endl<<endl<<endl;
	cout<<"\t\t1) Kerosine             P500"<<endl
		<<"\t\t2) Unleaded             P400"<<endl
		<<"\t\t3) Desiel               P200"<<endl
		<<"\t\t4) Premium              P1000"<<endl<<endl;
		
	do
	{
		
		
		cout<<"Press the Number: ";
		cin>>singson;
		
		switch (singson)
	
		{
		
		case 1:
				cout<<"\t\tYou Bought a Kerosine"<<endl;
				
	
				cout<<"\t\tHow many do you want?: ";
				cin>>num1;
			tot1 = ker * num1;
				
			break;
			
		case 2:
				
				cout<<"\t\tYou bought a <Unleaded>"<<endl;
				cout<<"\t\tHow many do you want?: ";
				cin>>num2;
				tot2 = num2 * un;
				
			break;
			
		case 3:
			
				
				cout<<"\t\tYou bought <Desiel>"<<endl;
				cout<<"\t\tHow many do you want?: ";
				cin>>num3;
				tot3 = num3 * des;
				
			break;
		
		case 4:
			
				
				cout<<"\t\tYou bought <Premium>"<<endl;
				cout<<"\t\tHow many do you want?: ";
				cin>>num4;
				tot4 = num4 * prem;
			
			break;
	
		}
		
		cout<<"\n\n\t\tDo you buy another Gasoline (y/n)?: ";
		cin>>lastra;
		
	}
			
			
			while ((lastra == 'y') || (lastra == 'Y'));
			final = tot1 + tot2 + tot4 + tot3;
	
	do
	{
		
		cout<<"\tAmount to be paid: "<<final<<endl;
		cout<<"\tYour Money: ";
		cin>>change;
		

	}
	
		while (change > change);
		
	system ("pause");
	system ("cls");
	cout<<"\t\t\t\t<Welcome to the Lasingson Gasoline Station>"<<endl<<endl<<endl;
	cout<<"\t\t\t\t\tAmount to be Paid History: "<<final<<endl<<endl<<endl;
	cout<<"\t\t\tYour Money History: "<<change;
	final1 = change - final;
	cout<<"\t\tYour Change: "<<final1;
	
}
