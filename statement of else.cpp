#include<iostream>
using namespace std;
int main()
{
int n;
cout<< "Enter a positive number";
cin>> n;
if(n<=10)
{
for(n=1; n<=10;n++)
{
cout<<n<<"\n";
}
}
else if(n>10&&n<20)
{
for(n=1;n<=50;n++)
{
cout<< n<<"\n";
}
}
else
{
for(n=1;n<=100;n++)
{
cout<< n<<"\n";
}
}
return 0;
}