#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    int a, c, g, t = 0;
    char* s = new char[1000000];

    // gets(s);
    
    for(int i=0; i<strlen(s); i++){
        if(s[i] == 'A')
            a++;
        else if(s[i] == 'C')
            c++;
        else if(s[i] == 'G')
            g++;
        else if(s[i] == 'T')
            t++;
    }

    cout<<max(max(a,c),max(g,t));

}