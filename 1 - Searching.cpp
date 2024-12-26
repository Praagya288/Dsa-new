/*

// Searching
// 1 - Linear Search
// Time complexity = O(n)
// Space complexity = O(1)

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of the vector";
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements of the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cout << "Enter the target element " << endl;
    cin >> target;

    // Linear search
    int position = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
        {
            position = i;
            break;
        }
    }

    cout << "The target element is present at index "<< position<<endl ;		

}
*/

/*
// Binary search - (iterative)
// Time complexity = O(logn)
// Space complexity = O(1)

#include<iostream>
#include<vector>
using namespace std ;



int binarySearch(vector<int> &v , int n , int target){
    int start = 0 ;
    int end = n-1 ;

    while( start <= end)
    {
        int mid = ( start + end ) / 2 ;

            if(v[mid] < target)
            {
                start = mid + 1 ;
            }
            else if(v[mid] > target)
            {
                end = mid - 1  ;
            }
            else{
                return mid ;
            }


    }

    return -1 ;

}


int main()
{

    int n ;
    cout<<"Enter the size of the vector"<<endl ;
    cin>>n ;

    vector<int> v(n) ;
    cout<<"Enter the elements of the vector"<<endl ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i] ;
    }

    int target ;
    cout<<"Enter the target element"<<endl ;
    cin>>target ;


    int position = binarySearch(v , n , target) ;
    cout<<"The target element is at index: " <<position<<endl ;


}
*/


// Binary search - (recursive)
// Time complexity = O(logn)
// Space complexity = O(logn)

#include<iostream>
#include<vector>
using namespace std ;



int binarySearch(vector<int> &v , int start , int end , int target){

    while( start <= end)
    {
        int mid = ( start + end ) / 2 ;

            if(v[mid] < target)
            {
                return binarySearch(v , mid + 1 , end  , target) ;
            }
            else if(v[mid] > target)
            {
                return binarySearch(v , start  , mid - 1 , target) ;
            }
            else{
                return mid ;
            }


    }

    return -1 ;

}

int main()
{

    int n ;
    cout<<"Enter the size of the vector"<<endl ;
    cin>>n ;

    vector<int> v(n) ;
    cout<<"Enter the elements of the vector"<<endl ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i] ;
    }

    int target ;
    cout<<"Enter the target element"<<endl ;
    cin>>target ;


    int position = binarySearch(v , 0 , n-1 , target ) ;
    cout<<"The target element is at index: " <<position<<endl ;


}

