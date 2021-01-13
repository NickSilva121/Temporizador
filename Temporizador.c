#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main ()
{
    int hora;
    int min;
    int seg;
    int ts = 1;
    
    printf("Digite a hora:");
    scanf("%i", &hora);
    printf("Digite os minutos:");
    scanf("%i", &min);
    printf("Digite os segundos:");
    scanf("%i", &seg);
    
    if (seg > 60) {
        min = min + (seg / 60);
    }
    else if(min > 60){
        hora = hora + (min / 60);
    }

    for (hora, min, seg; seg--;){
        printf("%i:%i:%i\n", hora, min, seg);
        sleep(ts);
        system("clear");
        
        if ((min > 0)&&(seg == 0)){
            min--;
            seg = 59;
            printf("%i:%i:%i\n", hora, min, seg);
            sleep(ts);
            system("clear");
        }
        else if((min == 0)&&(seg == 0)&&(hora > 0)){
            hora--;
            seg = 59;
            min = 59;
            printf("%i:%i:%i\n", hora, min, seg);
            sleep(ts);
            system("clear");
        }
    }
    
    printf("Tempo esgotado!\n\n");
 
    return 0;
}