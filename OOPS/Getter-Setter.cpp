#include <iostream>
using namespace std;

//Getter-Setter are generally used for private class

class Human
{
    //default -> private class

    int age;
    char gender;

    char getgender()
    {
        return gender;

    }

    int getage()
    {
        return age;
        
    }
    
    void setage(int a)
    {
        age = a;
    }

    void setgender(char g)
    {
        gender = g;

    }

};

int main()
{
    //object creation

    Human obj;
    cout<<sizeof(obj)<<endl; 
}