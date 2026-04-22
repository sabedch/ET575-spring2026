/*
Sabed Chowdhury
April 22, 2026
Lab 19, 2D arrays
*/


// example 1: function to print the elements in a 2D array
void print2d(int arr[][COLSIZE], int rowsize){
    for(int row = 0;row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// example 2: function to sum all even positive number in a 2D array
int sumevenpositive(int arr[][COLSIZE], int rowsize){
    int sumallevenpositive = 0;
    for(int row = 0;row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            if(arr[row][col]>0 && arr[row][col]%2==0)
                sumallevenpositive += arr[row][col];
        }
        cout<<endl;
    }
    return sumallevenpositive;
}

void printsum(int sumallevenpositive){
    cout<<"The result is "<<sumallevenpositive<<endl;
}

// EXERCISE
void populate(int arr[][colsize2], int rowsize2, int colsize2){
    srand(time(0));
    for(int row = 0; row<rowsize2;row++){
        for(int col = 0; col<colsize2;col++){
            arr[row][col] = rand()%100;
        }
    }
}

void printvaluearray(int arr[][colsize2], int rowsize2, int colsize2){
    for(int row = 0; row<rowsize2;row++){
        for(int col = 0; col<colsize2;col++){
            cout<<arr[row][col]<<"\t";
        }
    cout<<endl;
    }
}

int average(int arr[][colsize2], int rowsize2, int colsize2){
    int sum = 0;
    int avg = 0;
    int num = 0;
    for(int row = 0; row<rowsize2;row++){
        for(int col = 0; col<colsize2;col++){
            sum += arr[row][col];
            num++;
        }
    }
    avg = sum/num;
    return avg;
}