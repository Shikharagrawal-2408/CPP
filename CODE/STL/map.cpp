#include<iostream>
#include<map>

using namespace std;

int main()
{
    //when used map it will created sorted map 
    //to create unsorted map write unordered map

    map<int ,string> m;
    m[1]="a";
    m[2]="b";
    m[3]="c";
    m[4]="d";
    m[5]="e";

    m.insert({10,"hell"});

    //first will print the first value that is key 
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;

    //checking whether 13 is pressent or not
    cout<<"finding 10->"<<m.count(13)<<endl;

    cout<<"Before erase "<<m.size()<<endl;
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;
    
    m.erase(10);

    cout<<"After erase "<<m.size()<<endl;
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;

    m[5]="e";
    m[8]="w";
    m[9]="x";
    m[10]="y";

    //finding the index of 5
    auto it = m.find(5);

    //using the found index to 
    for(auto i=it;i!=m.end();i++)
    cout<<(*i).first<<" "<<endl;

    
//      map<int ,int> m1;
//     m1[1]=21;
//     m1[2]=22;
//     m1[3]=23;
//     m1[4]=24;
//     m1[5]=25;

//    // m.insert({10,"hell"});
//     for(auto i:m)
//     cout<<i.first<<" "<<i.second<<endl;
// // it will be used to find the key in the map

//     cout<<"finding 13->"<<m.count(13)<<endl;
}