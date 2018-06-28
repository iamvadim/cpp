#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "sorts.h"

using namespace std;

void swap(vector<int>& myVec, int i, int j) {
    int temp = myVec[j];
    myVec[j] = myVec[i];
    myVec[i] = temp;
}

void PrintVector(vector<int>& myVec){
    for(int val : myVec)
        cout << val << " ";
    cout << endl;
}

void BubbleSort(vector<int>& myVec){
    for(int i = 0; i < myVec.size()-1; i++){
        for(int j = 0; j < myVec.size() - 1; j++) {
            if(myVec[j] > myVec[j+1])
                swap(myVec, j, j+1);
        }
    }
}

int main() {
    
    // Greeting();
    vector<int> myVec;
    srand(time(nullptr));

    for(int i = 0; i < 10; i++)
        myVec.push_back((rand() % 100) + 1);
    
    cout << "Contents of myVec before sorting...\n";
    PrintVector(myVec);
    BubbleSort(myVec);
    cout << "Contents of myVec after sorting...\n";
    PrintVector(myVec);
    
    return 0;
}