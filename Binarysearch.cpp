#include <iostream>
using namespace std;

void swapValues(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[],int size)
{
    for (int j=0; j<size-1; j++)
    {
        int min = j;
        for(int i=j+1; i<size; i++)
        {
            if(arr[i]<arr[min])
            {
                min = i;
            }
        }
        swapValues(&arr[j],&arr[min]);
    }
}



int binarySearch(int arr[], int size, int item)
{
    int position = -1;
    int f = 0;
    int l = size - 1;
    while(f<=l)
    {
        int m = (f+l)/2;
        if(item == arr[m] )
        {
            return m;
        }
        else if(item>arr[m])
        {
            f = m+1;
        }
        else
        {
            l = m -1;
        }

    }
    return position;
}


int main(void)
{
    int item ;
    cout<<"Enter your Item for search"<<endl;
    cin>>item;
    int data[] = {35,14,7,9,46,26,17,49,6,9,33,4,17,37,22};
    selectionSort(data,15);
    cout<<"Array After Sorting :"<<endl;
    printArray(data,15);
    if(binarySearch(data,15,item)!= -1)
    {
        cout<<"The position of Number "<<item<<" at index Position : "<<binarySearch(data,15,item);
    }

    else
    {

        cout<<"Item doesnt exist in the array"<<endl;

    }
    return 0;
}
