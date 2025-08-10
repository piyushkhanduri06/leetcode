#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string a = "good boy";
    string b = "bood goy";
    int hash1[26]={};
    int hash2[26]={};
    bool ana{true};
    // check if the string are of same length or not
    if (sizeof(a)/sizeof(a[0]) != sizeof(b)/sizeof(b[0])){
        cout << " this is not a anagram";
        ana =  false;
    }
    // looping through the strings.
    if(ana){
        for(int i =0 ;a[i]!='\0';i++){
            if (a[i] != ' '){
                hash1[a[i]-97]++;
            }
            
        }
        for(int j =0 ;b[j]!='\0';j++){
            if (b[j] != ' '){
                hash1[b[j]-97]--;
            }
        }
        for (int k = 0;k<26;k++){
            if (hash1[k] != 0){
                cout << "this is not a anagram";
                ana = false;
                break;
                }
        }
    }
    if (ana){
        cout << "this is a anagram dude enjoy!!";
    }

    return 0;
}
