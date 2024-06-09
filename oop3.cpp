#include <iostream>

using namespace std;

class Person{
private:
    string name;
    int age;
    string country;
public:
    Person(string p_name, int p_age, string p_country){
        name = p_name;
        age = p_age;
        country = p_country;
    }

    void display(){
        cout<<"Your name is "<< name << ". You are " << age <<" years old and lives in " << country <<endl; 
    }

};

int main(){

    Person p1("Keith", 21, "Philippines");
    p1.display();
    return 0;

}