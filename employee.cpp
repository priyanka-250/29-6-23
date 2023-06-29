#include<iostream>
#include<string.h>
using namespace std;

class students{
	public:
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char address [100];
	char email[100];
	char contact[100];
	
	void set()
	{
		cout<<"enter id =";
		cin>>id;
		cout<<"enter name =";
		cin>>name;
		cout<<"enter role =";
		cin>>role;
		cout<<"enter salary =";
		cin>>salary;
		cout<<"enter experience =";
		cin>>experience;
		cout<<"enter address =";
		cin>>address;
		cout<<"enter email =";
		cin>>email;
		cout<<"enter contact =";
		cin>>contact;
		}	
		void get()
		{
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
			cout<<"role="<<role<<endl;
			cout<<"salary="<<salary<<endl;
			cout<<"experience="<<experience<<endl;
			cout<<"address="<<address<<endl;
			cout<<"email="<<email<<endl;
			cout<<"contact="<<contact<<endl;
		}
};
main()
{
	students s[100];
	int i,n;
	for(i=0;i<n;i++)
	{
		s[i].set();
	}
	for(i=0;i<=n;i++)
	{
		s[i].get();
	}
}
