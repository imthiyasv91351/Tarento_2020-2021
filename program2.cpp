/*
Program 2 :

- Accept a String input
- Accept a String of valid chars
- Remove all the characters that are not present in the valid chars from the input string
- Print the cleansed String and the count of characters removed

Eg. If the String input is
I am a 5** programmer
and the valid chars is abcdefghijklmnopqrstuvwxyz 123
then the output should be as below
I am a programmer
2 * was removed
1 5 was removed

*/


#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	string strinput;
  string valid_char;
  cout<<"Enter a string : ";
	getline(cin,strinput);
  cout<<"\nEnter a valid string : ";
	getline(cin,valid_char);
	bool valid_char_map[500];
	int removed_char[500]={0};

	for(int i=0; i<valid_char.size();i++)
		valid_char_map[(int)valid_char[i]]=true;
	string out="";
	for(int i=0;i<strinput.size();i++){
		if(!valid_char_map[(int)strinput[i]])
			removed_char[(int)strinput[i]]++;
		else
			out+=strinput[i];
	}
	cout<<out<<'\n';

	for(int i=0;i<strinput.size();i++){
		if(removed_char[(int)strinput[i]]){
			cout<<removed_char[(int)strinput[i]]<<" "<<strinput[i]<<" was removed\n";
			removed_char[(int)strinput[i]]=0;
		}
	}
	return 0;
}
