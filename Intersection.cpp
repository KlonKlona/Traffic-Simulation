#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS


#include "Intersection.h"
#include "Road.h"

using namespace std;

Intersection::Intersection()
{
	intersectionID = 0;
	xPoint = 0.0;
	yPoint = 0.0;
}

Intersection::~Intersection()
{

}

void Intersection::setIntersectionID(int ID)
{
	intersectionID = ID;
}


void Intersection::setIntersectionData(int intersectID, double xPosition, double yPosition)
{
	intersectionID = intersectID;
	xPoint = xPosition;
	yPoint = yPosition;
}

int Intersection::getIntersectionID()
{
	return intersectionID;
}

double Intersection::getxPoint()
{
	return xPoint;
}

double Intersection::getyPoint()
{
	return yPoint;
}

