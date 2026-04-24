#include<iostream>
using namespace std;
int binarysearch(int a[],int l,int h,int key)
{
  while(l<=h)
  {
      int mid=(l+h)/2;
      if(a[mid]== key)
      {
          return mid;
      }
      else if(a[mid]<key)
      {
          l=mid+1;
      }
      else
      {
          h=mid-1;
      }
  }
  return l;
}
int main()
{
    int a[4];
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target=2;

    int index =binarysearch(a,0,n-1,target);

    if(index == -1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"Found at index "<<index<<endl;
    }
}
