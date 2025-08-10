#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {2, 3, 1, 4 ,5 , 5 , 6 , 7, 9 ,5};
    int repeat , miss;
    repeat=miss=0;
    // for (int i =1 ; i<=sizeof(a)/sizeof(a[0]); i++){
    //     int count{0};
    //     for(int j = 0 ;j<sizeof(a)/sizeof(a[0]);j++){
    //         if (i==a[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count>1)
    //         {
    //             repeat=i;
    //         }
    //         else if(count<1){
    //             miss=i;
    //         }
    //         if(repeat !=0 && miss!=0){
    //             break;
    //         }
    // }


// hashing
    int n =sizeof(a)/sizeof(a[0]);
    int hash[n+1] = {0};
    for (int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for (int i = 1;i<=n;i++){
        if (hash[i] > 1){
         repeat=i;
        }
        else if(hash[i] == 0){
            miss=i;
        }
        if(repeat !=0 && miss!=0){
            break;
        }
    }
    cout << "this is the repeating number :" << repeat << endl;
    cout << "this is the missing number :" << miss << endl;    
    return 0;
}
