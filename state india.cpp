#include<iostream>
#include<string.h>
using namespace std;

class gujarat{
	public:
	    char city[100];
		char state[100];
		char place[100];
		char temple[100];
		static char language_name[100];
		char food[100];
		char festival[100];
		
	    
	
	    static void info()
{
	cout<<"language_name="<<language_name<<endl;
}
	    
};


class rajasthan{
	public:
		char city[100];
		char state[100];
		char place[100];
		char temple[100];
		static char language_name[100];
		char food[100];
		char festival[100];
		
		
	   		static void info()
		{
			cout<<"language_name="<<language_name<<endl;
		}
};

char gujarat::language_name[100]="Hindi";
char rajasthan::language_name[100]="hindi";
	

int main()
{
	gujarat s1;
	
	rajasthan o1;
	
	
    strcpy(s1.city, "dehli");
    strcpy(s1.state,"gujarat");
	strcpy(s1.place,"red fort");
	strcpy(s1.temple,"akshardham");
	strcpy(s1.food,"momos");
	strcpy(s1.festival,"holi");
	
	
	
	
	s1.info();
	cout<<"city="<<s1.city<<endl;
	cout<<"state="<<s1.state<<endl;
	cout<<"place="<<s1.place<<endl;
	cout<<"temple="<<s1.temple<<endl;
	cout<<"food="<<s1.food<<endl;
    cout<<"festival="<<s1.festival<<endl;
    
    

    strcpy(o1.city, "ajmer");
    strcpy(o1.state,"rajashthan");
	strcpy(o1.place,"amber");
	strcpy(o1.temple,"birla mandir");
	strcpy(o1.food,"kachoris");
	strcpy(o1.festival,"gangaur");
	
	
	
	
	o1.info();
	cout<<"city="<<o1.city<<endl;
	cout<<"state="<<o1.state<<endl;
	cout<<"place="<<o1.place<<endl;
	cout<<"temple="<<o1.temple<<endl;
	cout<<"food="<<o1.food<<endl;
    cout<<"festival="<<o1.festival<<endl;
    

	

	
	
	
	cout<<" "<<endl;
	
}

