#include <stdio.h>
int main()
{
   char s[100];
  scanf("%s",s);
  int q;
  scanf("%d",&q);
  while(q--){
      int count = 0,l,r;
      scanf("%d %d",&l,&r);
       for(int j=1;j<q;j++) {

               if(s[j]=='a'||s[j]=='i'||s[j]=='e'||s[j]=='o'||s[j]=='u'){
                   count++;
               }
       }
      printf("%d",count);
  }

  return 0;
}
