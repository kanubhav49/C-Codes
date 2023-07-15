#include <iostream>
#include <queue>
using namespace std;


int main()
{
    //creation of queue
    queue<int> q;
    
    //push element
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);

    //remove element
    q.pop();
    q.pop();

    //front element
    cout<<"printing front element"<<q.front()<<endl;

    //size of queue
    cout<<"Size of queue is : "<<q.size()<<endl;

    //check q is empty or not
    cout<<"Empty or not : "<<q.empty()<<endl;

    //printing queue
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;


}