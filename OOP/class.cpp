#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

class Employee
{
    
public:
    Employee(string name){
        name = name;
        cout << "name initialized " << name << endl;
    }
    string name;
    string add;
    void setAge(int i){
        age = i;
    }
    int getAge(){
        return age;
    }
private:
    int age;
    void getAddress(){
        cout << name << "lives at "<< add<<endl;
     }
};

class Developer: public Employee{
    
    public:
        Developer(string name, int age):Employee(name){
            cout << age << endl;
        } 

        void getName(){
            cout << name << " " << endl;
        }
};

int main(){

    Developer d= Developer("saiful", 25);
    d.getName();
    Employee *e = &d;

    return 0;
}