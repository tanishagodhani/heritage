#include<iostream>
#include<string.h>
using namespace std;

class Mother {
	public:
		void display()
		{
			cout<<"I am Mother"<<endl;
		}
};

class Daughter : public Mother{
	public:
		void display()
		{
			cout<<"I am Daughter"<<endl;
		}
};

int main()
{
	Daughter daughter;
	daughter.display();
	
	return 0;
}

