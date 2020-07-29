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
	string inp,valid_char;
  cout<<"Enter a string : ";
	getline(cin,inp);
  cout<<"\nEnter valid characters : ";
	getline(cin,valid_char);
	bool valid_char_map[500];
	int removed_char[500]={0};

	transform(valid_char.begin(), valid_char.end(), valid_char.begin(), ::tolower);
  
	for(int i=0; i<valid_char.size();i++)
		valid_char_map[(int)valid_char[i]]=true;
	transform(valid_char.begin(), valid_char.end(), valid_char.begin(), ::toupper);

	for(int i=0; i<valid_char.size();i++)
		valid_char_map[(int)valid_char[i]]=true;
	string out="";

	for(int i=0;i<inp.size();i++){
		if(!valid_char_map[(int)inp[i]])
			removed_char[(int)inp[i]]++;
		else
			out+=inp[i];
	}
	cout<<out<<'\n';

	for(int i=0;i<inp.size();i++){
		if(removed_char[(int)inp[i]]){
			cout<<removed_char[(int)inp[i]]<<" "<<inp[i]<<" was removed\n";
			removed_char[(int)inp[i]]=0;
		}
	}

	return 0;
}
