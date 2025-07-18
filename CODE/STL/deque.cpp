#include<iostream>
#include<deque>

using namespace std;

int main()
{
    //creating deque of integer type name dq
    deque<int>dq;

    //push_back is ussed to insert element from the back
    dq.push_back(1);

    //push_front is ussed to insert element from the front
    dq.push_front(2);

    for (int i:dq)
    cout<<i<<" ";

    //pop_back is ussed to delete element from the back
    dq.pop_back();

    for (int i:dq)
    cout<<i<<" ";

    //pop_back is ussed to delete element from the front
    dq.pop_front();

    for (int i:dq)
    cout<<i<<" ";

    dq.push_back(11);
    dq.push_front(12);
    dq.push_back(21);
    dq.push_front(22);

    cout<<endl;
    for (int i:dq)
    cout<<i<<" ";

    cout<<"Element at index 1->"<<dq.at(0)<<endl;

    cout<<"front or first element-> "<<dq.front()<<endl;

    cout<<"last element-> "<<dq.back()<<endl;

    cout<<"Empty or Not-> "<<dq.empty()<<endl;
    
    cout<<"before erase "<<dq.size()<<endl;

    //to delete first element
    dq.erase(dq.begin(),dq.begin()+1);
    //after erase size become zero
    
    cout<<"after erase "<<dq.size()<<endl;

    for (int i:dq)
    cout<<i<<" ";

}