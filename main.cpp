//Group members:
//  Yihao Cheng
//  Xiao Jiang
//  Andrew Nanjad
//  Tenzin Kalsang

#include <iostream>
#include "snowball.h"
#include <cstdlib>
using namespace std;


int main()
{
    Snowball machine; //make an instance of Snowball named "machine"
    double x, y, l = 0;
 do{
    cout << "Please enter the targets X coordinate (-1 = exit): ";

    cin >> x;

    if(x== -1){  // if enter -1, the system will stop
        break;
    }

    cout << "Please enter the targets Y coordinate (-1 = exit): ";

    cin >> y;

    if(y== -1){
        break;
    }

    cout << "Please enter the length of the stick (-1 = exit) : ";

    cin >> l;

    if(l== -1){
        break;
    }

    if( x >= l && y >= 0 && l > 0){              //to make sure the user does not input the point inside the circle

         machine.set_values(x, y, l);               //to set the value inside the class

    cout << machine.target_x << " "<< machine.target_y <<" " << machine.length << endl; // Print out the value that is already set

    cout << "The angle is " << machine.calculate() << endl;                  //calculate the answer through the function.

    }

    else{
    cout << "The target is out of range, please re-enter!"<< endl;
    }



 }while(true);




    system("pause");
    return 0;
}

