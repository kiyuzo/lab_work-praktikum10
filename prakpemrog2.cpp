#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 25, 44, 50, 41, 42, 49, 10, 15, 38, 7, 45, 12, 15, 41, 48, 40, 44, 22, 39};
    int dataSize = sizeof(arr)/sizeof(arr[0]);

    // INPUTS THE DESIGNATED NUMBER TO BE GREATER THAN
    int key;
    cout << "Please insert what number should be greater than : ";
    cin >> key;

    // SEARCHING THE NUMBERS
    int count = 0;
    for(int i = 0; i < dataSize; i++){
        if(arr[i] > key){
            count++;
        }
    }

    if(count == 0){
        cout << "No Data Was Found";
    }
    else{
        cout << "DATA FOUND! There are " << count << " data(s) of " << key << "(s)" << endl;
        cout << "The data(s) are : ";
        for(int i = 0; i < dataSize; i++){
            if(arr[i] > key){
                cout << arr[i] << ", ";
            }
        }
    }

    return 0;
}
