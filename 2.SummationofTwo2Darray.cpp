
#include<iostream>
using namespace std;

void initialize1DArray(int *arr,int size,int v){
    for(int i=0;i<size;i++){
        arr[i] = v;
    }
}

void print1DArray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void initialize2DArray(int **arr,int Row,int Col,int v){
    for(int i=0;i<Row;i++){
        arr[i] = new int [Col];
    }

    for(int i=0;i<Row;i++){
        for(int j=0;j<Col;j++){
            arr[i][j] = v;
        }
    }
}


void userInput2DArray(int **arr,int Row,int Col){
    for(int i=0;i<Row;i++){
        for(int j=0;j<Col;j++){
            cin>>arr[i][j];
        }
    }
}

void print2DArray(int **arr,int Row,int Col){
    for(int i=0;i<Row;i++){
        for(int j=0;j<Col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}



int main(){

    int **arr1 = new int* [3];
    cout<<"Enter your 3x3 First Array :"<<endl;
initialize2DArray(arr1,3,3,0);
 userInput2DArray(arr1,3,3);
    cout<<"Enter your 3x3 Second Array :"<<endl;
int **arr2 = new int* [3];
initialize2DArray(arr2,3,3,0);
 userInput2DArray(arr2,3,3);

 int **arr3 = new int* [3];
initialize2DArray(arr3,3,3,0);


for(int r=0;r<3;r++){
    for(int c=0;c<3;c++){
        arr3[r][c] = arr1[r][c] + arr2[r][c];
    }

}
cout<<"Summation of 2 2D Array : "<<endl;

print2DArray(arr3,3,3);

}


