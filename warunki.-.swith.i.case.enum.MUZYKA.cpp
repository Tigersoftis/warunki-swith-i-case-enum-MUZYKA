//warunki - swith  i case (enum)

#include <iostream>
using namespace std;
enum {EXIT, Metal, Hip_Hop, Rock, Pop, Techno, Klasyczna}; //enum - typ wyliczeniowy
/*jedynymi dozwolonymi typami danych w instrukcji switch s¹ liczby ca³kowite. 
Oznacza to, ¿e mo¿emy u¿yæ tylko i wy³¹cznie zmiennych, 
które s¹ typów takich jak: char, short, int, long, long long. 
Do tego dochodzi równie¿ typ wyliczeniowy enum */
int main() 
{
	int decyzja;
	bool exit = false;
	
	
		cout << "\n Witaj!!! " << endl << " Odpowiedz na ponizsze pytanie:\n\n";
		system ("pause");
		cout << "\n\nJakiego gatunku muzyki sluchasz najczesciej?\n\n";
		system ("pause");
		cout << "\n\nPomysl nad odpowiedzia i kliknij odpowiednia liczbe a nastepnie ENTER aby wybrac:\n\n ";
		cout << "1: Metal, 2: Hip_Hop, 3: Rock, 4: Pop, 5: Techno, 6: Klasyczna, 0: EXIT" << endl <<endl;
		
	while (!exit) //!-negacja - petla bedzie sie powtarzac puki NIE exit (nie wybrany)
	{
		cin >> decyzja;
		switch ( decyzja )
		{
			case EXIT:
				exit = true; break;
				
			case Metal:
				cout << "Heavy metal (potocznie metal) to podgatunek muzyki rockowej powstaly na przelomie ";
				cout << "lat 60. i 70. XX wieku w Wielkiej Brytanii i Stanach Zjednoczonych. ";
				cout << "Grupy, ktore odpowiedzialne sa za powstanie gatunku wprowadzily ciezkie, ostre brzmienia, ";
				cout << "z dlugimi, mocno przesterowanymi solowkami gitarowymi i ostra perkusja.\n" << endl; break;
				
			case Hip_Hop:
				cout << "Hip-hop to miejska kultura, powstala w afroamerykanskich spolecznosciach w Nowym Jorku ";
				cout << "w latach siedemdziesiatych XX wieku. Muzyka hip-hop powstala, gdy DJ-e zaczeli ";
				cout << "tworzyc bity za pomoca zapetlania zapisow partii solowych, granych oryginalnie na perkusji ";
				cout << "na dwoch gramofonach, robiac tak zwany sampling. Do tego doszedl rap, ";
				cout << "czyli rodzaj ekspresji wokalnej, polegajacy na rytmicznym wypowiadaniu slow i ich rymowaniu, ";
				cout << "oraz beatbox, czyli technika wokalna, polegajaca g³ownie na nasladowaniu dzwiekow ";
				cout << "i roznych efektow technicznych, stosowanych przez DJ-ow.\n" << endl; break;
		
			case Rock:
				cout << "Rock (ang. skala, kolysanie) to gatunek muzyki rozrywkowej powstaly w polowie XX wieku ";
				cout << "w Stanach Zjednoczonych, ktory wytworzyl wokol siebie krag subkultury mlodziezowej ";
				cout << "i ogolna nazwa calego szeregu stylow muzycznych, wywodzacych sie z rock and rolla ";
				cout << "oraz rhythm and bluesa i bluesa. Sama nazwa ROCK jest w³asciwie skrotem od ";
				cout << "ROCK AND ROLL, choc mozna uznawac owe dwa pojecia za odmienne od siebie gatunki muzyczne. ";
				cout << "Wszystkie style rockowe charakteryzuja sie brzmieniem opartym na roznego rodzaju gitarach\n" << endl; break;
					
			case Pop:
				cout << "Muzyka pop to ogolnie muzyka popularna, termin ten jest jednak wieloznaczny, w najszerszym ";
				cout << "sensie oznacza kazdy rodzaj muzyki rozrywkowej, niezaleznie od jej charakteru. \n" << endl; break;
			
			case Techno:
				cout << "Techno to gatunek muzyki rozrywkowej bedacy nurtem muzyki elektronicznej i elektronicznej muzyki ";
				cout << "tanecznej (klubowej) powstalym w Detroit w latach 80. XX wieku\n" << endl; break;
				
			case Klasyczna:
				cout << "Muzyka powazna to w potocznym znaczeniu muzyka klasyczna. Do muzyki powaznej zalicza sie gatunki ";
				cout << "przeznaczone do sluchania (np. symfonia, fuga, koncert), nie zalicza sie jednak muzyki do tanca ";
				cout << "(np. polonez, walc) i muzyki filmowej ";
				cout << "\n" << endl; break;
		
			default:
				cout << "Sprobuj raz jeszcze wybrac prawidlowa odpowiedz!\n" << endl; break;
				
/* case oznacza: jeœli wartoœæ zmiennej (wystêpuj¹cej po s³owie kluczowym switch) 
bêdzie równa wartoœci umieszczonej po s³owie kluczowym case, 
to wykonaj kod (znajduj¹cy siê po znaku dwukropka).*/				
				
		}
	}
	
system ("pause");
	return 0;
}
