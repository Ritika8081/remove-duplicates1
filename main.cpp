/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>


using namespace std;
bool isVowel(char ch){
    
    return (ch=='a'||ch =='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}
int countVowel(string str,int n){
    if(n==1)
    return isVowel(str[n-1]);
    return countVowel(str,n-1)+isVowel(str[n-1]);
    
}


int main()
{
    string str="abcod";
    
    int num=countVowel(str,str.length());
    int consonent=str.length()-num;
    cout<<consonent<<endl;
    cout<<countVowel(str,str.length());
    
   
    return 0;
}
