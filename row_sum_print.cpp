#include<iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows ,int cols){ //dono bracket empty nhi chod sakte array must have bounds for all dimensions except the first
    
    //row sum -> row-wise traversal
    cout<<"Printin row-sum"<<endl;
    for(int i=0; i<rows; i++){
        int sum =0;
        for(int j=0; j<cols; j++){
            sum= sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){

int arr[3][3];
int rows =3;
int cols =3;

  //input

  //row wise input   
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
} 


cout << "printing col-Wise"<< endl;
    //outer loop
for(int i=0; i<3; i++) {
    //for every row, we need to print value in each column 
    for(int j=0;j<3;j++){
        cout<<arr[j][i]<< " ";
    }
    cout<< endl;
}

printRowWiseSum(arr, rows, cols);

    return 0; 
}










  
   

     

      
       



