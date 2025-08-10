#include <iostream>
using namespace std;
// fibonacci(1) = 0 , fibonacci(2) = 
//                fibonacci(1) + fibonacci(0) = 1 + 0
//fibonacci(3) =  fibonacci(2) + fibonacci(1) = 1 + 1 = 2 
//recursive
int fibonacci(int n) {
    if (n<=1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(int argc, char const *argv[])
{
    int a;
    cout<< "enter the number till which you want the fibonacci series: ";
    cin>> a;
    for(int i =0;i<a;i++){
        cout << fibonacci(i) << ",";
    }

// this is the for loop one with array implementation :)    
    // int fib[a]={}; // array with size a and 0 values in each element of it.
    // for (int i=0;i<a;i++){
    //     if (i==0){
    //         fib[i]=0;
    //     }
    //     else if(i==1){
    //         fib[i]=1;
    //     }
    //     else{
    //         fib[i]=fib[i-1]+fib[i-2];
    //     }
    // }
    // for(int j=0;j<a;j++){
    //     cout<<fib[j] << ",";
    // }

return 0;
}
