#ifndef TRIANGLE_H

#define TRIANGLE_H

#include<iostream>
using namespace std;

class Triangle
{
private:
    /* data */
    float SideA;
    float SideB;
    float SideC;
    //Coordinates coords;
    float getSemiPermimeter();
public:
//Coordinates coords;
    Triangle(/* args */); /* constructoy*/
    Triangle(float a, float b, float c);
    ~Triangle();
     
    float getArea();
    float getPerimeter();
    //float getSemiPermimeter();

    float getSideA(){
    return SideA;}

    float getSideB(){
        return SideB;}

     float getSideC(){
        return SideC;}

        void setSidaA(float a){
            SideA = a;
        }

};
#endif