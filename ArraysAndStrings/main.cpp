#include <iostream>
#include <vector>
#include <string>

using namespace std;

// brute force attempt: O(n^2) complexity
bool StringIsUnique_1(string& str, int& size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(str[i] == str[j])
                return false;
        }
    }
    return true;
}

// helper array approach, declares boolean array and sets ascii value to true if letter has been seen
// complexity: O(n)
bool StringIsUnique_2(string& str, int& size) {
    bool asciiArr[256] = {false};   // 256 characters in standard ascii table
    for(int i = 0; i < size; i++) {
        if(asciiArr[int(str[i])]) 
            return false;
        asciiArr[int(str[i])] = true;
    }
    return true;
}

int main() {
    string testStr = "vadim";
    int size = testStr.size();
    
    bool result = StringIsUnique_2(testStr, size);
    (result) ? cout << testStr << " is unique!" : cout << testStr << " is not unique!" << endl;

    // cout << int(testStr[1]);
}