#ifndef geneticop
#define geneticop
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include"converter.h"
#define genes 50

float calculate_real(float x,float y){
return pow(aa*pow(x,2)-aa*pow(y,2)+bb*x+cc,2);
}
float calculate_img(float x,float y){
return pow(2*aa*x*y+bb*y,2);
}
void fitness_roots(int c){
int i;
total_fitness=0;
fitness_array[c];
for(i=0;i<c;i++){
    fitness_array[i]=sqrtf(calculate_real(decimal_chromosomes[i],decimal_chromosomes_img[i])+calculate_img(decimal_chromosomes[i],decimal_chromosomes_img[i]));
 // printf("Fc(%d) = %f \n",i+1,fitness_array[i]);
 total_fitness+=fitness_array[i];
}
//printf("\n total fitness = %f \n",total_fitness);
}
void selection_roots(int n,int AARRAY2d[][genes]){
    int vect[n];
    int i,j,o;
    int rrandom2;
    srand(time(NULL));
        for(i=0;i<n;i++){
        do{
            rrandom2=rand()%n;
        }while(rrandom2==i);
        switch(fitness_array[rrandom2]>=fitness_array[i]){
    case 1:
        vect[i]=i;
        break;
    case 0:
        vect[i]=rrandom2;
        break;
        }
  //  printf("selected chromosome(%d): fc(%d) = %f\n",vect[i]+1,vect[i]+1,fitness_array[vect[i]]);
}
for(i=0;i<n;i++){
    //    printf("\n");
    for(j=0;j<genes;j++){
        AARRAY2d[i][j]=AARRAY2d[vect[i]][j];
    }
for(o=(genes-1);o>=0;o--){
//    printf("%d",AARRAY2d[i][o]);
}
}
//printf("\n\n");
binary_to_decimal(n,AARRAY2d);
}
void crossover_and_mutation(float t,float m,int q,int AAARRAY2d[][genes]){
childs[q][genes];
float crossover_prop;
float mutation_prop;
int random_point;
int random_point2;
int i,j,o;
srand(time(NULL));
for(j=0;j<q;j+=2){
    crossover_prop=(rand()%1000)/1000.0;
    if(crossover_prop<m){
            random_point=rand()%(genes/2);
            random_point2=(rand()%(genes/2))+(genes/2);
            for(i=0;i<random_point;i++){
                childs[j][i]=AAARRAY2d[j][i];
                childs[j+1][i]=AAARRAY2d[j+1][i];
            }
            for(o=random_point;o<(genes/2);o++){
                childs[j][o]=AAARRAY2d[j+1][o];
                childs[j+1][o]=AAARRAY2d[j][o];
            }
            for(i=genes/2;i<random_point2;i++){
                  childs[j][i]=AAARRAY2d[j][i];
                childs[j+1][i]=AAARRAY2d[j+1][i];
            }
            for(o=random_point2;o<genes;o++){
                childs[j][o]=AAARRAY2d[j+1][o];
                childs[j+1][o]=AAARRAY2d[j][o];
            }
    }
            else{
                for(i=0;i<genes;i++){
                    childs[j][i]=AAARRAY2d[j][i];
                    childs[j+1][i]=AAARRAY2d[j+1][i];
                }
            }

    }
    for(j=0;j<q;j++){
        for(i=0;i<genes;i++){
            AAARRAY2d[j][i]=childs[j][i];
        }
    }
    srand(time(NULL));
for(j=0;j<q;j++){
    for(i=0;i<genes;i++){
    mutation_prop=rand()%1000/1000.0;
    if(mutation_prop<t){
        AAARRAY2d[j][i]=!AAARRAY2d[j][i];
    }
    else{
        AAARRAY2d[j][i]=AAARRAY2d[j][i];
    }
    }
}
}
#define geneticop
#endif // geneticop
