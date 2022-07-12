#include<iostream>
using namespace std;
int palidrome(string str);

int palidrome(string str)
{
	int i,j=str.length()-1;
	while (i<j)
	{
		if(str[i]!=str[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}
int main()
{
	string str="madam";
	if(palidrome(str))
	{
		cout<<"This letter is palidrome";
	}
	else
	{
		cout<<"This letter is not palidrome";
	}
}