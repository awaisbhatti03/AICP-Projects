#include<iostream>
using namespace std;

struct train{
	int seats;
	float money;
	string departure_time, return_time;
};

void book();
train train1();
train train2();
train train3();
train train4();
void train1_book();
void train2_book();
void train3_book();
void train4_book();
void exit();

train t1= train1();
train t2= train2();
train t3= train3();
train t4= train4();

int count=0;

int main()
{
	cout<<"\t\tWelcome!!!\n\n";
	book();
	
	return 0;
}

train train1()
{
	train temp;
	temp.seats= 80*6;
	temp.money=0;
	temp.departure_time="9:00";
	temp.return_time= "10:00";
	return temp;
}

train train2()
{
	train temp;
	temp.seats= 80*6;
	temp.money=0;
	temp.departure_time="11:00";
	temp.return_time= "12:00";
	return temp;
}

train train3()
{
	train temp;
	temp.seats= 80*6;
	temp.money=0;
	temp.departure_time="13:00";
	temp.return_time= "14:00";
	return temp;
}

train train4()
{
	train temp;
	temp.seats= 80*8;
	temp.money=0;
	temp.departure_time="15:00";
	temp.return_time= "16:00";
	return temp;
}

void train1_book()
{
	system("cls");
	cout<<"Enter number of seats to book: ";
	int discounted_seats=0;
	float upcost, downcost;
	int s;
	cin>>s;
	if(s<=80)
	{
		discounted_seats= s/10;
	}
	else
	{
		discounted_seats= 8;
	}
	upcost= (s-discounted_seats)*25;
	downcost= (s-discounted_seats)*25;
	if(s<=t1.seats)
	{
		if(discounted_seats!=0)
		{
			cout<<"Congratulations!!!\nYou got "<<discounted_seats<<" seats free\n";
		}
			cout<<"You have to pay "<<upcost<<" for up journey\n";
			cout<<"You have to pay "<<downcost<<" for down journey\n";
			cout<<"You have to pay total: $"<<upcost+downcost<<endl;
			t1.money+= upcost+downcost;
			t1.seats-= s;
			
			if(t1.seats==0 && t2.seats==0 && t3.seats==0 && t4.seats==0)
			{
				exit();
			}
			else
			{
				system("pause");
				book();
			}
	}
	else
	{
		cout<<"Not enough seats available..\n";
		cout<<"Choose another train\n";
		book();
	}
}

void train2_book()
{
	system("cls");
	cout<<"Enter number of seats to book: ";
	int discounted_seats=0;
	float upcost, downcost;
	int s;
	cin>>s;
	if(s<=80)
	{
		discounted_seats= s/10;
	}
	else
	{
		discounted_seats= 8;
	}
	upcost= (s-discounted_seats)*25;
	downcost= (s-discounted_seats)*25;
	if(s<=t2.seats)
	{
		if(discounted_seats!=0)
		{
			cout<<"Congratulations!!!\nYou got "<<discounted_seats<<" seats free\n";
		}
			cout<<"You have to pay "<<upcost<<" for up journey\n";
			cout<<"You have to pay "<<downcost<<" for down journey\n";
			cout<<"You have to pay total: $"<<upcost+downcost<<endl;
			t2.money+= upcost+downcost;
			t2.seats-= s;
			
			if(t1.seats==0 && t2.seats==0 && t3.seats==0 && t4.seats==0)
			{
				exit();
			}
			else
			{
				system("pause");
				book();
			}
	}
	else
	{
		cout<<"Not enough seats available..\n";
		cout<<"Choose another train\n";
		book();
	}
}

void train3_book()
{
	system("cls");
	cout<<"Enter number of seats to book: ";
	int discounted_seats=0;
	float upcost, downcost;
	int s;
	cin>>s;
	if(s<=80)
	{
		discounted_seats= s/10;
	}
	else
	{
		discounted_seats= 8;
	}
	upcost= (s-discounted_seats)*25;
	downcost= (s-discounted_seats)*25;
	if(s<=t3.seats)
	{
		if(discounted_seats!=0)
		{
			cout<<"Congratulations!!!\nYou got "<<discounted_seats<<" seats free\n";
		}
			cout<<"You have to pay "<<upcost<<" for up journey\n";
			cout<<"You have to pay "<<downcost<<" for down journey\n";
			cout<<"You have to pay total: $"<<upcost+downcost<<endl;
			t3.money+= upcost+downcost;
			t3.seats-= s;
			
			if(t1.seats==0 && t2.seats==0 && t3.seats==0 && t4.seats==0)
			{
				exit();
			}
			else
			{
				system("pause");
				book();
			}
	}
	else
	{
		cout<<"Not enough seats available..\n";
		cout<<"Choose another train\n";
		book();
	}
}

