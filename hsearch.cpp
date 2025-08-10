#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int search;
    bool found{false};
    cout <<"enter the element you want to search: ";
    cin >> search;
    int array[] = {2 , 5 , 6 , 3 , 4};
    int n = sizeof(array)/sizeof(array[0]);
    int hash[n+2] = {};

    for (int i = 0;i<n;i++){
        hash[array[i]]=array[i];
    }
    for(int i =2;i<n+2;i++){
        if (hash[i]==search){
            found=true;
            cout<<" yes it is found!";
            break;
        }
    }
    if(!found){
        cout <<" element was not found!";
    }
    return 0;
}
