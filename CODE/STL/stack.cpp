#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout<<"Top Elements:- "<<s.top()<<endl;

    s.pop();
    cout<<"After POP:- "<<s.top()<<endl;

    cout<<"size of stack"<<s.size()<<endl;

    cout<"Empty or Not"<<s.empty()<<endl;

    
}