#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l1;
    
list<int> :: iterator it, x;
 it=l1.begin();
 l1.insert(it,10);
 l1.insert(it,20);
 l1.insert(it,30);
 l1.insert(it,40);
 l1.insert(it,50);
 

for(x=l1.begin() ; x!=l1.end(); x++)
{
    cout<<*x<<" ";
}

return 0;
}
