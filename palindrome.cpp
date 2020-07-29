
// Write a program to find out if a string is a palindrome. The string may contain spaces as well as special characters.
// The program should ignore the special characters and determine whether the string is a palindrome or not.
// (For example the string can be “m ad..am”. In this case the string should be read as “madam” which is a palindrome.)


#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
char string1[100],string2[100], reverse[100];

cout << "Enter the string : ";
cin.getline(string1,100);
cout<<string1<<endl;

int i ;
int n1 = strlen(string1);
//ignoring special character
int j=0;
for(i = 0; i < n1 ; i++){
    if(isalpha(string1[i])){
        string2[j]=string1[i];
        j++;
    }
    else{
        continue;
        }
}
int n2 = strlen(string2);
/* Reversing the string */
for(i = 0; i < n2 ; i++)
{
    reverse[n2-1-i] = string2[i];
}

/* Comparing input string with the reverse string */
if (strcmp(string2, reverse) == 0)
    cout << "The string is a palindrome\n";
else
    cout << "The string is not a palindrome\n";

return 0;

}
