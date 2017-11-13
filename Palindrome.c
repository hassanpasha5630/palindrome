#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void UserInput(){

   char str[500]; // in C we need to store a string in char arrays we can not store them in string as in python 


   printf( "Welcome User what is your name\n");
   
   scanf("%s", str);

   printf( "\nHello: %s \n ",str);
  
}


void CheckWords(char *array1,char *array2, int lenght){

	array1 = malloc(sizeof(lenght));
	array2 = malloc(sizeof(lenght));
	int counter = 0 ;
    int x = 0 ;

    while(counter <= lenght){

    	if(array1[x] != array2[x]){
    		printf("WORDS DO NOT MATCH !\n");
    		return;
    	}
    	else{

    		x++;
    	}
    }
    printf("Words Match\n");

}

void palindrone(){


   char str[500]; // in C we need to store a string in char arrays we can not store them in string as in python 
   char backwards[500];
   int i;
   int front = 0;


   printf( "Enter Word to check\n");
   
   scanf("%s", str);


   size_t size = strlen(str);
   int x = size ;

   while( size != -1)
   {
   		backwards[front] = str[size] ;
  		//printf("%c\n",str[size]);	
  		front++;
  		size-- ;

   }

 
   // for(i=0 ; i <= x ; i++ ){
   // 		printf("%c\n",backwards[i]);
   // }

   CheckWords(str,backwards,x);

}



int main(){


	//UserInput();
	palindrone();

}