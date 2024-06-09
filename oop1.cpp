#include <iostream>

using namespace std;

class Circle{
private:
    int radius;
    int pi;
    int area = pi * (radius * radius);
    int circumference;
public:
    Circle(int rad){
        radius = rad;
        area = 0;
        pi = 3.14;
        circumference = 0;
    }

    void result(){
        cout<< "The area is "<< area << endl;
    }

    void Circumference(){
        circumference = 2 * pi * radius;
        cout<<"The circumference is "<< circumference << endl;
    }

};


int main(){

    Circle circle(5);
    circle.result();
    circle.Circumference();

    return 0;

}