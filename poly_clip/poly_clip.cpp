//############################### main method ###############################//

#include "poly_clip.hpp"

const int len_filename = 50;//maximum length of input file

int main() {
	//############################### object/variable definitions ###############################//
	char	Filename[len_filename];//input file name
//	int		nr_poly = 0,//number of polygons
//			nr_points = 0;//number of points in polygon
//	vector< vector<point_3d> > polygons;//two-dimensional vector: 1st level polygon, 2nd level points of polygon
	
	//############################### read ###############################//
	
	cout << "name of input file:" << endl;
	cin >> Filename;
	cout << "entered name of input file: " << Filename << endl;//controlprint to console
	cout << endl << "########################################" << endl <<endl;//separating print to console
	read_file(Filename);


	//prevents console from closing
	int p;
	cin >> p;

	return 0;
}