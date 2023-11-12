#include<iostream>
using namespace std;

struct components{
	string itemcode, description;
	float price;
};


void menu();
void exit();
void purchase();
components* c_case();
components* ram();
components* main_hdd();
components* ssd();
components* second_hdd();
components* optical_drive();
components* OS();

float bill=0;
int addition_items=0;

int main()
{
	cout<<"\t\tWelcome to our store\n\n";
	menu();
	
	return 0;
}

components* c_case()
{
	components* c_case= new components[2];
	c_case[0].itemcode="a1";
	c_case[0].description="Compact";
	c_case[0].price=75;

	c_case[1].itemcode="a2";
	c_case[1].description="Tower";
	c_case[1].price=150;
	return c_case;
}

components* ram()
{
	components* ram= new components[3];
	ram[0].itemcode="b1";
	ram[0].description="8 gb";
	ram[0].price=79.99;

	ram[1].itemcode="b2";
	ram[1].description="16 gb";
	ram[1].price=149.99;

	ram[2].itemcode="b3";
	ram[2].description="32 gb";
	ram[2].price=299.99;
	return ram;
}

components* main_hdd()
{
	components* main_hdd= new components[3];
	main_hdd[0].itemcode="c1";
	main_hdd[0].description="1 TB";
	main_hdd[0].price=49.99;

	main_hdd[1].itemcode="c2";
	main_hdd[1].description="2 TB";
	main_hdd[1].price=89.99;

	main_hdd[2].itemcode="c3";
	main_hdd[2].description="4 TB";
	main_hdd[2].price=129.99;
	return main_hdd;
}

components* ssd()
{

	components* ssd= new components[2];
	ssd[0].itemcode="d1";
	ssd[0].description="240 GB";
	ssd[0].price=59.99;

	ssd[1].itemcode="d2";
	ssd[1].description="480 GB";
	ssd[1].price=119.99;
	return ssd;
}

components* second_hdd()
{
	components* second_hdd= new components[3];
	second_hdd[0].itemcode="e1";
	second_hdd[0].description="1 TB";
	second_hdd[0].price=49.99;

	second_hdd[1].itemcode="e2";
	second_hdd[1].description="2 TB";
	second_hdd[1].price=89.99;

	second_hdd[2].itemcode="e3";
	second_hdd[2].description="4 TB";
	second_hdd[2].price=129.99;
	return second_hdd;
}

components* optical_drive()
{
	components* optical_drive= new components[2];
	optical_drive[0].itemcode="f1";
	optical_drive[0].description="DVD/Bluray Player";
	optical_drive[0].price=50;

	optical_drive[1].itemcode="f2";
	optical_drive[1].description="DVD/Bluray Re-writer";
	optical_drive[1].price=100;
	return optical_drive;
}

components* OS()
{
	components* OS= new components[2];
	OS[0].itemcode="g1";
	OS[0].description="Standard Version";
	OS[0].price=100;

	OS[1].itemcode="g2";
	OS[1].description="Professional Version";
	OS[1].price=175;
	return OS;
}

void menu()
{
	cout<<"1. Enter a new Purchase\n";
	cout<<"2. Exit\n";
	
	int choice;
	label:
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			purchase();
			break;
		case 2:
			exit();
			break;
		default:
			cout<<"Invalid choice\nTry Again\n";
			goto label;
	}
}

void exit()
{
	cout<<"\nThank You for shopping\nLogging Out...\n";
	system("pause");
}


