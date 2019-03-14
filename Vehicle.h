#ifndef VEHICLE_H_
#define VEHICLE_H_
#include "Road.h"
#include "Map.h"
#include "Intersection.h"



class Vehicle
{
	private:
	    int maxVel;
	    int maxAcc;
		char type[64];
		int carID;
		int direction;
		int xDestination;
		int yDestination;
		double Acceleration;
		double speedKMH;
		int xVehicleLocation;
		int yVehicleLocation;
		bool turnDecided;
		enum turnState { LEFT, STRAIGHT, RIGHT };
		Road *road;
		Intersection *intersection;

	protected:
		turnState turnDirection;

	public:
		Vehicle();
		~Vehicle();
		void setType(char *name);
		void setCarID(int ID);
		char * getType();
		int getCarID();

		void setDirection(int direc);
		void setAcceleration(double acceleration);
		void setSpeedKMH(double speed);
		void setxVehicleLocation(int location);
		void setyVehicleLocation(int location);

		double getSpeedKMH();
		int getDirection();
		double getAcceleration();
		int getxVehicleLocation();
		int getyVehicleLocation();

		void makeMove();

};

#endif
