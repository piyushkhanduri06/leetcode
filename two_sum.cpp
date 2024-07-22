#include<iostream>
using namespace std;
#include <list>
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

int main(){
    int target = 6;
    int nums[]={3,2,4};
    int size = sizeof(nums)/sizeof(int);
    int right;
    int left{0};
    for(int i =0;i<size;i++){
        if(nums[i]<=target){
            if(target-nums[left]==nums[i] && left!=i){
                right=i;
                cout<< left << right;
            }
            else{
                left=i;
            }
        }
    } 
    

}