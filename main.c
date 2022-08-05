#include <stdio.h>
#include <stdlib.h>
int dizi [3] ={0};
void antalya (int sayi){
for(int i =0;i<sayi;i++){
    int rastgele = rand() %10 +1;
    dizi [i] = rastgele;

}

}

int main () {

printf("Oyuna hos geldiniz\n..........\n............\n1)Her Seferinde 1-10 arasinda 3 sayi tahmin edin.\n2)Tahminlerinizi giriniz.\n3)Tahminlerini cikan sayilarla karsilastirin\n4)Eger tum tahminleriniz dogru ise kazanirsiniz\n");
printf("Baslamak icin bir tusa basiniz.\n");
getch();
int tahmin [3]={0};
for (int i =0;i<1;){
    printf("Tahmininiz;\n");
    scanf("%d %d %d",&tahmin[0],&tahmin[1],&tahmin[2]);
    printf("Makinenin tuttugu sayilar...\n");
    antalya(3);
    printf("%d\t%d\t%d",dizi[0],dizi[1],dizi[2]);
    printf("\n");
    printf("Sizin tahmininiz: %d\t%d\t%d\n",tahmin[0],tahmin[1],tahmin[2]);
    if (tahmin[0]==dizi[0]){
        printf("ilk tahmininiz dogru\n");


    }
    if(tahmin[1]==dizi[1]){
        printf("Ikinci tahmininiz dogru\n");

    }

    if (tahmin[2]==dizi[2]){
        printf("Ucuncu tahmininiz dogru.\n");
    }

    if ((tahmin[0]==dizi[0])&&(tahmin[1]==dizi[1])&&(tahmin[2]==dizi[2])){
        printf("Kazandiniz\n");
    }
    else {
        printf("Dogru tahmininiz yok.\n");
    }
    printf("Tekrar oynamak icin 1 e basiniz cikmak icin herhangi bir tusa basiniz\n");
    int a;
    scanf("%d",&a);
    if (a==1){
        continue;
    }
    else {
        break;
    }
}

printf("Gorusuruz...\n");









return 0;
}
