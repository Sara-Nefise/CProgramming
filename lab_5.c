/*Sara Nafissa -18120212009
bu program e^x=1+ x/1! +x^2/2! +x^3/3! ... sekilnde gidiyor 
e^x e degerini bulacagiz. 
 */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int MAX_ITERATE=10; 
    int x; // kullaci den belirleyecek
    double px=1; //x in ussunu tutmak icin
    int fact=1; //faktoryel degerini tutmak icin
    double toplam=0.0;
    scanf("%d",&x); //kullanciden x in degeri aliyorum
    for(int n=0; n<=MAX_ITERATE; n++){
        int temp_n=n; //n degeri tempi aliyorum
        double power=pow(x,px-1); //us degeri saklamak icin 
        while(temp_n>0){ 
            fact*=temp_n--; //faktoriyel degeri tutmak icin
        }
        toplam+=(power/fact); //us/faktoriyel degeri
        fact=1; //tekrar fact degeri 1 yapariz 
        px++; //px in degeri artiriyoruz
    }
    printf("%.5lf",toplam); //toplam degeri basiyor
       
    return 0;
}
