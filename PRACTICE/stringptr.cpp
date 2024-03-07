#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
const char* str= "all that ends,  is well." ;
int frequency[26]= { } ;
for(const char *ptr =str ; *str ; str++ ){
    char currentcharacter= tolower(*ptr) ;
    if(isalpha(currentcharacter)){
frequency[currentcharacter-'a']++ ;
    }
}


    return 0;
}