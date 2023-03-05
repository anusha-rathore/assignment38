#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"list : ";
    list<int> l1 ={1,2,3,4,5,6,};
list<int> :: iterator x;
for(x=l1.begin() ; x!=l1.end(); x++)
{
    cout<<*x<<" ";
}
cout<<"\n After reverse list: ";
list<int>:: reverse_iterator it;
for(it=l1.rbegin(); it!=l1.rend(); it++)
{
    cout<<*it<<" ";
}

return 0;
}
