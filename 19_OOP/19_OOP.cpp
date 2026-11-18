#include <iostream>
using namespace std;

enum Type{None,Sedan,Hatchback,Universal};
class Body
{
	Type type;
public:
	Body() :type(None) {}
	Body(Type t) :type(t) {}
	void Print()const
	{
		cout << "Body's type : ";
		switch (type)
		{
		case None:cout << "None";break;
		case Sedan:cout << "Sedan";break;
		case Hatchback:cout << "Hatchback";break;
		case Universal:cout << "Universal";break;
		}
	}
		
};
class Wheel
{
	string radius;
public:
	Wheel() :radius("none") {}
	Wheel(string r) :radius(r) {}
	void Print()const { cout << "Wheel's radius : " << radius; }
};
class Engine
{
	string type;
	float volume;
public:
	Engine() :type("none"), volume(0) {}
	Engine(string t, float v) :type(t), volume(v) {}
	void Print()const 
	{
		cout << "Engine's type : " << type; 
		cout << "Engine's volume : " << volume; 
	}
};

class Door
{
	string color;
public:
	Door() :color("none") {}
	Door(string c) :color(c) {}
	void Print()const { cout << "Door's color : " << color; }
};

class Headlight
{
	string lightPower;
public:
	Headlight() :lightPower("none") {}
	Headlight(string l) :lightPower(l) {}
	void Print()const { cout << "Headlight's light power : " << lightPower; }
};



class Car
{
	Headlight* lights;
	int countLights;

	Door* doors;
	int countDoors;
	
	Wheel wheels;
	int countWheels;

	Engine engine;

	Body body;
public:
	Car() :
		lights(nullptr), countLights(4),
		doors(nullptr), countDoors(4),
		wheels(nullptr), countWheels(4), body(Type::None) {};
	Car(Headlight hl, Door d, Wheel w, string t, float v, Type tp):engine(t,v),body(tp)
	{
		
	}
};
int main()
{
    
}
