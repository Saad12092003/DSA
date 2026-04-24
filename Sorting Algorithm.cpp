#include<iostream>
using namespace std;

void printlist(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
}

void insertionsort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
int binarysearch(int arr[],int n,int key)
{
    int st=0,en=n-1;
    while(st<=en)
    {
        int mid=(st+en)/2;
        if(arr[mid]== key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            st=mid+1;
        }
        else
        {
            en=mid-1;
        }
    }
    return -1;
}





int main()
{

    int n;
    cout<<endl<<"Inter the number of elements :";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++)
    {
        cin>>arry[i];
    }
    printlist(arry,n);
    bubblesort(arry,n);
    cout<<"After the bubble sort :";
    printlist(arry,n);
    insertionsort(arry,n);
    cout<<"After the Insertion sort :";
      printlist(arry,n);
    selectionsort(arry,n);
    cout<<"After the selection sort :";
      printlist(arry,n);


    int key;
    cout<<" search the Number :";
    cin>>key;
    int loc=binarysearch(arry,n,key);
    if(loc ==-1)
    {
        cout<<key<< "is not found";
    }
    else
    {
        cout<<key<<" if found at index "<<loc;
    }


}

