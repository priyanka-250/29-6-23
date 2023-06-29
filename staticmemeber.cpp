#include<iostream>
#include<string.h>
using namespace std;

class students{
	public:
		int id;
		char stu_name[100];
		int stu_roll_no;
		int  stu_standard;
		int stu_age;
		int stu_contact;
		static char stu_edu_institute_name[100];
	    char stu_address[100];
	   	
	    
	
	    static void info()
{
	cout<<"stu_edu_institute_name="<<stu_edu_institute_name<<endl;
}
	    
};


class school{
	public:
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		int stu_contact;
		static char stu_edu_institute_name[100];
	    char stu_address[100];
	   		static void info()
		{
			cout<<"school="<<stu_edu_institute_name<<endl;
		}
};

char school::stu_edu_institute_name[100]="ashadeep school";
char students::stu_edu_institute_name[100]="rnw and white institute";
	

int main()
{
	students s1;
	
	school h1;
	
	
    s1.id= 1;
    strcpy(s1.stu_name,"priya");
	s1.stu_roll_no=12;
	s1.stu_standard=10;
	s1.stu_age=23;
	s1.stu_contact=7865434567;
	strcpy(s1.stu_address,"103royalarcade");
	
	
	
	s1.info();
	cout<<"ID="<<s1.id<<endl;
	cout<<"STU_NAME="<<s1.stu_name<<endl;
	cout<<"STU_ROLL_NO="<<s1.stu_roll_no<<endl;
	cout<<"STU_STANDARD="<<s1.stu_standard<<endl;
	cout<<"STU_AGE="<<s1.stu_age<<endl;
    cout<<"STU_CONTACT="<<s1.stu_contact<<endl;
    cout<<"STU_ADDRESS="<<s1.stu_address<<endl;
    
	h1.id= 1;
	strcpy(h1.stu_name,"princy");
	h1.stu_roll_no=10;
	h1.stu_standard=11;
	h1.stu_age=19;
	h1.stu_contact=7865489567;
	strcpy(h1.stu_address,"101royalarcade");
	
	
	h1.info();
	cout<<"ID="<<h1.id<<endl;
	cout<<"STU_NAME="<<h1.stu_name<<endl;
	cout<<"STU_ROLL_NO="<<h1.stu_roll_no<<endl;
	cout<<"STU_STANDARD="<<h1.stu_standard<<endl;
	cout<<"STU_AGE="<<h1.stu_age<<endl;
    cout<<"STU_CONTACT="<<h1.stu_contact<<endl;
    cout<<"STU_ADDRESS="<<h1.stu_address<<endl;

	
	
	
	cout<<" "<<endl;
	
}

