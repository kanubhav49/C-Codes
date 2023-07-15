#include <iostream>
using namespace std;

class Human 
{
  public:
  int age;
  char gender;

  //default constructor
   Human()
   {
    cout<<"I am in default constructor "<<endl;
     age =25;
     gender ='m';
   }
   
   //parameterised constructor
   Human(int age,char gender)
   {
    cout<<"I am in parameterised constructor "<<endl;
    this->age=age;
    this->gender=gender;
   }
 
   //Copy constructor
    Human(Human& temp) 
    {
        cout << "I m in COPY COnstructor" << endl;
        this->age = temp.age;
        this->gender = temp.gender;
    }

    /*destructor ... it will be called for all 5 objects(delete keyword 
    has to be used for dynamic ones)*/
    ~Human()
    {
        cout<<"Destructor called"<<endl;
    }


};

int main()
{
    //static and default constructor
    //in this case , the age/gender we set here is taken
    Human ramesh;
    ramesh.age=10;
    ramesh.gender='f';
    cout<<ramesh.age<<endl;
    cout<<ramesh.gender<<endl;

    //dynamic and default constructor
    //in this case , the age/gender we set here is taken
    Human *suresh = new Human();
    suresh->age =14;
    suresh->gender='f';
    cout<<suresh->age<<endl;
    cout<<suresh->gender<<endl;

    //static and parameterised constructor
    //as in above case , in this case also , the age/gender we set here is taken
    Human gaju(12,'m');
    gaju.age=25;
    cout<<gaju.age<<endl;
    cout<<gaju.gender<<endl;

    //dynamic and parameterised constructor
    //as in above case , in this case also , the age/gender we set here is taken
    Human *dharmesh=new Human(12,'m');
    dharmesh->age=28;
    cout<<dharmesh->age<<endl;
    cout<<dharmesh->gender<<endl;

    //static and copy constructor
    Human jignesh(ramesh);
    cout << jignesh.age << endl;
    cout<<jignesh.gender<<endl;

    //destructor is only for dynamic object
    delete suresh; 
    delete dharmesh;



}