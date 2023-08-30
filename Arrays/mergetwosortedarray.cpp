#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr3 ;
        nums1.resize(m + n);

        
        int i = 0 , j = 0 ,k = 0 ;
        
        while(i < m && j < n){
           if( nums1[i] < nums2[j] ) {
             arr3.push_back( nums1[i] );
             i++;
             k++ ;
           }

           if( nums1[i] >nums2[j] ) {
             arr3.push_back( nums2[j] );
             j++;
             k++;
           }
            
        }

        while (i < m){
            arr3.push_back( nums1[i] );
            i++;
            k++;
        }

        while (j < n){
            arr3.push_back( nums2[j] );
            j++;
            k++;
        }

         for (int p = 0; p < m + n; p++) {
            nums1[p] = arr3[p];
        }

      }
      
};