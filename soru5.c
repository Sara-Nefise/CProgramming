#include <stdio.h>
//Sara nafissa
/*serinin toplamını bulan bir C programı
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n serisi*/

int main(){
    int number1;
    float sum=0; 

    printf("Please enter a number:"); //kullanciden sayi girmesini isteyen printf
    scanf("%d",&number1);
    for(int i=1; i<=number1; i++){ //bu loopte serinin toplami bulur
        sum+=1.0/i;
    }
     printf("%f ",sum);
   
    return 0;
}
