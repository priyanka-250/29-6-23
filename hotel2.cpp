#include<iostream>
#include<string.h>
using namespace std;

class students{
	public:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		int rating_type;
		char website[100];
		void set(int id,char name[],char type[],int staff_size,int room_size,int establish_year,char address[],int rating_type,char website[])
		{
			this-> id=id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			this-> rating_type=rating_type;
			strcpy(this->website,website);
		}
		void get()
		{
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
			cout<<"type="<<type<<endl;
			cout<<"staff_size="<<staff_size<<endl;
			cout<<"room_size="<<room_size<<endl;
			cout<<"establish_year="<<establish_year<<endl;
			cout<<"address="<<address<<endl;
			cout<<"rating_type="<<rating_type<<endl;
			cout<<"website="<<website<<endl;
		}
};
main()
{
	students s;
	s.set(1,"amiras","1",5,3,2009,"103jakatnaka" ,3,"amiras1234.com");
	s.get();
}
