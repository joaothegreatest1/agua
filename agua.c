#include <stdio.h>

int main(void){

float reservatorioA;
float reservatorioB;
float valvula;
float entrada;
float saida;
float percentagem75A;
float percentagem10B;
float valvula_maxima;



printf("Quanta água tem o Reservatório A?\n");
scanf("%f",&reservatorioA);
printf("Quanta água tem no Reservatório B?\n");
scanf("%f",&reservatorioB);
printf("Quanta água está a entrar?\n");
scanf("%f",&entrada);
printf("Quanta água está a sair?\n");
scanf("%f",&saida);
printf("Qual a capacidade maxima da valvula");
scanf("%f",&valvula_maxima);

percentagem75A = reservatorioA - (reservatorioA* 0.25);
percentagem10B = reservatorioB - (reservatorioB* 0.9);



if (saida < entrada && reservatorioA >= reservatorioB)
{
    valvula =valvula_maxima;

    printf("A valvula esta aberta no seu maximo\n");
}else if (saida > entrada && reservatorioA >= reservatorioB)
{
    valvula = valvula_maxima *0.50;

    printf("A valvula esta aberta a 50 por cento\n");
}else if (saida = entrada && reservatorioA > reservatorioB)
{
    valvula = valvula_maxima;

    printf("A valvula esta aberta no seu maximo\n");
}else if (saida >= entrada && percentagem75A < reservatorioB)
{
    valvula = valvula_maxima*0.5;

    printf("A valvula está aberta a 50 por cento\n");
}else if (reservatorioA < reservatorioB && saida < entrada)
{
    valvula = saida;

    printf("A valvula esta aberta no mesmo valor da saida\n");
}else if (reservatorioA > percentagem10B && entrada >saida )
{
    valvula =valvula_maxima*0.1;

    printf("A valvula esta aberta a 10 por cento da sua capacidade maxima\n");
}









    return 0;
}