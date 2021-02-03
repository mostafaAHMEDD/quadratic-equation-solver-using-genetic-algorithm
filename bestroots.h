#ifndef bestroots
#define bestroots
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include"converter.h"
#include"geneticop.h"
#define genes 50
void avrage(int x){
    int i,j;
    float sum5=0;
    float sum6=0;
    for(i=0;i<x;i++){
        sum5+=decimal_chromosomes[i];
        sum6+=decimal_chromosomes_img[i];
    }
    avr = sum5/x;
    avri=sum6/x;
  //  printf("%f , %f ",avr,sum5);
}
void best_roots(float a,float b,int c,int x,int array2d[][genes]){
array2d[x][genes];
int vvectorr[x];
int i,m=0,w,n=0;
int j;
int z=0,v=0;
int index=0;
int index2=0;
int index3=0;
int index5=0;
int index4=0;
float min,min2,min3;
min=fitness_array[0];
for(i=1;i<x;i++){
    if(fitness_array[i]<min){
        index=i;
        min = fitness_array[i];
    }
}
for(i=0;i<x;i++){
    if((fabs(decimal_chromosomes[i]-decimal_chromosomes[index])>fabs(decimal_chromosomes[index]-avr))&&(fabs(decimal_chromosomes_img[i]-decimal_chromosomes_img[index])>fabs(decimal_chromosomes_img[index]-avri))){
            vvectorr[m]=i;
            m++;
    }
    else{
        vvectorr2[n]=i;
        n++;
    }
}
printf("\n");
mini_population[m][genes];
mini_population2[n][genes];
if((m%2)!=0){
    m=m-1;
}
if((n%2)!=0){
    n=n-1;
}
for(w=0;w<n;w++){
    for(j=0;j<genes;j++){
        mini_population2[w][j]=array2d[vvectorr2[w]][j];
    }
}
for(w=0;w<(m);w++){
    // printf("\n");
    for(o=0;o<genes;o++){
            mini_population[w][o]=array2d[vvectorr[w]][o];
      //      printf("%d",mini_population[w][o]);
        }
}
a=0.001;
do{
binary_to_decimal(m,mini_population);
fitness_roots(m);
selection_roots(m,mini_population);
crossover_and_mutation(a,b,m,mini_population);
z++;
}while(z<250);
binary_to_decimal(m,mini_population);
fitness_roots(m);
selection_roots(m,mini_population);
printf("root1 = %f + %f i \n",decimal_chromosomes[0],decimal_chromosomes_img[0]);
do{
binary_to_decimal(n,mini_population2);
fitness_roots(n);
selection_roots(n,mini_population2);
crossover_and_mutation(a,b,n,mini_population2);
v++;
}while(v<250);

binary_to_decimal(n,mini_population2);
fitness_roots(n);
selection_roots(n,mini_population2);
printf("root2 = %f + %f i",decimal_chromosomes[0],decimal_chromosomes_img[0]);
}
#define bestroots
#endif // bestroots
