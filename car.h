#include <iostream>
#include <string>

using namespace std;


class Car
{
public:
  Car();

    Car(string);
    void setTypeCar(string);
	string getTypeCar();
	void displayMessage();
	Car(int, int);
	void setPriceCar(int);
	void setWayCar(int);
	int getWayCar();
	int getPriceCar();
private:
   string TypeCar; 
   int PriceCar;
   int WayCar;
};  
