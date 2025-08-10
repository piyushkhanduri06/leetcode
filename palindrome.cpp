#include <iostream>
using namespace std;

bool ispalindrome(string a){
    int length = a.length();
    int front{0};
    int rear = length-1;
    for(int i =0 ; i<length/2 ; i++){
        if (a[front] != a[rear])
        {
            return false;
        }
        front++;
        rear--;        
    }
   // cout << a[front] << " this is rear" << a[rear];
    return true;
}



int main(int argc, char const *argv[])
{
    // this is the program to check whether a string is a palindrom or not.
    string value;
    cout << " Enter the value you want to check whether it is a palindrome for not :";
    cin >> value;
    if (ispalindrome(value))
    {
        cout << "yes this is a palindrome";
    }
    else{
        cout << " this is not a palindrome nigga";
    }
    
    return 0;
}
