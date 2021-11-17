// cgrahl3s, kzande3s
// Der char "wort" wird in einer Schleife mit anschliessendem Zeilenumbruch ausgegeben
#include <stdio.h>

int main() {
    char wort[] = {'I', 'N', 'F', 'O', 'R', 'M', 'A', 'T', 'I', 'K'};
    for (int i = 0; i <= sizeof(wort); i++){
        //printf("%c\n", wort[i]);             //vertikale Ausgabe
        printf("%c", wort[i]);
        if(i==sizeof(wort)){
            printf("\n");              //horizontale Ausgabe
        }
    }
    return 0;
}
