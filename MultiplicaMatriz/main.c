#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINA 3
#define COLA 2
#define LINB 2
#define COLB 3

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a[LINA][COLA], b[LINB][COLB], c[LINA][COLB] = {0};

    printf("Informe os dados da matriz A:\n");
    for(int i=0; i<LINA; i++){
        printf("Linha %d:\n", i+1);
        for(int x=0; x<COLA; x++){
            printf("Coluna %d:", x+1);
            scanf("%d", &a[i][x]);
        }
    }

    printf("Informe os dados da matriz B:\n");
    for(int i=0; i<LINB; i++){
        printf("Linha %d:\n", i+1);
        for(int x=0; x<COLB; x++){
            printf("Coluna %d:", x+1);
            scanf("%d", &b[i][x]);
        }
    }


    for(int i=0;i<LINA;i++){
        for(int x=0;x<COLB;x++){
            for(int w=0; w<LINB; w++){
                c[i][x] += a[i][w]*b[w][x];
            }
        }
    }

    printf("Matriz A\n");
    for(int y=0; y<LINA;y++){
        for(int z=0;z<COLA;z++){
            printf("%d ", a[y][z]);
        }
        printf("\n");
    }

    printf("Matriz B\n");
    for(int y=0; y<LINB;y++){
        for(int z=0;z<COLB;z++){
            printf("%d ", b[y][z]);
        }
        printf("\n");
    }

    printf("Matriz C\n");
    for(int y=0; y<LINA;y++){
        for(int z=0;z<COLB;z++){
            printf("%d ", c[y][z]);
        }
        printf("\n");
    }
    return 0;
}
