#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

int main()
{
    int casos=0,a=0, parte=0, diamantes=0;
    char mistura[1000];
    cin>> casos;
    stack <char> leitura;
    while (a!=casos)
    {
        cin>>mistura;
        for(int i=0; i < strlen(mistura);i++)
        {
            leitura.push(mistura[i]);
            if(leitura.top() == '<')
            {
                parte++;
            }
            if(leitura.top() =='>' && parte!=0)
                {
                    diamantes++;
                    parte--;
                }

        }
        cout<<diamantes<<endl;
         diamantes=0;
         parte=0;
        a++;
    }
    return 0;
}