void purchase()
{
	system("cls");
	string pcase="", pram="", pmain_hdd="", pssd="", psecond_hdd="", poptical_drive="", pOS="";
	components* case_= c_case();
	components* ram_= ram();
	components* main_hdd_= main_hdd();
	components* ssd_ = ssd();
	components* second_hdd_= second_hdd();
	components* optical_drive_= optical_drive();
	components* OS_ = OS();
	
	bill+=200;
	
	cout<<"\t\tPurchase Page\n\n";
	
	cout<<"\nChoose a Case:\n";
	cout<<"1. "<<case_[0].description<<"\tPrice: "<<case_[0].price<<endl;
	cout<<"2. "<<case_[1].description<<"\tPrice: "<<case_[1].price<<endl;
	
	int case_choice;
	cin>>case_choice;
	if(case_choice==1)
	{
		pcase=case_[0].description;
		bill+= case_[0].price;
	}
	else
	{
		pcase=case_[1].description;
		bill+= case_[1].price;
	}
	
	system("cls");
	cout<<"\t\tPurchase Page\n\n";
	
	cout<<"\nChoose a RAM:\n";
	cout<<"1. "<<ram_[0].description<<"\tPrice: "<<ram_[0].price<<endl;
	cout<<"2. "<<ram_[1].description<<"\tPrice: "<<ram_[1].price<<endl;
	cout<<"3. "<<ram_[2].description<<"\tPrice: "<<ram_[2].price<<endl;
	
	int ram_choice;
	cin>>ram_choice;
	if(ram_choice==1)
	{
		pram=ram_[0].description;
		bill+= ram_[0].price;
	}
	else if(ram_choice==2)
	{
		pram=ram_[1].description;
		bill+= ram_[1].price;
	}
	else
	{
		pram=ram_[2].description;
		bill+= ram_[2].price;
	}
	
	system("cls");
	cout<<"\t\tPurchase Page\n\n";
	
	cout<<"\nChoose a Hard Disk Drive:\n";
	cout<<"1. "<<main_hdd_[0].description<<"\tPrice: "<<main_hdd_[0].price<<endl;
	cout<<"2. "<<main_hdd_[1].description<<"\tPrice: "<<main_hdd_[1].price<<endl;
	cout<<"3. "<<main_hdd_[2].description<<"\tPrice: "<<main_hdd_[2].price<<endl;
	
	int hdd_choice;
	cin>>hdd_choice;
	if(hdd_choice==1)
	{
		pmain_hdd=main_hdd_[0].description;
		bill+= main_hdd_[0].price;
	}
	else if(hdd_choice==2)
	{
		pmain_hdd=main_hdd_[1].description;
		bill+= main_hdd_[1].price;
	}
	else
	{
		pmain_hdd=main_hdd_[2].description;
		bill+= main_hdd_[2].price;
	}
	
	cout<<"\n\nDo you want to buy additional items?\n";
	cout<<"1. Yes\n";
	cout<<"2. No\n";
	
	int c;
	top:
	cin>>c;
	switch(c)
	{
		case 1:
			goto additional;
			break;
		case 2:
			goto billing;
			break;
		default:
			cout<<"Choose again\n";
			goto top;
	}
	
	additional:
		
	system("cls");
	cout<<"\t\tPurchase Page\n\n";
	
	cout<<"\nChoose a Solid State Drive:\n";
	cout<<"1. "<<ssd_[0].description<<"\tPrice: "<<ssd_[0].price<<endl;
	cout<<"2. "<<ssd_[1].description<<"\tPrice: "<<ssd_[1].price<<endl;
	cout<<"3. None\n";
	
	int ssd_choice;
	cin>>ssd_choice;
	if(ssd_choice==1)
	{
		pssd=ssd_[0].description;
		bill+= ssd_[0].price;
		addition_items++;
	}
	else if(ssd_choice==2)
	{
		pssd=ssd_[1].description;
		bill+= ssd_[1].price;
		addition_items++;
	}
	else
	{
		bill+=0;
	}
	
	system("cls");
	cout<<"\t\tPurchase Page\n\n";
	
	cout<<"\nChoose a Secondary Hard Disk Drive:\n";
	cout<<"1. "<<second_hdd_[0].description<<"\tPrice: "<<second_hdd_[0].price<<endl;
	cout<<"2. "<<second_hdd_[1].description<<"\tPrice: "<<second_hdd_[1].price<<endl;
	cout<<"3. "<<second_hdd_[2].description<<"\tPrice: "<<second_hdd_[2].price<<endl;
	cout<<"4. None\n";
	
	int shdd_choice;
	cin>>shdd_choice;
	if(shdd_choice==1)
	{
		psecond_hdd=second_hdd_[0].description;
		bill+= second_hdd_[0].price;
		addition_items++;
	}
	else if(shdd_choice==2)
	{
		psecond_hdd=second_hdd_[1].description;
		bill+= second_hdd_[1].price;
		addition_items++;
	}
	else if(shdd_choice==3)
	{
		psecond_hdd=second_hdd_[2].description;
		bill+= second_hdd_[2].price;
		addition_items++;
	}
	else
	{
		bill+=0;
	}
	
	system("cls");
	cout<<"\t\tPurchase Page\n\n";
	
	cout<<"\nChoose an Optical Drive:\n";
	cout<<"1. "<<optical_drive_[0].description<<"\tPrice: "<<optical_drive_[0].price<<endl;
	cout<<"2. "<<optical_drive_[1].description<<"\tPrice: "<<optical_drive_[1].price<<endl;
	cout<<"3. None\n";

	int od_choice;
	cin>>od_choice;
	if(od_choice==1)
	{
		poptical_drive=optical_drive_[0].description;
		bill+= optical_drive_[0].price;
		addition_items++;
	}
	else if(od_choice==2)
	{
		poptical_drive=optical_drive_[1].description;
		bill+= optical_drive_[1].price;
		addition_items++;
	}
	else
	{
		bill+=0;
	}
	
	system("cls");
	cout<<"\t\tPurchase Page\n\n"; 
	
	cout<<"\nChoose an OS:\n";
	cout<<"1. "<<OS_[0].description<<"\tPrice: "<<OS_[0].price<<endl;
	cout<<"2. "<<OS_[1].description<<"\tPrice: "<<OS_[1].price<<endl;
	cout<<"3. None\n"; 
	
	int OS_choice;
	cin>>OS_choice;
	if(OS_choice==1)
	{
		pOS=OS_[0].description;
		bill+=OS_[0].price;
		addition_items++;
	}
	else if(OS_choice==2)
	{
		pOS=OS_[1].description;
		bill+= OS_[1].price;
		addition_items++;
	}
	else
	{
		bill+=0;
	}
	
	billing:
		if(addition_items==0)
		{
			system("cls");
			cout<<"\t\tBilling Page\n\n";
		
			cout<<"You have bought:\n";
			cout<<"Basic Components: $200\n";
			cout<<"Case: "<<pcase<<"\nRAM: "<<pram<<"\nHard Disk Drive: "<<pmain_hdd<<endl;
		cout<<"\nYour bill is: $"<<bill<<endl;
		exit();	
		}
		else if(addition_items==1)
		{
			system("cls");
			cout<<"\t\tBilling Page\n\n";
		
			cout<<"You have bought:\n";
			cout<<"Basic Components: $200\n";
			cout<<"Case: "<<pcase<<"\nRAM: "<<pram<<"\nHard Disk Drive: "<<pmain_hdd<<"\nSolid State Disk: "<<pssd<<"\nSecondary Harrd Disk Drive: "<<psecond_hdd<<"\nOptical Drive: "<<poptical_drive<<"OS: "<<pOS<<endl;
			cout<<"\nYour Original bill is: $"<<bill<<endl;
			cout<<"\nBill payable after 5% discount is: "<<bill-(bill* 5/100.0);
			exit();	
		}
		else
		{
			system("cls");
			cout<<"\t\tBilling Page\n\n";
		
			cout<<"You have bought:\n";
			cout<<"Basic Components: $200\n";
			cout<<"Case: "<<pcase<<"\nRAM: "<<pram<<"\nHard Disk Drive: "<<pmain_hdd<<"\nSolid State Disk: "<<pssd<<"\nSecondary Harrd Disk Drive: "<<psecond_hdd<<"\nOptical Drive: "<<poptical_drive<<"OS: "<<pOS<<endl;
			cout<<"\nYour Original bill is: $"<<bill<<endl;
			cout<<"\nBill payable after 10% discount is: "<<bill-(bill* 10/100.0);
			exit();	
		}
	
}
