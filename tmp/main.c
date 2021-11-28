#include "main.h"

void mode_1(int aArgc,char* aArgv[])
{

   if(aArgc<2)
   {
      printf("usage : myfact <number>\n");
   }
    else
   {    
        
       int theNbr = atoi(aArgv[1]);

       long theResutlOfFact = getFact(theNbr);

       printf("%d! = %ld\n",theNbr,theResutlOfFact);
       
    }

}

void mode_2()
{   
    int theNbr ;

    printf("Donner un entier : ");
    scanf("%d",&theNbr);

    long theResutlOfFact = getFact(theNbr);

    printf("%d! = %ld\n",theNbr,theResutlOfFact);
}

int main(int argv, char* argc[])
{
	
    int theMode =  readLine(FILE_PATH);

    switch(theMode)
    {
        case 1 : mode_1(argv,argc); break;
        case 2 : mode_2(); break;

        default : break;
    }


   return 0;
}

