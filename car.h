#include <iostream>
#include <string>

using namespace std;


class Car
{
public:
	Car();

    Car(string, int, int);
    void setTypeCar(string);
	string getTypeCar();
	void displayMessage();
	void setPriceCar(int);
	void setWayCar(int);
	int getWayCar();
	int getPriceCar();
	Car(int);
	void setFormuleCar(int);
	int getFormuleCar();
	void display();
private:
   string TypeCar; 
   int PriceCar;
   int WayCar;
   int FormuleCar;
};  
