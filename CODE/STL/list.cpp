//linked lidt:-

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>l;

    list<int>n(s,100)
    l.push_back(1);
    l.push_front(2);

    for (int i:l)
    cout<<i<<" ";

    l.erase(l.begin());

    
    cout<<"after erase:- ";

    for (int i:l)
    cout<<i<<" "<<endl;

    l.push_back(11);
    l.push_front(12);

    l.push_back(21);
    l.push_front(22);

    l.push_back(31);
    l.push_front(32);

    for (int i:l)
    cout<<i<<" "<<endl;

    l.pop_back();

    l.pop_front();

    for (int i:l)
    cout<<i<<" "<<endl;

    cout<<"size of list "<<l.size();
}