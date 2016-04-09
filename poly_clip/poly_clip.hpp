#pragma once
#ifndef poly_clip_hpp
#define poly_clip_hpp
//############################### header for main method ###############################//
//all includes and definitions here, so only this hpp has to be included

//############################### includes ###############################//
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>
#include <stdlib.h>
#include <windows.h>
#include <cmath>
//include own classes
#include "point_3d.hpp"

using namespace std;

//############################### defintions of functions ###############################//

//vector< vector<point_3d> > polygons;
//int	nr_poly,//number of polygons
//	nr_points;//number of points in polygon
	
int read_file(char FILENAME[]);



#endif poly_clip_hpp