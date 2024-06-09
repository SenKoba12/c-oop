#include <iostream>
#include <iomanip>

using namespace std;


class Student{
private:
    string stud_name;
    string stud_class;
    int roll_number;
    double marks;

public:
    Student(string s_name, string s_class, int s_rnumber){
        stud_name = s_name;
        stud_class = s_class;
        roll_number = s_rnumber;
        marks = 0;
    }

    string getName(){
        return stud_name;
    }

    string getClass(){
        return stud_class;
    }

    int getRoll(){
        return roll_number;
    }

    double getMarks(){
        return marks;
    }

    void setName(string s_name){
        stud_name = s_name;
    }

    void setClass(string s_class){
        stud_class = s_class;
    }

    void setRollNumber(int s_rnumber){
        roll_number = s_rnumber;
    }

    void setMarks(double s_marks){
        marks = s_marks;
    }

    void calculateGrade(){
        if (marks >= 1 && marks <=  1.25){
            cout<<"Passed with flying colors!";
        }
        else if(marks >= 1.26 && marks <= 1.50){
            cout<<"Passed with great scores!";
        }
        else if(marks >= 1.51 && marks <= 1.75){
            cout<<"Passed!";
        }
        else if(marks >= 1.76 && marks <= 3.00){
            cout<<"Passed!";
        }
        else{
            cout<<"Failed...";
        }
    }
};

int main(){

    Student stud1("Keith Esteron", "Batch 2021", 2021105356);
    stud1.setMarks(1.00);
    cout << "Grade is: " << fixed << setprecision(2) << stud1.getMarks() << endl;
    stud1.calculateGrade();

}