#include<stdio.h>
#include<string.h>
int main(){
  char str[1000],words[100][100],chkWord[100];
  int i=0,j=0,length=0,count=0;

  gets(str);
  gets(chkWord);


  for(int k=0;str[k]!='\0';k++){

	  if(str[k]!=' '&&str[k]!='\0'){
		  words[i][j++]=str[k];
	  }

	  else{
		  words[i][j]='\0';
		  i++;
		  j=0;
	  }
    }
   length=i;


    for(int k=0;k<length+1;k++){

		 if(strcmp(words[k],chkWord)==0){
			 count++;
		 }

	}

      printf(" %d\n",count);


	   return 0;
}
