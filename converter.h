#ifndef converter
#define converter
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define genes 50
float decimal_chromosomes[100000];
float decimal_chromosomes_img[100000];
float fitness_array[100000];
float total_fitness;
int childs[100000][genes];
int mini_population[100000][genes];
int mini_population2[100000][genes];
int vect[100000];
int vvectorr2[1000000];
int vector[100000];
float ssum=0;
float random=0;
int pick;
int o=0;
float avr,avri;
float aa,bb,cc;
void binary_to_decimal(int x,int ARRAY2d[][genes]){
decimal_chromosomes[x];
decimal_chromosomes_img[x];
int i,j,count;
int sum3=0;
int sum=0;
for(j=0;j<x;j++){
    for(i=0;(i<genes/2);i++){
        sum+=ARRAY2d[j][i]*pow(2,i);
    }
    decimal_chromosomes[j]=sum;
    sum=0;
}
for(j=0;j<x;j++){
        count=0;
    for(i=(genes/2);i<genes;i++){
        sum3+=ARRAY2d[j][i]*pow(2,count);
        count++;
    }
    decimal_chromosomes_img[j]=sum3;
    sum3=0;
}
for(j=0;j<x;j++){
    decimal_chromosomes[j]=-10+0.000001*decimal_chromosomes[j];
    decimal_chromosomes_img[j]=-10+0.000001*decimal_chromosomes_img[j];
  //  printf("%f +  %f i\n",decimal_chromosomes[j],decimal_chromosomes_img[j]);
      }
}
#define converter
#endif // converter
