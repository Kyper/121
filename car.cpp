#include "stdafx.h"
#include "car.h"

using namespace std;


Car::Car()
{
}
//------------------Type----------------------
Car::Car(string Type, int Way, int Price)
{
    setTypeCar(Type);
    setPriceCar(Price);
	setWayCar(Way);
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
//----------------Formule---------------------
Car::Car(int Formule)
{
	setFormuleCar(Formule);
}
void Car::setFormuleCar(int Formule)
{
	Formule=getPriceCar()/getWayCar();
	FormuleCar=Formule;
}
int Car::getFormuleCar()
{
	return FormuleCar;
}
void Car::display()
{
	cout<<"Attitude Price to Way: "<<getFormuleCar()<<endl;
}
