#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroMayor;
    int numeroMenor;
    int numeroMedio;
    char a[] ="WITAMY\n\n";
    char cat[]="───────────────────────────────────────\n ───▐▀▄───────▄▀▌───▄▄▄▄▄▄▄─────────────\n ───▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄──────────\n ──▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄────────\n ──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄──────\n ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────\n ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐───▄▄\n ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█\n ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀─\n ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀───\n ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌────\n  ─▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐─────\n ─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────\n  ──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐──────\n ──▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌──────\n  ────▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀────────\n";

    //printf("Hello world!\n");
    printf(a);
    printf(cat);
    printf("Ingrese valor numero uno:\n");
    scanf("%d",&numeroUno);
    numeroMayor=numeroUno;
    numeroMenor=numeroUno;
    printf("Ingrese valor numero dos:\n");
    scanf("%d",&numeroDos);

    if(numeroDos>numeroUno){
        numeroMayor=numeroDos;
    }else{
        numeroMenor=numeroDos;
    }

    printf("Ingrese valor numero tres:\n");
    scanf("%d",&numeroTres);

    if(numeroTres>numeroMayor){
        numeroMedio=numeroMayor;
        numeroMayor=numeroTres;
    }else{
        if(numeroTres>numeroMenor){
            numeroMedio=numeroTres;
        }else{
            numeroMedio=numeroMenor;
            numeroMenor=numeroTres;
        }
    }



    printf("Estos son los valores: %d %d %d", numeroUno, numeroDos, numeroTres );
    printf(" y el mayor es %d , el menor %d y el del medio %d", numeroMayor,numeroMenor,numeroMedio);



    return 0;
}
