#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    vector<int> myVec;
    srand(time(nullptr));

    for(int i = 0; i < 10; i++)
        myVec.push_back((rand() % 100) + 1);
    
    cout << "Contents of myVec: \n";
    for(int val : myVec)
        cout << val << " ";
    

    
    return 0;
}