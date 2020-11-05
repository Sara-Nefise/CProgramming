#include <stdio.h>

int main(){
int n,star,sum; //n deger sayısı
printf("Please enter an odd number n:"); //kullanciden tek sayi girmesini isteyen printf
scanf("%d",&n);

 star=n-1; //yildiz sayisi tutan bir değişken
 sum=1; //artı sayisi tutan bir değişken
 while(sum<n){ //bu loopte baştan yıldız sayıları 2 düşünceye kadar çalışır
     for(int i=0; i<star/2; ++i){ //yıldız sayısının yarısı kadar prıntf eder
        printf("*");
    }
    for(int j=0; j<sum; ++j){ //ortada + sembolu prıntf eder
          printf("+");
    }
    for(int k=star/2; k<star; ++k){ //tekrar geride kalan yıldızları prıntf eder
        printf("*");
    }
    printf("\n");
    sum+=2;
    star-=2; 
 }while(sum==n){ //bu loopte artı sayısı n sayisi ulaştığında çalışır 
    for(int j=0; j<sum; ++j){    //artıları prıntf eder
          printf("+");
    }
    printf("\n");
    sum-=2;
    star+=2; 
 }while(star<n){ //yıldız sayısı n den küçük olduğunda çalışır
    for(int i=0; i<star/2; ++i){ //yıldız sayısının yarısı kadar prıntf eder
        printf("*");
    }
     for(int j=0; j<sum; ++j){ //ortada + sembolu prıntf eder
        printf("+");
    }
    for(int k=star/2; k<star; ++k){ //tekrar geride kalan yıldızları prıntf eder
        printf("*");
    }
    printf("\n");
    star+=2;
    sum-=2;
}



 


    return 0;
}
