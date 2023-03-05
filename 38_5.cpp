#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"list : ";
    list<int> l1 ;
    
    int size,a;
    cout<<"enetr size of list";
    
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>a;
        l1.push_back(a);
        
        
    }
list<int> :: iterator x;
for(x=l1.begin() ; x!=l1.end(); x++)
{
    cout<<*x<<" ";
}

return 0;
}
