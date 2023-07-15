#include <iostream>
#include <cstring>
using namespace std;

/*
1. shallow copy mei basically we are sending address and in case of deep copy we
are making an entirely different copy 
2. In shallow copy we need to comment out copy constructor we created
*/

class Hero
{
   public:
   char* name;
   char level;

   Hero()
   {
     name=new char[100];
   }
  
  
  //shallow copy uses default copy constructor
  //used for deep copy

    Hero(Hero& temp) 
    {
        //string's functions are under <cstring>
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name = ch;

        this->level = temp.level;
    }
};

int main()
{
    /*

     SHALLOW COPY

    Hero hero1;
    char name[7]="Babbar";
    hero1.name=name;
    cout<<hero1.name<<endl; 

    Hero hero2(hero1);
    cout<<hero2.name<<endl;

    name[0]='G';
    hero1.name=name;
    cout<<hero1.name<<endl;

    cout<<hero2.name<<endl;
    */
   
   // DEEP COPY

 Hero hero1;
    char name[7]="Babbar";
    hero1.name=name;
    cout<<hero1.name<<endl; 

    Hero hero2(hero1);
    cout<<hero2.name<<endl;

    name[0]='G';
    hero1.name=name;
    cout<<hero1.name<<endl;

    cout<<hero2.name<<endl;
     

}