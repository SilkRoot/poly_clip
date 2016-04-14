#ifndef read_file_cpp
#define read_file_cpp
#include "poly_clip.hpp"

//############################### reading input file ###############################//

int read_file(char FILENAME[]) {
	cout << "function read_file was called" << endl;//control print to console
	cout << "the chosen filename was: " << FILENAME << endl;


	int	nr_poly,//number of polygons
		nr_points;//number of points in polygon
	double dump1;
	double dump2;
	double dump3;

	vector<vector<point_3d> > data_storage;//multidimensional vector



	//############################### open file ###############################//
	ifstream file;
	file.open(FILENAME);

	//############################### exception handling ###############################//
	if (!file.is_open()) {
		cout << "file is missing!" << endl;
		cout << "function read_file is cancelled!" << endl;//control print to console
		cout << endl << "########################################" << endl;//separating print to console
		return 0;
	}
	//############################### start reading ###############################//
	file >> nr_poly;
	cout << "number of polygons ins this file: " << nr_poly << endl;//control print to console

	for (int i = 0; i < nr_poly; i++) {//looping trough polygons
		file >> nr_points;
		cout << "number of points in this polygon:  " << nr_points << endl;//control print to console

		for (int j = 0; j < nr_points; j++) {//looping trough points of this polygon
			file >> dump1;
			cout << j << " x value: " << dump1 << endl;//control print to console
			file >> dump2;
			cout << j << " y value: " << dump2 << endl;//control print to console
			dump3 = 0;
			cout << j << " z value: " << dump3 << endl;//control print to console
			point_3d(dump1, dump2, dump3) = data_storage[i][j];
			
		}//point loop
	}//polygon loop

	cout << endl << "########################################" << endl <<endl;//separating print to console
	
	cout << "controlprint of the data_storage vector" << endl;//control print to console

	for (int i = 0; i < data_storage.size(); i++)
	{
		for (int j = 0; j < data_storage[i].size(); j++)
		{
			data_storage[i][j];
		}
	}


	cout << "function read_file is finished" << endl;//control print to console
	cout << endl << "########################################" << endl;//separating print to console
	
	return 0;
}
#endif read_file_cpp