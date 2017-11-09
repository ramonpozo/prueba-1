/*
	Este programa es un mini CoD, en el que apuntamos (coordenada), la potencia de tiro (el radio) y si hemos acertado
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	//Declaracion de las variables
	double x1 = 4, y1 = 4, r1 = 3, x2 = 0, y2 = 0, r2 = 0, hip = 0, xd = 0, yd = 0;

	//Posicion del enemigo
	/*cout << "El enemigo esta en la posicion (x, y): ";
	cin  >> x1 >> y1;
	cout << "A una distancia de: ";
	cin  >> r1;*/

	//Disparo
	cout << "¿A que posicion quieres apuntar? (x, y): ";
	cin  >> x2 >> y2;
	cout << "¿Con que potencia quieres disparar?: ";
	cin  >> r2;

	//Calculo de la distancia entre centros
	xd = x1 - x2;
	yd = y1 - y2;
	hip = sqrt(pow(xd, 2) + pow(yd, 2));

	//Evaluacion del tiro para ver si ha acertado
	if ((x1 != x2) && (y1 != y2) && (r1 != r2)) {
		if (r1 >= hip){
			if (r1 > (hip + r2)) cout << "Tocado, pero sigue vivo (circunferencia 2 dentro de la 1)." << endl;
			else if (r1 < (hip + r2)) cout << "Tocado, le has hecho daño (cir 1 contiene a cir 2, 2 puntos de corte)." << endl;
			else cout << "Tocado, le has hecho daño (cir 1 contiene a cir 2, 1 punto de corte)." << endl;
		}
		else if ((r1 + r2) < hip) cout << "Rozado, le has hecho daño (2 puntos de corte)." << endl;
		else if ((r1 + r2) == hip) cout << "Rozado, le has hecho cosquillas (1 punto de corte)." << endl;
		else cout << "No lo has tocado." << endl;
	}
	else cout << "Le has volado la cabeza (misma circunferencia)." << endl;

	//Despedimos el programa
	cout << "Adios soldado." << endl;
}
