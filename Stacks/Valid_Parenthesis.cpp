#include <iostream>
#include <stack>
using namespace std;

 bool match(char close, char open) {
        
        if(close == ')' && open == '(')
            return true;
        
        if(close == ']' && open == '[')
            return true;
        
        if(close == '}' && open == '{')
            return true;
        
        return false;
    }

bool ValidBraces(string s)
{ 
    stack<char> st;
    int len=s.length();

    if(len&1)
    {
        return false;
    }

      for(int i=0; i<s.length(); i++) {
            
            char ch = s[i];
            
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else
            {
                //closing brakcets
                if(!st.empty() && match(ch, st.top())) {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            
        }
        
        if(st.empty())
            return true;
        else
            return false;
        
    }




int main()
{
 
 string s;
 cout<<"Enter any string with braces : ";
 cin>>s;
 if(ValidBraces(s))
 {
    cout<<"Valid parenthesis ";
 }
 else{
    cout<<"Not a Valid parenthesis ";
 }
}