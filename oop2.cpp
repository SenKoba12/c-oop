#include <iostream>

using namespace std;

class Rectangle{
private:
    int length;
    int width;
    int area;
    int perimeter;
    
public:
    Rectangle(int len, int wid){
        area = 0;
        length = len;
        width = wid;
        perimeter = 0;
    }

    void result(){
        area = length * width;
        cout<< "The area is "<< area << endl;
    }

    void Perimeter(){
        perimeter = (length * 2) + (width * 2);
        cout<<"The circumference is "<< perimeter << endl;
    }

};


int main(){

    Rectangle rect(5,6);
    rect.result();
    rect.Perimeter();

    return 0;

}