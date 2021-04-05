#include<iostream>
#include "constants.h"

using std::cout;    using std::cin;

int main()
{
    auto radius = .01; //can do double radius; remove auto radius =.01
    cout<<"Enter radious of a circle: ";
    // if do previous note, then you need to cout<<"Enter radius of a circle: ";
    cin>>radius;
    cout<<"Area of the circle is: "<<get_area_of_circle(radius);
    return 0;
}