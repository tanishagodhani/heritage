#include<iostream>
#include<string.h>
using namespace std;


class Employee {
   protected:
      string name;
      int age;
      int salary;
      
   public:
      void set_values(string a, int b, int c) {
         name = a;
         age = b;
         salary = c;
      }
      
      void display() {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
         cout << "Salary: " << salary << endl;
      }
};

/
class Manager: public Employee {
   protected:
      int num_subordinates;
      
   public:
      void set_num_subordinates(int a) {
         num_subordinates = a;
      }
      
      void display() {
         Employee::display();
         cout << "Number of subordinates: " << num_subordinates << endl;
      }
};


class Engineer: public Employee {
   protected:
      string specialization;
      
   public:
      void set_specialization(string a) {
         specialization = a;
      }
      
      void display() {
         Employee::display();
         cout << "Specialization: " << specialization << endl;
      }
};


class ManagerEngineer: public Manager, public Engineer {
   public:
      void display() {
         Manager::display();
         Engineer::display();
      }
};

int main() {
   ManagerEngineer me;

   
   me.Manager::set_values("Dhruv", 19, 100000);
   me.Engineer::set_values("Neeraj", 20, 80000);
   me.Manager::set_num_subordinates(5);
   me.Engineer::set_specialization("Software Development");

   
   me.display();


}
