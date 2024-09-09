#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int sideA, sideB, sideC;
    //Ask for sides
    cout << "What is side A?";

    cin >> sideA;

    cout << "What is side B?";

    cin >> sideB;

    cout << "What is side C?";

    cin >> sideC;

    cout << "Side A is " << sideA << " Side B is " << sideB << " Side C is " << sideC;

    float s = (sideA + sideB + sideC)/2;

    float area =sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));

    cout << "\nThe area is: " << area;

    return 0;
}