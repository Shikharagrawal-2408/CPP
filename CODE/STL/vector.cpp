//vector:- it is a dynamic memory array.
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    //creating vector of integer type name v
    vector<int>v;

    //creating vector of integer type name a size 5 initialized with default value 1 
    veector<int>a(5,1);

    //creating a integer vector name n and copying the values of a inside it. if it is single value it will work same size if it is array it will
    //be copied inside it.


    vector<int> n(a);
    cout<<"print a"<<endl;
    for(int i:a)
    cout<<i<<" ";

    cout<<"Capacity->"<<v.capacity()<<endl;

    //push_back is used to push the element inside the vector array.
    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;
    
    cout<<"Element at index 2->"<<v.at(2)<<endl;

    cout<<"Empty or Not-> "<<v.empty()<<endl;
    cout<<"front or first element-> "<<v.front()<<endl;
    //cout<<"last -> "<<a.last()<<endl;

    cout<<"last element-> "<<v.back()<<endl;

    cout<<"before pop"<<endl;

    for(int i:v)
    cout<<i<<" ";

    cout<<endl;
    //pop_back is used to delete the last element from the vector array
    v.pop_back();

    v.pop_front();
    cout<<"after pop"<<endl;

    for(int i:v)
    cout<<i<<" ";

    cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    

}