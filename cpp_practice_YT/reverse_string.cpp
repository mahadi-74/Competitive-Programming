#include<iostream>
#include<string.h>
#define MAX_SIZE 100
using namespace std;
int main()
{
    int lenght,i,j;
    char string[MAX_SIZE];
    char reverse[MAX_SIZE];

    cin>>string;
    lenght = strlen(string);
    j=0;
    for(i= lenght-1; i>=0; i--)
    {
        reverse[j]=string[i];
        j++;
    }
    reverse[j];
    cout<<reverse;
    return 0;

}
