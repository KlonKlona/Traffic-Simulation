
#ifndef ROAD_H_
#define ROAD_H_

class Road
{
	private:
		int id;
		char roadName[64];
		double xStartPoint;
		double yStartPoint;
		double xEndPoint;
		double yEndPoint;
		int startIntersection;
		int endIntersection;
		double direction;

	public:
		Road();
		~Road();
		bool isPointOnRoad(double xCoord, double yCoord);
		void setRoadName(char *name);
		void setxRoadStart(double startingPoint);
		void setxRoadEnd(double endingPoint);
		void setyRoadStart(double startingPoint);
		void setyRoadEnd(double endingPoint);
		void setStartIntersection(int startingPoint);
		void setEndIntersection(int endingPoint);
		void setDirection(double dir);
		void setRoadData(char *name, double xStart, double yStart, double xEnd, double yEnd, int intersectStart, int intersectEnd, double speedLimit, int numLanes);
		int getid();
		char * getRoadName();
		double getxRoadStart();
		double getxRoadEnd();		
		double getyRoadStart();
		double getyRoadEnd();
		int getStartIntersection();		
		int getEndIntersection();		
		int getDirection();
};



#endif
