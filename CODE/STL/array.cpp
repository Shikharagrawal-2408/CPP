//#include<bits/stdc++.h>
#include<iostream>
#include<array>


using namespace std;

int main()
{
    array<int,4>a={1,2,3,4};
    int size=a.size();

    for(int i=0;i<size;i++)
    cout<<a[i]<<endl;

    cout<<"Element at index 2->"<<a.at(2)<<endl;

    cout<<"Empty or Not-> "<<a.empty()<<endl;
    cout<<"front or first element-> "<<a.front()<<endl;
    //cout<<"last -> "<<a.last()<<endl;

    cout<<"last element-> "<<a.back()<<endl;

}