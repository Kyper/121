// 121.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "join.h"
#include "car.h"


using namespace std;

int main()
{
   string TypeCar; 
   int PriceCar;
   int WayCar;
   Car myCar; 
   

   cout << myCar.getTypeCar() << endl;

   
   cout << "\nPlease enter the car type:" << endl;
   cin>>TypeCar; 
   myCar.setTypeCar( TypeCar );
 
   cout << "\nPlease enter the car price:" << endl;
   cin>>PriceCar; 
   myCar.setPriceCar( PriceCar );

   cout << "\nPlease enter the car way:" << endl;
   cin>>WayCar; 
   myCar.setWayCar( WayCar );
  
   myCar.displayMessage();
   
   //---------------------------------------------------
   cout<<"Length of Type: "<<TypeCar.length()<<" symbols"<<endl;
   //---------------------------------------------------
   Car Type1("Lion", 15000, 500);
   Type1.displayMessage();
   //---------------------------------------------------
   myCar.display();
   cout << endl;
   getch();
} 

