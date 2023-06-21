#include <iostream>
#include <string.h>
using namespace std;


class Animal {
   protected:
      string name;
      int age;
      
   public:
      void set_values(string a, int b) {
         name = a;
         age = b;
      }
      
      virtual void display() {
         cout << "I am an animal." << endl;
      }
};


class Zebra: public Animal {
   public:
      void display() {
         cout << "I am a zebra. My name is " << name << " and I am " << age << " years old. I come from Africa." << endl;
      }
};


class Dolphin: public Animal {
   public:
      void display() {
         cout << "I am a dolphin. My name is " << name << " and I am " << age << " years old. I come from the ocean." << endl;
      }
};

int main() {
   Zebra zebra;
   Dolphin dolphin;

   
   zebra.set_values("Raja", 5);
   dolphin.set_values("Harry", 7);

   
   zebra.display();
   dolphin.display();

   return 0;
}
