#include "snowball.h"
#include <iostream>
#include <cmath>
using namespace std;
void Snowball::set_values(double x, double y, double ln){

	target_x = x;
	target_y = y;
	length = ln;

}


double Snowball::calculate(){  //function that calculates the angle


    for(double angle = 0.1 ; angle <= PI; angle+=Def_DX){   //loop that go around the circle

        a = (length*sin(angle))/(length*cos(angle)); // this is m1 slope of the radius
        b = ((length*sin(angle))-target_y )/((length*cos(angle))-target_x);   // this is m2 slope of the circle passes through the given point
        n = length*cos(angle);         // this is the x value on the circle
        m = length*sin(angle);         // this is the y value on the circle
        answer = angle;                // this is the answer

      if(abs((a-(-1/b))) < ABS_DX){      //if the different between a-(-1/b) is smaller than 0.001, stop the loop

          break;
    }


}
    if(target_y==length){
    return answer * (180/PI)/2;
    }
    return answer * (180/PI);        // get the angle in degree
}
