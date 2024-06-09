#include <iostream>

using namespace std;


class Employee{

private:
    string name;
    int EmployeeID;
    double salary;
    string performance;

public:
    Employee(string e_name, int id, double sal){
        name = e_name;
        EmployeeID = id;
        salary = sal;
        performance = "";
    }

    string getName(){
        return name;
    }

    void setName(string e_name){
        name = e_name;
    }

    int getID(){
        return EmployeeID;
    }

    void setID(int id){
        EmployeeID = id;
    }


    int getSalary(){
        if (performance == "Good"){
            salary = salary * 2.5;
        }
        return salary;
    }

    void setSalary(double sal){
        salary = sal;
    }

    string getEmployeePerf(){
        return performance;
    }

    void EmployeePerf(string perf){
        performance = perf;
    }



};


int main(){

    Employee emp1("Keith Esteron", 123, 1000);
    cout<<"Salary for "<<emp1.getName()<<" with Employee ID: "<<emp1.getID()<<" has a salary of: "<<emp1.getSalary()<<endl;
    emp1.EmployeePerf("Good");
    cout<<"Your performance according to our supervisor is: "<<emp1.getEmployeePerf()<<endl;
    cout<<"Your salary has been increased: "<< emp1.getSalary();

    return 0;
}