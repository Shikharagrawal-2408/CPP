#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //default priority queue which will create max heap queue
    priority_queue<int>maxi;

    //customized priority queue which will create min heap queue.
    priority_queue<int,vector<int>, greater<int>>mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);
    cout<<"size-> "<<maxi.size()<<endl;

    int n=maxi.size();

    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
        //cout<<i<<" ";
    }

    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(2);

    int m=mini.size();
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
        //cout<<i<<" ";
    }

}