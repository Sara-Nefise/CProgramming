#include <stdio.h>
//Sara nafissa
/* Find all digits even numbers between 100-400*/

int main(){
    int x; //temp icinde verinin kopyasi saklanir
    int r; //reminder value;
    for (int i=100; i<=400; ++i){ //100 -400 arasındaki sayılar ,400 dahil eetim
        x=i;
        if(i%2==0){ //Çift olan sayılar içeriye girir
            while(x!=0){ //her digiti konrtol ediyor çift mi değil mi
                r=x%10; //digit digit sayısı parçalar
                if(r%2==0){ //her digitin tek mi çiftmi kontrol eder
                    x=x/10;
                }else{ //eğer bir digit tek çıkarsa looptan çıkar 
                    break;
                }
            }
            if(x==0){ //eğer adımları tamamiyle bitirmiş ise demekki çifttir
            // bu yüzden i de saklanan valueyu prıntf eder 
                printf("%d ",i);
            }
        }
    }
        
return 0;
}
