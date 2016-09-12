#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

//Created by karandeepdps@gmail.com
//for all those who want to use lightweight tts.
//Credit goes to google tts.
//Mac version.

using namespace std;



#define ERROR -1
int flag =0;



int playSound2( char *filename ) 
{ char command[256]; int status; 
 /* create command to execute */ 
	cout<<"Processing"<<endl;
 sprintf( command, "wget -q -U Mozilla -O output.mp3 'http://translate.google.com/translate_tts?client=tw-ob&q=%s&tl=En' ", filename );

   /* play sound */ status = system( command ); 
  sprintf( command, "afplay %s ", "output.mp3" );
  status = system( command ); 
  status = system( "clear" ); 
    return status; 
}



int main()
{
	char word[100000];
	char mesg[100000];

	while(1)
	{
		memset(mesg,0,100000*sizeof(char));
		memset(word,0,100000*sizeof(char));
		cout<<"Enter String"<<endl;
		fgets(mesg,1024,stdin);


		int counter=0;

        			
        					int kd=0,jj=0;
        					while (mesg[kd] != '\0')
        					{
        						word[jj]=mesg[kd];
        						if(mesg[kd]==' ')
        							word[jj]='+';
        						kd++;jj++;
        						counter++;
        						if(counter>80 &&  )
        						{

        						playSound2(word);
        						counter=0;
        						memset(word,0,100000*sizeof(char));
        						jj=0;

        						}
        					}
        				//	printf("google string%s\n",word);
        					playSound2(word);
        					

        				

       }

	

	return 0;
}