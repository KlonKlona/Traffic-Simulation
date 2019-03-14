#include "VehicleFactory.h"

VehicleFactory::VehicleFactory()
{

}

VehicleFactory::~VehicleFactory()
{

}

Vehicle * VehicleFactory::getVehicle(char * name)
{
	return nullptr;
}

Vehicle * VehicleFactory::getInstance()
{
	return nullptr;
}

Vehicle * VehicleFactory::createVehicle(char *type)
{
	Vehicle *vehicle = new Vehicle();

	char vehicleType[64];
	int carID;
	int xVehicleLocation;
	int yVehicleLocation;
	double direction;
	double Acceleration;

	return nullptr;
}
