#include <iostream>
using namespace std;

// this code was to first check for the factors of the given number and then return the number on the 
//asked iteratorating factor.


int main()
{
    int n = 12;
    int k = 3;
    // int a = n;
        int fact[n];
        int j = 0;
        for(int i =1;i<=n;i++){
            if (n % i==0){
                fact[j]=i;
               // cout << fact[j]<<" ";
                j++;
            }
        }
        if (k<=j){
            cout << fact[k-1] <<" ";
        }
        else{
            cout << "-1";
        }
    return 0;
}

