/*
Question: Binary Search
Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the array or not. Also, find total number of comparisons for each input case.


Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    int comparisons = 0;
    bool found = false;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        comparisons++;
        
        if(arr[mid] == key) {
            found = true;
            break;
        }
        else if(arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    if(found) {
        cout << "Present " << comparisons << endl;
    } else {
        cout << "Not Present " << comparisons << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int key;
        cin >> key;
        
        binarySearch(arr, n, key);
        
        delete[] arr;
    }
    
    return 0;
} 
