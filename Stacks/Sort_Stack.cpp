#include <iostream>
#include <stack>
using namespace std;

void SortedInsert(stack<int> &s, int data)
{
    if(s.empty()||s.top()<data)
    {
        s.push(data);
        return;
    }

    int topElement = s.top();
    s.pop();

    //Recursive call
    SortedInsert(s,data);

    s.push(topElement);   

}

void SortStack(stack<int> &s)
{

    //base case
    if(s.empty())
    {
        return;
    }
    int TopElement=s.top();
    s.pop();

    //recursive call
    SortStack(s);

    //sorted insertion krenge ab stack mei
    SortedInsert(s,TopElement);


}

int main()
{

    stack<int> s;

    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);

    //functioncall
     SortStack(s);

    cout << "Printing answer" << endl;
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}