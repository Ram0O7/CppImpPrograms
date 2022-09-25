// write a program to calculate Area and perimeter of a Rectangle,squire and circle using
// function overloading
#include <iostream>
using std::cout;
#define pi 3.14

void area_param(int length,int breadth){
    int area = length * breadth;
    int param = length + breadth;
    cout<<"area and parameter of rectangle => "<<area<<" & "<<param;
}

void area_param(int length){
    int area = length * length;
    int param = length*2;
    cout<<"\narea and parameter of squire => "<<area<<" & "<<param;
}

void area_param(double length){
    int area = pi*length*length;
    int param = 2*length*pi;
    cout<<"\narea and parameter of circle = "<<area<<" & "<<param;
}

int main(){
        //displaying area and parameter of rectangle
        area_param(23, 29);
        //displaying area and parameter of squire
        area_param(23);
        //displaying area and parameter of rectangle
        area_param(20.5);

    return 0;
}