//This is a program to convert normal text into ROT-13 cipher message
//Problem: Uppercase cannot be convert in cipher

#include<iostream>
#include<cstring> // cstring ==> is used to declare ---strleng()---

using namespace std;

int main(){
    char word[1000];
    int i;
    cout << "Enter a message that you want it to be encoded: " << "\n";
    cin.get(word,1000);
    cout << "\n\n";
    if(word[i]>=48 && word[i]<=57){
        cout << "\n\n ... ...INVALID CHARECTER... ... \n\n|\n|\n|\n|\n... ...Enter Again... ...\n\n\n";
        return 0;
    }
    for(i=0;i<=strlen(word);i++){
    if(word[i]>=97 && word[i]<=109){
        word[i]=word[i]+13;
    }
    else if(word[i]>109 && word[i]<=122){
        word[i]=word[i]-13;
    }
}
cout << "Your Encoded message is: "<< "\n" << word;
cout << "\n\n\n\n";
return 0;
}
