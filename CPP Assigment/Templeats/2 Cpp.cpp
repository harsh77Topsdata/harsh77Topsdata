#include<iostream>
using namespace std;
// Template function to swap two elements
template<typename T>
swap(T &a,T &b) 
{
    T temp=a;
    a=b;
    b=temp;
}

// Template function to implement Bubble Sort
template <typename T>
bubbleSort(T arr[],int n) 
{
    for(int i=0;i<n-1;i++) 
	{
        for(int j=0;j<n-1-i;j++) 
		{
            if(arr[j]>arr[j+1]) 
			{
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


main()
{
	Swap.obj;
	
}

