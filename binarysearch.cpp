#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binarysearch(int a[],int target,int size )
{
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<=e)
{
    if(a[mid]==target)
      return mid;
    if(target<a[mid])
     e=mid-1;
     if(target>a[mid])
      s=mid+1;

      mid=s+(e-s)/2;
}
return -1;
}
int main()
    {
      int a[]={2,3,4,5,6,7,8,9,10};
      int size=9;
      int t;
        cout<<"Enter the target";
        cin>>t;
        cout <<binarysearch(a,t,size);


    }