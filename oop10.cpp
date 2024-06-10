#include <iostream>
#include <cmath>

using namespace std;

//notes for perimeter
//circle - Circumference = 2 pi r
//rectangle - perim = (length * 2) + (width * 2)
//triangle - perim = a + b + c;

//notes for area
//circle - area = pi r^2
//rectangle = length * width
//triangle = (1/2) * base * height


class Shape{
protected:
    const double pi = 3.141;
public:
    virtual double Area() = 0;
    virtual double Perimeter() = 0;
};



class Circle:public Shape{
private:
    double radius;
public:
    Circle(double radi): radius(radi){
    }
        double Area(){
            return pi * pow(radius, 2);
        }
    
    double Perimeter(){
        return 2 * pi * radius;
    }  
};

class Rectangle: public Shape{
private:
    double length;
    double width;


public:
    Rectangle(double len, double wid): length(len), width(wid){

    }

    //note: initializing these values can also be written as
    /* 
        Rectangle(double len, double wid){
            length = len;
            width = wid;
        }

    */
   //this applies to the other functions as well

    double Area(){
        return length * width;
    }

    double Perimeter(){
        return 2 * (length + width);
    }

};

class Triangle: public Shape{
private:
    double s1;
    double s2;
    double s3;
public:
    Triangle(double t_side1, double t_side2, double t_side3): s1(t_side1), s2(t_side2), s3(t_side3){

    }

    double Area(){
        double area = (s1 + s2 + s3) / 2;
        return sqrt(area * (area - s1) * (area - s2) * (area - s3));
    }

    double Perimeter(){
        return s1 + s2 + s3;
    }

};

int main(){

    Shape* c1 = new Circle(7.0);
    Shape* r1 = new Rectangle(4.2,8.0);
    Shape* t1 = new Triangle(4.0,4.0,3.2);

    cout<<"Circle: ";
    cout<<"Area: " << c1->Area() <<endl;
    cout<<"Perimeter: "<<c1->Perimeter() <<endl;

    cout<<"\nRectangle: "<<endl;
    cout<<"Area: "<<r1->Area() <<endl;
    cout<<"Perimeter: "<<r1->Perimeter() <<endl;

    cout<<"\nTriangle: "<<endl;
    cout<<"Area: "<<t1->Area()<<endl;
    cout<<"Perimeter: "<<t1->Perimeter()<<endl;
    
    return 0;
}