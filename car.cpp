#include "stdafx.h"
#include "car.h"

using namespace std;


Car::Car()
{
}
//------------------Type----------------------
Car::Car(string Type)
{
    setTypeCar(Type);
}
void Car::setTypeCar(string Type)
{
    TypeCar=Type;
  cout<<"Your name of type need to be 15 symbols maximum."<<endl;
	if(Type.length()<=15)
	{
		TypeCar=Type;
	}
	if(Type.length()>15)
	{
		TypeCar=Type.substr(0, 15);
	}
}
string Car::getTypeCar()
{
	return TypeCar;
}
void Car::displayMessage()
{
	cout<<"Type: "<<getTypeCar()<<endl;
	cout<<"Way: "<<getWayCar()<<endl;
	cout<<"Price: "<<getPriceCar()<<endl;
}
//------------------Price---Way-------------------
Car::Car(int Way, int Price)
{
	setWayCar(Way);
    setPriceCar(Price);
}
void Car::setWayCar(int Way)
{
	WayCar=Way;
}
void Car::setPriceCar(int Price)
{
	PriceCar=Price;
}
//------------------Way----------------------
int Car::getWayCar()
{
	return WayCar;
}
//------------------Price----------------------
int Car::getPriceCar()
{
	return PriceCar;
}
