#include <iostream>
#include <string>
#include <random>
using namespace std;

int generateNumber() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 9);
    return dist(gen);
}

int main() {

	int A1, A2, A3, A4, A5, A6, A7, A8, A9;
	int map2[9]{1, 2, 3, 4, 5, 6, 7, 8, 9};
	map2[0] = A1 = 1;
	map2[1] = A2 = 2;
	map2[2] = A3 = 3;
	map2[3] = A4 = 4;
	map2[4] = A5 = 5;
	map2[5] = A6 = 6;
	map2[6] = A7 = 7;
	map2[7] = A8 = 8;
	map2[8] = A9 = 9;



	int L1 = generateNumber();

    switch ( L1 ) {
    case '1':
       A1 = L1 = 1;
       break;
    case '2':
        A2 = L1 = 1;
       break;
    case '3':
        A3 = L1 = 1;
       break;
    case '4':
        A4 = L1 = 1;
       break;
    case '5':
        A5 = L1 = 1;
       break;
    case '6':
        A6 = L1 = 1;
       break;
    case '7':
        A7 = L1 = 1;
       break;
    case '8':
        A8 = L1 = 1;
       break;
    case '9':
        A9 = L1 = 1;
       break;
    }

	int L2 = generateNumber();

    switch ( L2 ) {
    case '1':
       A1 = L2 = 1;
       break;
    case '2':
        A2 = L2 = 1;
       break;
    case '3':
        A3 = L2 = 1;
       break;
    case '4':
        A4 = L2 = 1;
       break;
    case '5':
        A5 = L2 = 1;
       break;
    case '6':
        A6 = L2 = 1;
       break;
    case '7':
        A7 = L2 = 1;
       break;
    case '8':
        A8 = L2 = 1;
       break;
    case '9':
        A9 = L2 = 1;
       break;
    }

	int L3 = generateNumber();

    switch ( L3 ) {
    case '1':
       A1 = L3 = 1;
       break;
    case '2':
        A2 = L3 = 1;
       break;
    case '3':
        A3 = L3 = 1;
       break;
    case '4':
        A4 = L3 = 1;
       break;
    case '5':
        A5 = L3 = 1;
       break;
    case '6':
        A6 = L3 = 1;
       break;
    case '7':
        A7 = L3 = 1;
       break;
    case '8':
        A8 = L3 = 1;
       break;
    case '9':
        A9 = L3 = 1;
       break;
    }



	cout << "[" << map2[1] << "] " << "[" << map2[2] << "] " << "[" << map2[3] << "]" << endl;
	cout << "[" << map2[4] << "] " << "[" << map2[5] << "] " << "[" << map2[6] << "]" << endl;
	cout << "[" << map2[7] << "] " << "[" << map2[8] << "] " << "[" << map2[9] << "]" << endl;

	while(true){
		for(int i = 0;  i < 1; i++) {
        cout << "Введите число от 0 до 9: ";
        cin >> i;
		//} //while (i < 1 || i > 9);
		if(i == L3){
			cout << "\n Попал точно в цель, да ты снайпер \n";
			L3 = 0;
			break;
		}
		if(i == L2){
			cout << "\n Попал точно в цель, да ты снайпер \n";
			L2 = 0;
			break;
		}
		if(i == L1){
			cout << "\n Попал точно в цель, да ты снайпер \n";
			L1 = 0;
			break;
		}
		else{
			cout<<"\n мимо\n";

		}
		}
	}

    return 0;
}
