#include <iostream>
#include <cmath>

using namespace std;

class Triangle{
private:
    int sides;
    int height;
    int base;
    int area;

    int a_side;
    int b_side;
    int c_side;

    int semi_perimeter;

    //equilateral formula sqrt(3)/4 * sides
    //isosceles formula (base * height) / 2
    //scalene formula 1/2 (base * height)
public:
    Triangle(int t_sides, int t_height, int t_base, int a, int b, int c){
        sides = t_sides;
        height = t_height;
        base = t_base;
        area = 0;
        semi_perimeter = 0;

        a_side= a;
        b_side= b;
        c_side= c;
    }

    int getSides(){
        return sides;
    }

    int getHeight(){
        return height;
    }

    int getBase(){
        return base;
    }

    int getArea(){
        return area;
    }

    void setSides(int t_sides){
        sides = t_sides;
    }

    void setHeight(int t_height){
        height = t_height;
    }

    void setBase(int t_base){
        base = t_base;
    }


    void equilateral(){
        area = (sqrt(3) / 4) * (sides*sides);
        cout<<"Equilateral result: "<< area<<endl;
        area = 0;
    }

    void isosceles(){
        area = (base * height) / 2;
        cout<<"Isosceles result: "<<area<<endl;
        area = 0;
    }

    void scalene(){
        area = (1/4) * sqrt(a_side + b_side + c_side) * sqrt((-a_side + b_side + c_side)*(a_side - b_side + c_side)) * sqrt(a_side + b_side - c_side);
        cout<<"Scalene result: "<<area<<endl;
        area = 0;
    }
};

int main(){

    Triangle triangle(3,5,6,18,20,21);
    triangle.equilateral();
    triangle.isosceles();
    triangle.scalene();

    return 0;

}