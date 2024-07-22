#include<iostream>

using namespace std;

//You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

//For each index i, names[i] and heights[i] denote the name and height of the ith person.

//Return names sorted in descending order by the people's heights.

//Example 1:

//Input: names = ["Mary","John","Emma"], heights = [180,165,170]
//Output: ["Mary","Emma","John"]
//Explanation: Mary is the tallest, followed by Emma and John.

int main(){
    string names[]={"IEO","Sgizfdfrims","QTASHKQ","Vk","RPJOFYZUBFSIYp","EPCFFt","VOYGWWNCf","WSpmqvb"};
    int heights[]={17233,32521,14087,42738,46669,65662,43204,8224};
    
    int n;
    int temp;
    string test;
    n=sizeof(heights)/sizeof(int);
    //cout<< n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(heights[i]<heights[j]){
                test=names[i];
                names[i]=names[j];
                names[j]=test;
                temp=heights[i];
                heights[i]=heights[j];
                heights[j]=temp;
            }
        }
    }
    for (int k = 0;k<n;k++){
        cout<< heights[k]<<"("<<names[k]<<")"<<" ";
    }
    return 0;
}