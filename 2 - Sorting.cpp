// Bubble sort
#include <bits/stdc++.h>
using namespace std;

// Bubble sort
void bubbleSort(vector<int> &nums, int n)
{

    bool isSwap = false; // optimization

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwap = true ;
            }
        }

        if(!isSwap){ // ie array is already sorted 
            return ;
        }
    }
}

// Selection sort
void selectionSort(vector<int> &nums , int n){

    for(int i = 0 ; i < n-1 ; i++){

        int smallestIndex = i ;

        for(int j = i+ 1 ; j < n ; j++){
            if(nums[j] < nums[smallestIndex]){
                smallestIndex = j ;
            }
        }
        

        swap(nums[i] , nums[smallestIndex] ) ;

    }

}

// Insertion sort
void insertionSort(vector<int> &nums , int n){

    for(int i = 1 ; i < n ; i++){
        int curr = nums[i] ;
        
        int j = i-1 ;
        while( j >= 0 && nums[j] > curr){
                nums[j+1] = nums[j] ;
                j-- ;
            }

        nums[j+1] = curr ;
        }

}

int main()
{
    vector<int> nums = {5, 7, 1, 4, 9};
    int n = nums.size();

    // bubbleSort(nums , n) ; // Time complexity = O(n2)
    // selectionSort(nums , n) ; // Time complexity = O(n2)
    insertionSort(nums , n) ; // Time complexity = O(n2)


    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}