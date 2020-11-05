#include <stdio.h>

int main(){
    int x;
    //int Array[]={};
    int r;
    for (int i=100; i<=400; ++i){
        x=i;
        if(i%2==0){
            while(x!=0){
                r=x%10;
                if(r%2==0){
                    x=x/10;
                }else{
                    break;
                }
            }
            if(x==0){
                printf("%d ",i);
            }
        }
    }

                 
           
          
 return 0;
}