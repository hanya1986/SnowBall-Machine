#include <cmath>

class Snowball{
    const double PI = 3.14159, Def_DX = 0.0001, ABS_DX= 0.001;
    double a, b, n ,m, answer;
	public:

    double target_x, target_y, length;
	void set_values (double, double, double);     //setting the values for the x, y and l;
	double calculate();                           // calculating the answer

};
