#include <stdio.h>
#include <stdlib.h>

int main() {
	char texto[5];
	int dInicio;
	int dFim;
	int hInicio;
	int hFim;
	int mInicio;
	int mFim;
	int sInicio;
	int sFim;
	int d;
	int tempoInicio;
	int tempoFim;
	int tempo;

	scanf("%s %i ", texto, &dInicio);
	scanf("%s", texto);
	hInicio = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	mInicio = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	sInicio = atoi(texto);

	scanf("%s %i ", texto, &dFim);
	scanf("%s", texto);
	hFim = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	mFim = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	sFim = atoi(texto);

	tempoInicio = sInicio + mInicio * 60 + hInicio * 3600;
	tempoFim = sFim + mFim * 60 + hFim * 3600;

	d = (tempoFim - tempoInicio < 0)? dFim-dInicio-1 : dFim-dInicio;
	printf("%d dia(s)\n", d);

	tempo = (tempoFim-tempoInicio < 0)? (tempoFim-tempoInicio+86400)%86400 : tempoFim-tempoInicio;
	printf("%d hora(s)\n", tempo / 3600);

	tempo %= 3600;
	printf("%d minuto(s)\n", tempo / 60);

	tempo %= 60;
	printf("%d segundo(s)\n", tempo);
	return 0;
}