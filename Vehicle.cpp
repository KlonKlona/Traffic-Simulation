#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS

#include "Vehicle.h"
#include "Map.h"
#include "Road.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include <time.h>

using namespace std;

Vehicle::Vehicle()
{

	carID = 0;
	direction = 0;
	Acceleration = 0.0;
	speedKMH = 0.0;
	xVehicleLocation = 0;
	yVehicleLocation = 0;

}

Vehicle::~Vehicle()
{

}


void Vehicle::setCarID(int ID)
{
	carID = ID;
}

char *Vehicle::getType()
{
	return type;
}

int Vehicle::getCarID()
{
	return carID;
}

void Vehicle::setDirection(int direc)
{
		direction = direc;
}

void Vehicle::setAcceleration(double inputAcceleration)
{
	Acceleration = inputAcceleration;
}

void Vehicle::setSpeedKMH(double speed)
{
	speedKMH = speed;
}

void Vehicle::setxVehicleLocation(int location)
{
	xVehicleLocation = location;
}

void Vehicle::setyVehicleLocation(int location)
{
	yVehicleLocation = location;
}

double Vehicle::getSpeedKMH()
{
	return speedKMH;
}

int Vehicle::getDirection()
{
	return direction;
}

double Vehicle::getAcceleration()
{
	return Acceleration;
}

int Vehicle::getxVehicleLocation()
{
	return xVehicleLocation;
}

int Vehicle::getyVehicleLocation()
{
	return yVehicleLocation;
}
