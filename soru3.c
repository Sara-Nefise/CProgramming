#include <stdio.h>

int main(){
    int number; //bu sayi satir sayisi belirleyeck olan degisken
    printf("Please enter a number n:"); //kullanciden sayi girmesini isteyen printf
    scanf("%d",&number);
    int satir=1; //satir iteratoru
    int number1=1; //
    while(satir<=number){
        
        while (number1<satir&&satir!=1){ //verilen number degerinden kucuk olan tum sayilari printf eder
            printf("%d",number1);
            number1++;
        }
        while (number1>=1){ //number degeri ve daha kucuk printf eden degisken
            printf("%d",number1);
            number1--;
        }
        
       printf("\n");
        number1=1; //sayi her zaman 1 den baslamasi icin
        satir++;     //bir sonraki satira gecmek icin
    }

    
    return 0;
}