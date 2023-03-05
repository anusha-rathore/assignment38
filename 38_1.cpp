#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l1 ={1,2,3,4,55,6,};
list<int> :: iterator x;
for(x=l1.begin() ; x!=l1.end(); x++)
{
    cout<<*x<<" ";
}
cout<<endl;
l1.push_front(10);
l1.push_back(11);
  
   
for (auto i : l1)
{
    cout<< i <<" ";
}
    return 0;
}
