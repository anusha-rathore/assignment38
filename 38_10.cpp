#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"list one : "<<endl;
    list<int> l1 ={1,2,3,4,1,5,6,};
list<int> :: iterator x;
for(x=l1.begin() ; x!=l1.end(); x++)
{
    cout<<*x<<" ";
}
list<int>l2={7,8,9};
cout<<"\nlist 2 "<<endl;
for(x=l2.begin() ; x!=l2.end(); x++)
{
    cout<<*x<<" ";
}
cout<<"\nAfter merge list :"<<endl;
l1.merge(l2);

for(x=l1.begin() ; x!=l1.end(); x++)
{
    cout<<*x<<" ";
}
return 0;
}
