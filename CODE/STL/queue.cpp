#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string>q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout<<"Top Elements:- "<<q.front()<<endl;

    cout<<"size of queue before pop"<<q.size()<<endl;

    q.pop();

    cout<<"After POP:- "<<q.front()<<endl;

    cout<<"size of queue after pop"<<q.size()<<endl;

    cout<<"Empty or Not"<<q.empty()<<endl;
}