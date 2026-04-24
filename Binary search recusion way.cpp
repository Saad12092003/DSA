#include<iostream>
using namespace std;
int binarysearch(int a[],int l,int h,int  key)
{
    if(l>h)
    {
        return -1;
    }
    int mid=(l+h)/2;
    if(a[mid]== key)
    {
        return mid;
    }
    else if(a[mid]<key)
    {
        return binarysearch(a,mid+1,h,key);
    }
    else
    {
        return binarysearch(a,l,mid-1,key);
    }
}
int main()
{
    int a[]={1,3,4,5,6,7,};
    int n=sizeof(a)/sizeof(a[0]);
    int key=3;
    int index=binarysearch(a,0,n-1,key);
    if(index == -1)
    {
        cout<<"Index is not found"<<endl;
    }
    else
    {
        cout<<"Index is found at "<<index<<endl;
    }
}
