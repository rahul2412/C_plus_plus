#include<iostream>
using namespace  std;
class person
{
	private:
		char name[20];
		long int contact;
		public:
			void read()
			{
				cout<<"enter name";
				cin>>name;
				cout<<"enter contact";
				cin>>contact;
			}
			void show()
			{
				cout<<"name entered is";
				cout<<name<<endl;
				cout<<"contact is";
				cout<<contact<<endl;
			}
};
class student:public person
{
	int roll_no;
	char course[10];
	public:
		void read1()
		{
			read();
			cout<<"enter roll_no";
			cin>>roll_no;
			cout<<"enter coursre";
			cin>>course;
		}
		void show1()
		{
			show();
			cout<<"roll_no entered is";
			cout<<"course is"<<course<<endl;
		}
};
class teacher:public person
{
	char dept_name[10];
	public:
		void read2()
		{
			//read1();

			cout<<"enter dept name";
				cin>>dept_name;
		}
		void show2()
		{
			cout<<"dept name is"<<dept_name<<endl;
		}
};
main()
{
	student ob;
	ob.read1();
	ob.show1();
	teacher ob2;
	ob2.read2();
	ob2.show2();
}
