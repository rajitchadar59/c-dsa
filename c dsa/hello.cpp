#include<iostream>
#include<string>
using namespace std;

class teacher {
    private :
    double salary;

public:
string name;
string department;
string subject;

void changedepartment(string new_depart) {

    department = new_depart;

}
void set_salary(int s) {

salary = s;


}
float get_salary() {

return salary;


}

};


int main() {

teacher t1;
t1.department = "cs";
t1.subject = "maths";
t1.name = "rahul";

cout<<t1.name<<endl<<t1.department<<endl<<t1.subject<<endl;

t1.set_salary(500.00);

cout<<t1.get_salary();



    return 0;

}