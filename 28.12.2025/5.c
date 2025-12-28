#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("vowel");
    }
    else{
        printf("not vowel");
    }
    return 0;
}