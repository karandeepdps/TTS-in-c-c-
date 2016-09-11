#include <stdio.h>
#include <stdlib.h>
#include <iostream>


#include <string.h>
#include <unistd.h>
using namespace std;



#define ERROR -1
int flag =0;



int playSound2( char *filename ) 
{ char command[256]; int status; 
 /* create command to execute */ 
 sprintf( command, "open 'http://translate.google.com/translate_tts?client=tw-ob&q=%s&tl=En' ", filename );
   /* play sound */ status = system( command ); 
    return status; 
}



int main()
{
	


        				if (flag==1)
        				{
        					int kd=0,jj=0;
        					while (mesg[kd] != '\0')
        					{
        						word[jj]=mesg[kd];
        						if(mesg[kd]==' ')
        							word[jj]='+';
        						kd++;jj++;
        					}
        					printf("google string%s\n",word);
        					playSound2(word);
        					

        				}

	

	return 0;
}