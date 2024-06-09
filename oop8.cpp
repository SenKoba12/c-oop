#include <iostream>

using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date(int d_month, int d_day, int d_year){
        day = d_day;
        month = d_month;
        year = d_year;

        if(month < 0 || month > 12){
            cout<<"Error! Invalid Month!"<<endl;
        }

        if(month == 4 || month == 6 || month == 9 || month == 11){
            if (day < 0 || day > 30){
                cout<<"Error!"<<endl;
            }
        }
        else if(month == 2){
            if(year % 4 == 0){
                if (day < 0 || day > 29){
                    cout<<"Error!"<<endl;
                }
            }
            else if (day < 0 || day > 28){
                    cout<<"Error!"<<endl;
                }
        }

        else{
            if (day < 0 || day > 31){
                cout<<"Error!"<<endl;
            }
        }
    }

    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

    int getYear(){
        return year;
    }

    void setDay(int d_day){
        day = d_day;
    }

    void setMonth(int d_month){
        month = d_month;
    }

    void setYear(int d_year){
        year = d_year;
    }


};

int main(){

    Date date(13,2,2024);
    cout<<date.getMonth()<<"/"<<date.getDay()<<"/"<<date.getYear();
    return 0;
}