/*SARA NAFISSA -18120212009
bu program menuden deger alir sonrada kullanciya ona gore fonksiyon çağırır.
*/

#include <math.h>
#include <stdio.h>

//Fonksiyonların prototiplerini yazınız
double cikar(int x1,int x2,int y1,int y2);
double bol(int x1,int x2,int y1,int y2);
double ondalik_goster(int x1,int y1);
void ekrana_bas(int x1,int y1);

//fonksiyonları tanımlayınız
double cikar(int x1,int x2,int y1,int y2){
   double deger=(x1/y1)-(x2/y2); //cıkarma işlemi
   return deger;
}
double bol(int x1,int x2,int y1,int y2){
    if(y1==0||y2==0){ //eğer payda da 0 değeri varsa Error verir.
        printf("Error\n");
        return -1;
    }
    double pay=((double)x1/(double)y1); //burda type casting yaptım bölme işleminde virgülden sonraki rakamları gitmemesi için
    double payda=((double)x2/(double)y2);
    if(payda>0||payda<0){ //payda 0 den büyük olursa
        double sonuc=(pay/payda);
        printf("%.lf",sonuc);
        return sonuc;
    }else if(payda==0){ //payda 0 olursa bölme işlemi gerçekleştiremeyiz
        printf("Error\n");
        return -1;
    }
    return 0;
}

double ondalik_goster(int x1,int y1){
    double deger=(x1/y1);
    printf("%.2lf",deger); //virgülden sonra iki hane gösterir
    return deger;
}

void ekrana_bas(int x1,int y1){ //sayıları 1/3 gibi gösterimi sağlyor.
    printf("%d/%d",x1,y1);
}



int main() {
    
    // Degişkenleri tanımlayınız
    int x1,x2,y1,y2,menu_sayi;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    scanf("%d",&menu_sayi);//menüden sayı seçimi için.
     //Menu
   /* printf("1-Kesirleri çıkarmak için 1'e\n2-Kesirleri bölmek için 2'ye\n3- Kesir
   değerini ondalık göstermek için 3'e\n4- Kesri ekrana basmak için 4'e basınız\n");*/
   
    if(menu_sayi==1){
        
        printf("%1.lf",cikar(x1, x2, y1, y2));
        
    }else if(menu_sayi==2){
        
        bol(x1, x2, y1, y2);
        
    } else if(menu_sayi==3){
        
        ondalik_goster(x1, y1);
        
    } else if(menu_sayi==4){
        
        ekrana_bas(x1, y1);
    }
    return 0;
}
