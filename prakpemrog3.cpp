#include <iostream>
using namespace std;

void ascendInsertSort(int arr[], int n) {
    for (int j = 1; j < n; j++) {
        int i = j - 1;
        int temp = arr[j];
        while (i >= 0 && arr[i] > temp) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }
}

int main(){
    int arr[] = {10, 25, 44, 50, 41, 42, 49, 10, 15, 38, 7, 45, 12, 15, 41, 48, 40, 44, 22, 39};
    int dataSize = sizeof(arr)/sizeof(arr[0]);

    // INPUTS THE DESIGNATED NUMBER TO BE GREATER THAN
    int key;
    cout << "Please insert what number should be greater than : ";
    cin >> key;

    ascendInsertSort(arr, dataSize);

    // BINARY SEARCH
    int low = 0;
    int high = dataSize - 1;
    int count = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > key) {
            count += (high - mid + 1);
            high = mid - 1;
        }
        else {
            low = mid + 1;
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
