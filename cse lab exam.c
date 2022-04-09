#include<stdio.h>
#include<string.h>

int main(){
    int NuM[3],Minimum,Midium,Maximum,k;
    char Temporary[10];
    memset(NuM,0,sizeof(NuM));
    for(k=0;k<3;k++){
        scanf("%s",Temporary);
        if(Temporary[1]=='>'){
            NuM[Temporary[0]-'A']++;
        }
        if(Temporary[1]=='<'){
            NuM[Temporary[2]-'A']++;
        }
    }
    if(NuM[0]==NuM[1]||NuM[1]==NuM[2]||NuM[2]==NuM[0]){
       printf("Impossible\n");
    }
    else{
        for( k=0;k<3;k++){
            if(NuM[k]==2){
                Maximum=k;
            }
            if(NuM[k]==1){
                Midium=k;
            }
            if(NuM[k]==0){
                Minimum=k;
            }
        }
        printf("%c%c%c\n",Minimum+'A',Midium+'A',Maximum+'A');
    }
    return 0;
}
