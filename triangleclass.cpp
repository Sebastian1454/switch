
#include<iostream>
#include<math.h>

class Coordinates {

private:
float x;
float y;

public:
float getX(){
    return x;
}
float getY(){
    return y;
}

Coordinates():x(1), y(1){

}
};

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
Coordinates coords;
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

float Triangle::getPerimeter(){
return SideA + SideB + SideC;
}

float Triangle::getSemiPermimeter(){
    float perimeter = (SideA + SideB + SideC);
    float semiPermimeter = perimeter/2;
    return semiPermimeter;

}

float Triangle::getArea(){
    float semiPermimeter = getSemiPermimeter();

    return sqrt(semiPermimeter*(semiPermimeter - SideA)*(semiPermimeter - SideB)*(semiPermimeter - SideC));

}

Triangle::Triangle(/* args */): SideA(10), SideB(10), SideC(10)
{

    coords = Coordinates();
    //SideA = 10;
   // SideB = 10;
    //SideC = 10;
}

Triangle::Triangle(float a, float b, float c){
    SideA = a;
    SideB = b;
    SideC = c;


}

Triangle::~Triangle()
{

}

bool lagerThan(Triangle t1, Triangle t2){
    //if(t1.getArea() > t2.getArea())
    //return true;
    //return false;

    return t1.getArea() > t2.getArea();
}

void setSideATo100(Triangle t){
    t.setSidaA(100);
    cout << "Side A inside the function " << t.getSideA() << endl;
}

Triangle sumTriangle(Triangle t1, Triangle t2){
    float a = t1.getSideA() + t2.getSideA();
    float b = t1.getSideB() + t2.getSideB();
    float c = t1.getSideC() + t2.getSideC();

    Triangle finalTriangle = Triangle(a, b, c);

    return finalTriangle;
}

int main(){
    Triangle t1;
    Triangle t2 = Triangle(5, 5, 5);
    Triangle t3 = Triangle(2, 2, 2);

   cout <<  t1.getArea() << endl;
   cout << t2.getArea() << endl;
   cout << t3.getArea() << endl;

   cout <<  "Is t1 larger than t2? " << lagerThan(t1, t2) << endl;

cout << "Side A inside of main " << t1.getSideA() << endl;
   setSideATo100(t1);
   cout << "Side A inside of main " << t1.getSideA() << endl;

   Triangle t4 = sumTriangle(t1, t2);
   cout << "Side A t4 " << t4.getSideA() << endl;

cout << "Coordinates t1 " << t1.coords.getX() << ", " << t1.coords.getY() << endl;
}

