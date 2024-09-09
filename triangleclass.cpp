
#include<iostream>
#include<math.h>

using namespace std;

class triangleclass
{
private:
    /* data */
    float SideA;
    float SideB;
    float SideC;
public:
    triangleclass(/* args */); /* constructoy*/
    triangleclass(float a, float b, float c);
    ~triangleclass();
     
    float getArea();
    float getPerimeter();

    float getSideA(){
    return SideA;}

    float getSideB(){
        return SideB;}

     float getSideC(){
        return SideC;}

};

float triangleclass::getPerimeter(){
return SideA + SideB + SideC;
}

float triangleclass::getArea(){
    float semiPermimeter = (SideA + SideB + SideC)/2;

    return sqrt(semiPermimeter*(semiPermimeter - SideA)*(semiPermimeter - SideB)*(semiPermimeter - SideC));

}

triangleclass::triangleclass(/* args */)
{
    SideA = 10;
    SideB = 10;
    SideC = 10;
}

triangleclass::triangleclass(float a, float b, float c){
    SideA = a;
    SideB = b;
    SideC = c;


}

triangleclass::~triangleclass()
{
}

int main(){
    triangleclass t1;
    triangleclass t2 = triangleclass(5, 5, 5);
   cout <<  t1.getArea() << endl;
   cout << t2.getArea() << endl;
}

