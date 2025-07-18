#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //binary search of number 5 from begin to end
    cout<<binary_search(v.begin(),v.end(),6)<<endl;

    //they will print index not the value
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    int a=3,b=5;

    cout<<"max "<<max(a,b);
    cout<<endl<<"min "<<min(a,b);
    swap(a,b);
    cout<<endl<<"a= "<<a<<endl;

    string x="abcd";
    reverse(x.begin(),x.end());
    cout<<x;

    cout<<endl<<"Before rotate ";
    for(int i:v)
    cout<<i<<" ";

    cout<<"after rotate";
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<endl;
    for(int i:v)
    cout<<i<<" ";

    
}