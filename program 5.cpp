#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
char letter;
cout<< "Enter a letter:";
cin>> letter;
int result = islower(letter);
cout<< "result:" <<result<<"\n";
return 0;
}