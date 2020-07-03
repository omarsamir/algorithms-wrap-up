// test-field.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// Bubble Sort
void bubbleSort() {
    int i, j, temp;
    int arr[5] = { 10,2,0,43,12 };
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Result: \n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
}

//Selection sort
int findSmallest(int arr[], int i) {
    int currentSmallest, position;
    currentSmallest = arr[i];
    position = i;
    for (int j = i; j < 5; j++) {
        if (arr[j] < currentSmallest) {
            currentSmallest = arr[j];
            position = j;
        }
    }
    return position;
}
void selectionSort() {
    int arr[5] = { 12,45,8,15,33 };
    int pos, temp;
    for (int i = 0; i < 5; i++) {
        pos = findSmallest(arr, i);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
}



int main()
{
    //bubbleSort();
    selectionSort();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
