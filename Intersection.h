#pragma once



class Intersection
{
	private:
		int intersectionID;
		double xPoint;
		double yPoint;

	public:

		Intersection();
		~Intersection();
		void setIntersectionID(int ID);
		void setxPoint(double point);
		void setyPoint(double point);
		void setIntersectionData(int intersectID, double xPosition, double yPosition);
		int getIntersectionID();
		double getxPoint();
		double getyPoint();

};
