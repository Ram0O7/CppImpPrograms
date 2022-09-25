/* Write a program to modify the employee details from a function where employee is a
 structure having name,age,salary information already assingned from main */
#include <iostream>
using std::cout;

struct Employee
{
    std::string name;
    int age;
    float salary;
};

void modify_det(std::string &name, int &age, float &salary)
{
    name = "kishan";
    age = 43;
    salary = 29000;
}

int main()
{
    Employee e = {"ravi", 27, 23000};
    cout << e.name << " " << e.age << " " << e.salary << " <-- before modifying the details\n";
    modify_det(e.name, e.age, e.salary);
    cout << e.name << " " << e.age << " " << e.salary << " <-- after modifying";

    return 0;
}