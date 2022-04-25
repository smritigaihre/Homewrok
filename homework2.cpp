//Create a class name car with data members, 
//1.brand , 2.color ,3.no of seats, make two objects.
//use the concept of message passing.

#include<iostream>
#include<string>
using namespace std;

class car{
     private:
    string brand, color;
    int seat_no;
    public:
     void getbrand()
     {
         cout<<"Enter the brand name:"<<endl;
         cin>>brand;
     }
     void displaybrand()
     {
         cout<<"The brand name of car is:"<<brand<<endl;
         
     }
     void getcolor()
     {
          cout<<"Enter the color of a car:"<<endl;
         cin>>color;
     }
     void displaycolor()
     {
         cout<<"The color of a car is:"<<color<<endl;
     }

     void getseatno()
     {
          cout<<"Enter the number of seats in a car:"<<endl;
         cin>>seat_no;
     }

     void displayseatno()
     {
         cout<<"The number of seats are:"<<seat_no<<endl;
     }


};

int main()
{
    car c1;
    car c2;
    c1.getbrand();
    c1.getcolor();
    c1.getseatno();
    c1.displaybrand();
    c1.displaycolor();
    c1.displayseatno();
    c2.getbrand();
    c2.getcolor();
    c2.getseatno();
    c2.displaybrand();
    c2.displaycolor();
    c2.displayseatno();

    return 0;

    
}
