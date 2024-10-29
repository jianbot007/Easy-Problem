#include<iostream>
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

//Bubble Sort
void bubbleSort(int arr[],int size)
{
    for(int i  =  0; i<size-1; i++)
    {
        for(int j = 0; j<size-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapValues(&arr[j],&arr[j+1]);
            }
        }
    }
}

//Selection Sort
void selectionSort(int arr[],int size)
{
    for (int j=0; j<size; j++)
    {
        int min = j;
        for(int i=j+1; i<=size-1; i++)
        {
            if(arr[i]<arr[min])
            {
                min = i;
            }
        }
        swapValues(&arr[j],&arr[min]);
    }
}

//Insertion Sort
void insertionSort(int arr[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int hand = arr[i];
        int j = i - 1;


        while (hand < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = hand;
    }
}



int main()
{
    int size = 15;
    int data[] = {35,14,7,9,46,26,17,49,6,9,33,4,17,37,22};

    cout<<"Unsorted Data"<<endl;
    printArray(data,15);

    //Call your sorting function
   // bubbleSort(data,15);
    selectionSort(data,15);
   // insertionSort(data,15);

    cout<<"Sorted Data"<<endl;
    printArray(data,15);

    return 0;
}
