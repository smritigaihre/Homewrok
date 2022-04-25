//find the volume using oop concept with needed access specifiers.

#include<iostream>
using namespace std;

class Volume{
   
   private:
   int length, breadth, height, Vol;

public:
   void getVolume()
   {
       cout<<"Enter the length:"<<endl;
       cin>>length;
       cout<<"Enter the breadth:"<<endl;
       cin>>breadth;
       cout<<"Enter the height:"<<endl;
       cin>>height;
   }
     void calculatevol()

     {

      Vol = length * breadth * height;
     }
     
   void displayvolume()
   {
        cout<<"The volume is:"<<Vol;
   }


};

int main()
{
    Volume v1;
    v1.getVolume();
    v1.calculatevol();
    v1.displayvolume();

    return 0;
}


