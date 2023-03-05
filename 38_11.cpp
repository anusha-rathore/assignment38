#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   list<int>list1;
   
    int arr[] ={1,2,3,4,55,6,};
    list1.assign(arr,arr+6);
    for (auto i : list1)
{
    cout<< i <<" ";
}
cout<<"\nAfter assigning the all elements of another list : "<<endl;
list<int>l2;
l2.assign(list1.begin(), list1.end());
    for (auto i : list1)
{
    cout<< i <<" ";
}
return 0;
}