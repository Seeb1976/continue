
#include <stdio.h>

int main() {
int liczba;
int licznik_petli=0;

printf("program liczy największą liczbę mniejszą od liczby podanej przez użytkownika, która \n");
printf("jest niepodzielna przez 2, 3, 5, 7.\n\n");
printf("podaj liczbę: ");
scanf( "%d", &liczba);

if(!(liczba%2)) --liczba;
for (; liczba >0; liczba -=2){
    licznik_petli++;

    if (!(liczba%3)) continue;
    if (!(liczba%5)) continue;
    if (!(liczba%7)) continue;

    printf("%d ", liczba);

}

printf("\n");
printf("liczba pętli: %d\n", licznik_petli);
return 0;

}