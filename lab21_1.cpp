#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double minx = min(R1.x + R1.w, R2.x + R2.w);
	double maxx = max(R1.x, R2.x);
	double miny = min(R1.y, R2.y);
	double maxy = max(R1.x - R1.h, R2.x - R2.h);
	double overlapx = minx - maxx;
	double overlapy = miny - maxy;
	if(overlapx <= 0 || overlapy <= 0){
		return 0;
	}
	return overlapx * overlapy;
}