#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include"converter.h"
#include"geneticop.h"
#include"bestroots.h"
#define genes 50
int main(void){
int number_of_generation=20;
int number_of_chromosomes=10000;
printf("a*X^2 +b*X +c \n");
printf("enter a , b , c \n");
scanf("%f %f %f",&aa,&bb,&cc);
//printf("enter number of chromosomes\n");
//scanf("%d",&number_of_chromosomes);
int population[number_of_chromosomes][genes];
int i,j;
float crossover_rate=0.9;
float mutation_rate= 0.01;
int gen=0;
//printf("enter crossover rate\n");
//scanf("%f",&crossover_rate);
//printf("enter mutation rate\n");
//scanf("%f",&mutation_rate);
//printf("enter number of generation\n");
//scanf("%d",&number_of_generation);
for(i=0;i<number_of_chromosomes;i++){
    for(j=0;j<genes;j++){
        population[i][j]=rand()%2;
    }
    }
/*    for(j=0;j<number_of_chromosomes;j++){
 //       printf("\n");
        for(i=(genes-1);i>=0;i--){
   //          printf("%d",population[j][i]);
        }
    }*/
do{
//printf("\n\n");
//printf("population in decimal:\n");
binary_to_decimal(number_of_chromosomes,population);
//printf("\n\n");
fitness_roots(number_of_chromosomes);
//printf("\n\n");
selection_roots(number_of_chromosomes,population);
//printf("\n\n");
crossover_and_mutation(mutation_rate,crossover_rate,number_of_chromosomes,population);
//printf("\n\n");
/*for(i=0;i<number_of_chromosomes;i++){
  //      printf("\n");
    for(j=genes-1;j>=0;j--){
    //    printf("%d",population[i][j]);
    }
}*/
gen++;
}while(gen<number_of_generation);
avrage(number_of_chromosomes);
printf("\n\n");
best_roots(mutation_rate,crossover_rate,number_of_generation,number_of_chromosomes,population);
printf("\n\n");
system("pause");
return 0;
}
