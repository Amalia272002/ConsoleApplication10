//#include <iostream>
//
//using namespace std;
//
//int main() {
//int primaValoare, ultimaValoare;
//cout << "Introduceti valorile corespunzatoare  pentru conversia implicita "<< endl;
//cout << "Introduceti prima valoare "<<endl;
//cin >> primaValoare;
//cout<< "Introduceti ultima valoarea corespunzatoare "<<endl;
//cin >> ultimaValoare;
//if (primaValoare<=0 && ultimaValoare <= 0 || ultimaValoare <=0  && ultimaValoare <= 0 ||  primaValoare <= 0 && primaValoare != ultimaValoare || ultimaValoare <= 0 && ultimaValoare !=primaValoare&& primaValoare <=0 &&primaValoare != ultimaValoare)
// primaValoare=ultimaValoare;
//cout <<ultimaValoare;
//
//return 0;
//
//}

// Laborator 1
// 
// calculare mediei unui elev 
//#include<iostream>
//using namespace std;
//int main() {
	//	int primaNota, ultimaNota;
	//	cout << "Introduce-ti prima nota ="<<endl;
	//	cin >> primaNota;
	//	cout << "Introduce-ti urmatoarea nota a elevului  ="<<endl;
	//	cin >> ultimaNota;
	//	int medieElev;
	//	medieElev = primaNota + ultimaNota;
	//	cout << medieElev;
	//}

	/*double numarCurent = 24.77;
	int numarConversieImplicit = 24;
	numarCurent = numarConversieImplicit;
	cout << numarCurent << " " << endl << numarConversieImplicit;*/
//}
// 
// 
// 
// 
// cast inplicit == double numarCurent = 24.66 ==>int numarConversieImplicit 



//#include<iostream>
//using namespace std;
//int main() {
//	double numarCurent;
//	int numarConversieImplicit;
//	cout << "Introduce-ti prima valoare " <<endl;
//	cin >> numarCurent;
//	cout << "Introduce-ti ultima valoare " <<endl;
//	cin >> numarConversieImplicit;
//
//	int rezultatFinalConversie=  numarCurent = numarConversieImplicit;
//	cout << rezultatFinalConversie  ;
//	return 0;


//}

//
//#include<iostream>
//using namespace std;
//int main() {
//	double numarCurent1, numarCurent2;
//	int numarConversieImplicit1, numarConversieImplicit2;
//	cout << "Introduce-ti valorile care precedent o sa fie convertite" << endl;
//	cout << "Introduce-ti prima  valoare p =  " << endl;
//	cin >> numarCurent1;
//	cout << "Introudce-ti prima valoare p' = " << endl;
//	cin >> numarCurent2;
//	cout << "Introduce-ti ultima valore " << endl;
//	cin >> numarConversieImplicit1;
//	cout << "Introduce-ti ultima valoare  " << endl;
//	cin >> numarConversieImplicit2;
//	int rezultatFinal1 = numarCurent1 = numarConversieImplicit1;
//	int rezultatFinal2 = numarCurent2 = numarConversieImplicit2;
//	if (numarCurent1 != 0 && numarCurent2 != 0 ) 
//	{
//		if (numarConversieImplicit1%10!=0 && numarConversieImplicit2 % 10 != 0 )
//
//
//			cout << " Rezultatul primei conversii" << " " << rezultatFinal1 << endl;
//			cout << "Rezultatul conversiei a doua" << " " << rezultatFinal2 << endl;
//
//		}
//	}
//

//
// conversii explicite ;
// conversie din double in float
//#include<iostream>
//using namespace std;
//int main() {
//	float numarValoareConvertit = 66.99;
//	double numarAles = 66.99;
//	numarAles = (float)(numarValoareConvertit);
//	cout << numarAles;
//	
//}

// coversie de la float la double
//#include<iostream>
//using namespace std;
//int main() {
//	double numarValoareConvertit = 66.99;
//	float numarAles = 66.99;
//	numarAles = (double)numarValoareConvertit;
//	cout << numarAles;
//	return 0;
//}

// La un concurs pot participa copii cu varstele intre a si b ani , inclusiv.Gigel are n ani .Stabiliti daca poate participa la concurs.
// Programul afiseaza pe ecran mesajul DA daca numarul Gigel poate participa la concurs 
//#include<iostream>
//using namespace std;
//int main() {
//	int theFirstAge, theLastAge, ageGigel;
//	cout << "Introduce-ti varstele copiilor" << endl;
//	cout << " prima varsta =";
//	cin >> theFirstAge;
//	cout << " Introduce-ti ultima varsta ";
//	cin >> theLastAge;
//	cout << " Introduce-ti varsta pe care o are Gigel ";
//	cin >> ageGigel;
//	if (theFirstAge < ageGigel && ageGigel < theLastAge) {
//		cout << " DA " << "Diferenta dintre cea mai mica varsta si varsta lui Gigel " << " " <<  ageGigel - theFirstAge << endl;
//	}
//	else {
//		cout << " NU" << " Diferenta dintre cea mai mare varsta si varsta lui Gigel " << " " << theLastAge - ageGigel << endl;
//	}
//	return 0;
//
// }



// conversia explicita , tastarea de la tastatura 
//#include<iostream>
//using namespace std;
//int main() {
//	double numarCurent; // am declarat o variabila de tip double;
//	int numarValConv; // am declarat o variabila de tip int;
//	cout << " Introduce-ti valorile : " << endl; // afiseaza textul 
//	cout << " numarul curent " << endl; // afiseaza textul 
//	cin >> numarCurent; // citim de la tastatura numarulCurent
//	cout << " Introduce ti valoarea ce va fii convertita " << endl; 
//	cin >> numarValConv; // citim de la tastatura numarValConv
//	numarCurent = (int)(numarValConv); // conversia din double in int 
//	cout << numarCurent;  // afisarea numarCurent dupa conversie
//}
//

//#include<iostream>
//using namespace std;
//int main() {
//	int primulOperand = 10;
//	int alDoileaOperand = 2;
//	if (primulOperand != 0) {
//		cout << "Shiftarea la dreapta" << " " << (primulOperand >> alDoileaOperand) << endl;
//		/* rezultatul reprezinta deplasarea spre dreapta a bitilor primului operand cu doua poziti
//	*/
//	}
//	else {
//		cout << "nu se executa programul";
//	}
//	return 0;
//}
//


//#include<iostream>
//using namespace std;
//int main() {
//	int primaValoare;
//	int aDouaValoare;
//	int aTreiValoare;
//	cout << "a + bx +c = 0";
//	cout << "prima valoare = a";
//	cout << "Introduce-ti prima valoare";
//	cin >> primaValoare;
//	cout << "a doua valoare = b";
//	cout << "Introduce-ti a doua valoare";
//	cin >> aDouaValoare;
//	cout << " a treia valoare = c";
//	cout << "Introduce-ti a treia valoare ";
//	cin >> aTreiValoare;
//		int delta = pow(aDouaValoare, 2) - 4 * primaValoare * aTreiValoare;
//		if (delta != 0) {
//			int x1 = (-aDouaValoare + sqrt(delta)) / 2 * primaValoare;
//		int x2 = (-aDouaValoare - sqrt(delta)) / 2 * primaValoare;
//		cout << "rezultatul este " << " " << x1 << endl;
//		cout << "rezultatul este  " << " " << x2 << endl;
//	     }
//		else if  (delta == 0) {
//			int x1 ,x2 = (-aDouaValoare ) / 2 * primaValoare;
//			
//		}
//	return 0;
//}

