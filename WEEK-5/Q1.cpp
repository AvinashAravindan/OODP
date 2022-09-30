#include <iostream>
#include <string>
using namespace std;
class Student {
    private:
    string name;
    public:
    Student(string name1="Unknown"):
    name(name1) {}
    void printName() {
        cout << name << endl;
    }
};
int main() {
    Student obj_student("Kalai");
    Student unknown_obj_student;
    obj_student.printName();
    unknown_obj_student.printName();
}
