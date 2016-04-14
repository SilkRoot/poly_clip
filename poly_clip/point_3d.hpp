#pragma once
#ifndef point_3d_hpp
#define point_3d_hpp

#include "poly_clip.hpp"

//############################### class defintion ###############################//
class point_3d
{

//############################### private ###############################//
private:
	//definition of all dataelements
	double x_value;
	double y_value;
	double z_value;

//############################### public ###############################//
public:
	//definition of the different functions

	//get functions
	double Get_x_value() { return x_value; }
	double Get_y_value() { return y_value; }
	double Get_z_value() { return z_value; }

	//set functions
	void point_3d::Set_x_value(double x) {
		x_value = x;
	}
	void point_3d::Set_y_value(double y) {
		y_value = y;
	}
	void point_3d::Set_z_value(double z) {
		z_value = z;
	}

	//contructor
	point_3d(double, double, double);

};
#endif point_3d_hpp