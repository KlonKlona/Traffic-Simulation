#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS


#include "Road.h"
#include "Map.h"
#include <vector>

using namespace std;

Road::Road()
{
	id=0;
	xStartPoint = 0.0;
	yStartPoint = 0.0;
    xEndPoint = 0.0;
	yEndPoint = 0.0;
	startIntersection = 0;
	endIntersection = 0;
}

Road::~Road()
{

}

bool Road::isPointOnRoad(double xCoord, double yCoord)
{

	for (int i = 0; i < 10; i++)
	{
		if (id!=i)
		{
		if (xCoord<=xEndPoint && xCoord>=xStartPoint && yCoord<=yEndPoint && yCoord>=yStartPoint)
			return true;
		}
	}
return false;
}


void Road::setxRoadStart(double startingPoint)
{
	xStartPoint = startingPoint;
}

double Road::getxRoadStart()
{
	return xStartPoint;
}

void Road::setyRoadStart(double startingPoint)
{
	yStartPoint = startingPoint;
}

double Road::getyRoadStart()
{
	return yStartPoint;
}

void Road::setxRoadEnd(double endingPoint)
{
	xEndPoint = endingPoint;
}

double Road::getxRoadEnd()
{
	return xEndPoint;
}

void Road::setyRoadEnd(double endingPoint)
{
	yEndPoint = endingPoint;
}

double Road::getyRoadEnd()
{
	return yEndPoint;
}

void Road::setStartIntersection(int startingPoint)
{
	startIntersection = startingPoint;
}
int Road::getStartIntersection()
{
	return startIntersection;
}

void Road::setEndIntersection(int endingPoint)
{
	endIntersection = endingPoint;
}


int Road::getEndIntersection()
{
	return endIntersection;
}


void Road::setDirection(int dir)
{
	direction = dir;
}

void Road::setRoadData(char * name, double xStart, double yStart, double xEnd, double yEnd, int intersectStart, int intersectEnd)
{
	strcpy(roadName, name);

	xStartPoint = xStart;
	yStartPoint = yStart;
	xEndPoint = xEnd;
	yEndPoint = yEnd;
	startIntersection = intersectStart;
	endIntersection = intersectEnd;
}


int Road::getDirection()
{
	return direction;
}
