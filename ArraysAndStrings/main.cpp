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

// helper array approach, declares boolean array and sets ascii 
// value to true if letter has been seen complexity: O(n)
bool StringIsUnique_2(string& str, int& size) {
    bool asciiArr[256] = {false};   // 256 characters in standard ascii table
    for(int i = 0; i < size; i++) {
        if(asciiArr[int(str[i])]) 
            return false;
        asciiArr[int(str[i])] = true;
    }
    return true;
}

// IsPermutation helper function - returns ascii sum of string
int GetAsciiSum(string& str){
    int sum = 0;
    for(char ltr : str)
        sum += int(ltr);
    return sum;
}
// given 2 strings, checks if one is a permutation of another simple approach 
// using ascii values, assumes strings are equal length and not the same
bool IsPermutation(string& str0, string& str1) {
    return (GetAsciiSum(str0) == GetAsciiSum(str1));
}

int main() {
    string testStr = "vadim";
    string testStr_1 = "midav";
    int size = testStr.size();

    cout << IsPermutation(testStr, testStr_1);
    
    // bool result = StringIsUnique_2(testStr, size);
    // (result) ? cout << testStr << " is unique!" : cout << testStr << " is not unique!" << endl;
}