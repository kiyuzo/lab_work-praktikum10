#include <iostream>
using namespace std;

struct student {
    int id;
    string fullname;
    int score;
};

// INSERT SORT FUNCTION (ASCENDING)
void ascendInsertSort(student arr[], int n) {
    for (int j = 1; j < n; j++) {
        int i = j - 1;
        student temp = arr[j];
        while (i >= 0 && arr[i].id > temp.id) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }
}

int main() {
    // THE STUDENTS DATA
    student studentData[] = {
        {408599, "Cecilio Schubart", 93},
        {403189, "Desiri Chalker", 90},
        {405462, "Falkner Carder", 75},
        {406703, "Delainey Ruckhard", 89},
        {400324, "Colette Abramovic", 92},
        {404342, "Irwinn Bussey", 81},
        {409504, "Terrie Whitaker", 83},
        {401339, "Gary Binestead", 77},
        {405509, "Ferris Fulbrook", 91},
        {400522, "Diane Bissill", 77},
        {404878, "Ricoriki Jiroutka", 93},
        {403536, "Reidar Putten", 89}
    };
    // SORTS THE DATA BY ID
    int dataSize = sizeof(studentData) / sizeof(studentData[0]);
    ascendInsertSort(studentData, dataSize);

    // ASKING THE KEY
    int key;
    cout << "Please input the ID of your student : ";
    cin >> key;

    // SEARCHING THE DATA
    bool found = false;
    int min = 0, max = dataSize - 1, mid, resultKey;

    while (!found && min <= max) {
        mid = (min + max) / 2;
        if (studentData[mid].id == key) {
            found = true;
            resultKey = mid;
        } else if (studentData[mid].id < key) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    if (!found) {
        cout << "The data is not found";
    } else {
        cout << "DATA FOUND !!!" << endl;
        cout << "Student ID : " << studentData[resultKey].id << endl;
        cout << "Full Name : " << studentData[resultKey].fullname << endl;
        cout << "Score : " << studentData[resultKey].score << endl;
    }
    return 0;
}
