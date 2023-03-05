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

return 0;
}