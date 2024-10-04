//Зданаие 1
#include <iostream>
using namespace std;

int main() {
	double distance, time, speed;
	cout << "Vedite rastoyanie do aeroporta (km): ";
	cin >> distance;

	cout << "Vedite vremya za kotoroe hotite doexat (hours): ";
	cin >> time;

	speed = distance / time;

	cout << "Vam nuzhna skorost: " << speed << " km/ch" << endl;

	std::cout << "VTOROE ZADANIE \n" ;

	int start_hour, start_minute, start_second, end_hour, end_minute, end_second;
	double trip_duration, cost;
	cout << "Vedite vremya nachalo (chasi minuti secundi): ";
	cin >> start_hour >> start_minute >> start_second;

	cout << "Vedite vremya zaverheniya arenda (chasi minuti secundi): ";
	cin >> end_hour >> end_minute >> end_second;

	trip_duration = (end_hour - start_hour) * 60 + (end_minute - start_minute) + (end_second - start_second) / 60;
	cost = trip_duration * 2;

	cout << "stoimost poezdki: " << cost << " griven" << endl;




	return 0;
}

	
