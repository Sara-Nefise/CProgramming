#include <math.h>
#include <stdio.h>
/*bu programda kullanci bir sayi giriyor tersi printf edilir*/

int main() {
    int number;
    printf("Bir sayı giriniz:\n"); //kullanciden tek sayi girmesini isteyen printf
    scanf("%d\n",&number);
    int reminder;
    int basamak=0; //basamak sayisini tutan bir degisken
    int temp=number;
    while(number>0){ //sayini kac basamk oldugunu hesaplamak icin bir loop
        number=number/10;
        ++basamak;
    }
    int sayi=0;
    while(temp>0){
        reminder=temp%10; //her basamaga erismek icin
        sayi+=reminder*(pow(10, basamak-1)); //pow fonkisyonu us almak icin ve tekrar sayi degerleriyle carpilir .
        temp=temp/10;
        basamak--;
    }
    printf("Sayının tersten yazılışı:%d\n",sayi);

    return 0;
}