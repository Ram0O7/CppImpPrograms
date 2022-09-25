// write a program to calculate volume of a cube,cylinder and a rectangular box using
// function overloading
#include <iostream>
using std::cout;
#define pi 3.14

void volume(int length)
{
    int vol = length * length*length;
    cout << "\nvolume of cube => " << vol;
}

void volume(int rad, int height)
{
    int vol = pi * (rad * rad) * height;
    cout << "\nvolume of cylinder => "<< vol;
}

void volume(double length, double width, double height)
{
    double vol = width * length * height;
    cout << "\nvolume of rectangular box => " << vol;
}

int main()
{
    // displaying volume of cube
    volume(23);
    // displaying volume of cylinder
    volume(33, 29);
    // displaying volume of rectangular box or cuboid
    volume(20.5, 39.3, 12.4);

    return 0;
}