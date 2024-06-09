#include <iostream>

using namespace std;

class Car{
private:
    string company;
    string model;
    int year;
public:
    Car(string c_company, string c_model, int c_year){
        company = c_company;
        model = c_model;
        year = c_year;
    }

    string getCompany(){
        return company;
    }

    string getModel(){
        return model;
    }

    int getYear(){
        return year;
    }

    void setCompany(string c_company){
        company = c_company;
    }

    void setModel(string c_model){
        model = c_model;
    }

    void setYear(int c_year){
        year = c_year;
    }
};

int main(){

    Car car("Hyundai","Accent",2018);
    cout <<"Company: "<<car.getCompany()<<endl;
    cout<<"Model: "<<car.getModel()<<endl;
    cout<<"Year: "<<car.getYear()<<endl; 
    return 0;

}