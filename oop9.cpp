#include <iostream>

using namespace std;


class Student{
private:
    string stud_name;
    string stud_class;
    int roll_number;
    int marks;

public:
    Student(string s_name, string s_class, int s_rnumber, int s_marks){
        stud_name = s_name;
        stud_class = s_class;
        roll_number = s_rnumber;
        marks = s_marks;
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

    int getMarks(){
        return marks;
    }

    void setName(string s_name){
        stud_name = s_name;
    }

    void getName(string s_class){
        stud_class = s_class;
    }

    void getRollNumber(int s_rnumber){
        roll_number = s_rnumber;
    }

    void getMarks(int s_marks){
        marks = s_marks;
    }

    void calculateGrade(){
        if (marks >= 1 && marks <=  1.25){
            cout<<"Passed with flying colors!";
        }
        else if(marks >= 1.26 && marks <= 1.50){
            cout<<"Passed";
        }
        else if(marks >= 1.26 && marks <= 1.50){
            cout<<"Passed";
        }
    }



};

int main(){

    return 0;
}