void train4_book()
{
	system("cls");
	cout<<"Enter number of seats to book: ";
	int discounted_seats=0;
	float upcost, downcost;
	int s;
	cin>>s;
	if(s<=80)
	{
		discounted_seats= s/10;
	}
	else
	{
		discounted_seats= 8;
	}
	upcost= (s-discounted_seats)*25;
	downcost= (s-discounted_seats)*25;
	if(s<=t4.seats)
	{
		if(discounted_seats!=0)
		{
			cout<<"Congratulations!!!\nYou got "<<discounted_seats<<" seats free\n";
		}
			cout<<"You have to pay "<<upcost<<" for up journey\n";
			cout<<"You have to pay "<<downcost<<" for down journey\n";
			cout<<"You have to pay total: $"<<upcost+downcost<<endl;
			t4.money+= upcost+downcost;
			t4.seats-= s;
			
			if(t1.seats==0 && t2.seats==0 && t3.seats==0 && t4.seats==0)
			{
				exit();
			}
			else
			{
				system("pause");
				book();
			}
	}
	else
	{
		cout<<"Not enough seats available..\n";
		cout<<"Choose another train\n";
		book();
	}
}

void book()
{
	count++;
	if(count!=1)
	{
		system("cls");
	}
	cout<<"Train 1:\n";
	cout<<"Seats Available: "<<t1.seats<<endl;
	cout<<"Departure Time: "<<t1.departure_time<<endl;
	cout<<"Return Time: "<<t1.return_time<<endl;
	cout<<"Revenue Generated: "<<t1.money<<endl<<endl;
	
	cout<<"Train 2:\n";
	cout<<"Seats Available: "<<t2.seats<<endl;
	cout<<"Departure Time: "<<t2.departure_time<<endl;
	cout<<"Return Time: "<<t2.return_time<<endl;
	cout<<"Revenue Generated: "<<t2.money<<endl<<endl;
	
	cout<<"Train 3:\n";
	cout<<"Seats Available: "<<t3.seats<<endl;
	cout<<"Departure Time: "<<t3.departure_time<<endl;
	cout<<"Return Time: "<<t3.return_time<<endl;
	cout<<"Revenue Generated: "<<t3.money<<endl<<endl;
	
	cout<<"Train 4:\n";
	cout<<"Seats Available: "<<t4.seats<<endl;
	cout<<"Departure Time: "<<t4.departure_time<<endl;
	cout<<"Return Time: "<<t4.return_time<<endl;
	cout<<"Revenue Generated: "<<t4.money<<endl<<endl;
	
	cout<<"Choose a train to book tickets:\n";
	cout<<"1. Train 1\n";
	cout<<"2. Train 2\n";
	cout<<"3. Train 3\n";
	cout<<"4. Train 4\n";
	
	int choice;
	label:
	cin>>choice;
	switch(choice)
	{
		case 1:
			train1_book();
			break;
		case 2:
			train2_book();
			break;
		case 3:
			train3_book();
			break;
		case 4:
			train4_book();
			break;
		default:
			cout<<"Invalid Choice\nTry Again...";
			goto label;
	}
}

void exit()
{
	system("pause");
	system("cls");
	
	string most_profit;
	float money;
	
	if(t1.money>=t2.money && t1.money>=t3.money && t1.money>=t4.money)
	{
		most_profit="Train 1";
		money= t1.money;
	}
	else if(t2.money>=t1.money && t2.money>=t3.money && t2.money>=t4.money)
	{
		most_profit="Train 2";
		money= t2.money;
	}
	else if(t3.money>=t2.money && t3.money>=t1.money && t3.money>=t4.money)
	{
		most_profit="Train 3";
		money= t3.money;
	}
	else
	{
		most_profit="Train 4";
		money= t4.money;
	}
	
	cout<<"All tickets are sold\n";
	cout<<"Total revenue generated today is: $"<<t1.money+t2.money+t3.money+t4.money<<endl;
	cout<<"The most profitable train today was: "<<most_profit<<endl;
	cout<<"Revenue generated by "<<most_profit<<": $"<<money<<endl;
}
