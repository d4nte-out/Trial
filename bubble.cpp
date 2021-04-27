using namespace std;
#include<iostream>

int main()
{
    int max;
    cout<<"Enter the number of elements in the array\n";
    cin>>max;
    int arr[max];
    cout<<"Enter the elements in the array\n";
    for(int x=0;x<max;x++)
    {
        cin>>arr[x];
    }// hello
    for(int i=0;i<max-1;i++)
    {
        
        for(int j=0;j<max-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int q=0;q<max;q++)
    {
        cout<<arr[q];
    }
    return 0;
}