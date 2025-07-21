#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;

    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(2);

    for (int i:s)
    cout<<i<<" ";
    cout<<endl;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(2);

    for (int i:s)
    cout<<i<<" ";
    cout<<endl;

    //erasing the beginning element
    s.erase(s.begin());
    for (int i:s)
    cout<<i<<" ";
    cout<<endl;

    //creating the iterator of the set
    set<int> :: iterator it = s.begin();
    it++;

//    s.insert(1);
    //this will delete 2nd element begin +1 element.
    s.erase(it);
    for (int i:s)
    cout<<i<<" ";
    cout<<endl;

    cout<<s.count(5)<<endl;

    set<int>:: iterator itr=s.find(5);
    cout<<"value present at itr "<<*itr<<endl;


}