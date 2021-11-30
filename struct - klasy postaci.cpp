#include <string>
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std;

struct hero {
	string name;
	int id;
	int hp;
	int allhp;
	int dmg;
	int armor;
	int heal;
	int mana;
	int q;
	int w;
	int e;
	int r;

	
};
void skille1(int& mana, int& hp, int& heal, int& enemy_hp) {
	int s_choice;
	cout << "Jaki skill chcesz uzyc?(koszt: 1: 20, 2: 60, 3: 30  )" << endl;
	cin >> s_choice;

	switch (s_choice) {

	case 1:
		if (mana >= 20) {
			enemy_hp -= 28;
			mana -= 20;
			cout << "zadales 28 hp przeciwnikowi" << endl;
			break;
			
		}
		else {
			cout << "nie masz many" << endl;
		}


	case 2:
		if (mana >= 60) {
			enemy_hp -= 77;
			mana -= 60;
			cout << "zadales 77 hp przeciwnikowi" << endl;
			break;

		}
		else {
			cout << "nie masz many" << endl;
		}


	case 3:
		if (mana >= 35) {
			heal += 8;
			mana -= 35;
			cout << "powiekszyles sobie heal co runde o 8 hp" << endl;
			break;
		}
		else {
			cout << "nie masz many" << endl;
		}



	}
};
void skille2(int& mana, int& hp, int& heal, int& enemy_hp) {
	int s_choice = rand() % 3 + 1;
	

	switch (s_choice) {

	case 1:
		if (mana >= 30) {
			enemy_hp -= 41;
			mana -= 30;
			cout << "twoj wrog zadal ci 41 hp" << endl;
			break;
		}
		else {
			cout << "nie masz many" << endl;
		}


	case 2:
		if (mana >= 15) {
			enemy_hp -= 19;
			mana -= 15;
			cout << "twoj wrog zadal ci 19 hp" << endl;
			break;
		}
		else {
			cout << "nie masz many" << endl;
		}


	case 3:
		if (mana >= 30) {
			hp += 30;
			mana -= 30;
			cout << "twoj wrog uleczyl siebie o 30 hp" << endl;
			break;
		}
		else {
			cout << "nie masz many" << endl;
		}



	}



}

int main() {
	//Bohaterowie
	hero knight;
	knight.name = "Knight";
	knight.id = 1;
	knight.hp = 400;
	knight.allhp = 400;
	knight.dmg = 60;
	knight.armor = 15;
	knight.heal = 21;
	hero bull;
	bull.name = "Bull";
	bull.id = 2;
	bull.hp = 700;
	bull.allhp = 700;
	bull.dmg = 40;
	bull.armor = 8;
	bull.heal = 17;
	hero ninja;
	ninja.name = "Ninja";
	ninja.id = 3;
	ninja.hp = 500;
	ninja.allhp = 500;
	ninja.dmg = 70;
	ninja.armor = 0;
	ninja.heal = 24;
	hero spaceman;
	spaceman.id = 4;
	spaceman.name = "Space Man";
	spaceman.hp = 575;
	spaceman.allhp = 575;
	spaceman.dmg = 57;
	spaceman.armor = 20;
	spaceman.heal = 26;


	//Program
	srand(time(NULL));
	int x = 0;
	int price;
	int hero_choice;
	int or_choice;
	int enemy_or_choice;
	int enemy_choice = rand() % 4 + 1;
	string myheroname;
	int myheromana;
	int myherohp;
	int myherodmg;
	int myheroheal;
	string enheroname;
	int enheromana;
	int enherohp;
	int enherodmg;
	int enheroheal;
	int myheroallhp;
	int enheroallhp;
	
	//Wybór herosa
	cout << "walka! wybierz bohaterao(od 1 do 4)" << endl;
	cin >> hero_choice;
	if (hero_choice == 1) {
		cout << "Wybrales postac: knight" << endl;
		myheroname = knight.name;
		myherohp = knight.hp;
		myheroallhp = knight.hp;
		myherodmg = knight.dmg;
		myheromana = 100;
		myheroheal = knight.heal;

	}
	else if (hero_choice == 2) {
		cout << "Wybrales postac: bull" << endl;
		myheroname = bull.name;
		myherohp = bull.hp;
		myheroallhp = bull.hp;
		myherodmg = bull.dmg;
		myheromana = 100;
		myheroheal = bull.heal;
	}
	else if (hero_choice == 3) {
		cout << "Wybrales postac: ninja" << endl;
		myheroname = ninja.name;
		myherohp = ninja.hp;
		myheroallhp = ninja.hp;
		myherodmg = ninja.dmg;
		myheromana = 100;
		myheroheal = ninja.heal;
	}
	else if (hero_choice == 4) {
		cout << "Wybrales postac: spaceman" << endl;
		myheroname = spaceman.name;
		myherohp = spaceman.hp;
		myheroallhp = spaceman.hp;
		myherodmg = spaceman.dmg;
		myheromana = 100;
		myheroheal = spaceman.heal;
	}
	
	if (enemy_choice == 1) {
		cout << "your enemy took knight" << endl;
		enheroname = knight.name;
		enherohp = knight.hp;
		enheroallhp = knight.hp;
		enherodmg = knight.dmg;
		enheromana = 100;
		enheroheal = knight.heal;
	}
	else if (enemy_choice == 2) {
		cout << "your enemy took bull" << endl;
		enheroname = bull.name;
		enherohp = bull.hp;
		enheroallhp = bull.hp;
		enherodmg = bull.dmg;
		enheromana = 100;
		enheroheal = bull.heal;
	}
	else if (enemy_choice == 3) {
		cout << "your enemy took ninja" << endl;
		enheroname = ninja.name;
		enherohp = ninja.hp;
		enheroallhp = ninja.hp;
		enherodmg = ninja.dmg;
		enheromana = 100;
		enheroheal = ninja.heal;
	}
	else if (enemy_choice == 4) {
		cout << "your enemy took spaceman" << endl;
		enheroname = spaceman.name;
		enherohp = spaceman.hp;
		enheroallhp = spaceman.hp;
		enherodmg = spaceman.dmg;
		enheromana = 100;
		enheroheal = spaceman.heal;
	}
	
	//
	//START PROGRAMU
	//
	
	cout << "WALKA! Statystyki bohaterów:" << endl << "twoja postac: " << myheroname << endl << "hp: " << myherohp << endl << "dmg: " << myherodmg << endl << "mana: " << myheromana << endl << "heal: "<< myheroheal << endl;
	cout << endl << "postac wroga: " << enheroname << endl << "hp: " << enherohp << endl << "dmg: " << enherodmg << endl << "mana: " << enheromana << endl << "heal: " << enheroheal << endl << endl;
	Sleep(3000);
	while (x == 0) {
		
		cout << "Mana:" << endl << "Gracz: " << myheromana << endl << "Przeciwnik: " << enheromana << endl;
		//Tura gracza
		Sleep(2000);
		cout << "Twoja runda!" << endl;
		if (myheroallhp-myheroheal > myherohp) {
			myherohp += myheroheal;
			cout << "You healed yourself for " << myheroheal << " and now you have " << myherohp << " hp" << endl;
		}
		else {
			cout << "You can't heal yourself(too much hp)" << endl;
		}
		Sleep(1000);
		//atak
		cout << "1. Normalny atak czy 2. ability?" << endl;
		cin >> or_choice;
		if (or_choice == 1) {
			cout << "you chose attack" << endl;
			enherohp -= myherodmg;
			Sleep(1000);
			cout << myheroname << " zadał " <<myherodmg << " dmg graczowi " << enheroname << endl << enheroname << " ma " << enherohp << " hp" << endl;

		}
		else if (or_choice == 2) {
			cout << "Wybrales ability" << endl;
			Sleep(1000);
			skille1(myheromana, myherohp, myheroheal, enherohp);
			Sleep(1000);
			cout << "masz " << myherohp << " hp" << endl;
			cout <<  "twoj wrog ma " << enherohp << " hp" << endl;
		}
		if (enherohp < 1) {
			cout << "YOU WON!!!!" << endl;
			break;
		}
		else if (myherohp < 1) {
			cout << "your enemy won :c " << endl;
			break;
		}

		//Tura wroga
		cout << "runda przeciwnika!" << endl;
		Sleep(1000);
		
		if (enheroallhp-enheroheal > enherohp) {
			enherohp += enheroheal;
			cout << "twoj wrog uleczyl sie o " << enheroheal << " i teraz ma " << enherohp << " hp" << endl;
		}
		else {
			
			cout << "twoj wrog nie moze sie uleczyc(za duzo hp)" << endl;
		}
		
		
		Sleep(1500);
		enemy_or_choice = rand() % 2 + 1;
		//atak
		if (enemy_or_choice == 1) {
			cout << "twoj wrog wybral atak" << endl;
			Sleep(1000);
			myherohp -= enherodmg;
			Sleep(1000);
			cout << enheroname << " zadal " << enherodmg << " damage graczowi " << myheroname << endl << myheroname << " ma " << myherohp << " hp" << endl;

		}
		else if (enemy_or_choice == 2) {
			cout << "twoj worg wybral ability" << endl;
			skille2(enheromana, enherohp, enheroheal, myherohp);
			Sleep(1000);
			cout << "masz " << myherohp << " hp" << endl;
			cout << "twoj wrog ma " << enherohp << " hp" << endl;
		}

		
		//Wygrywanie gry
		if (enherohp < 1) {
			cout << "YOU WON!!!!" << endl;
			break;
		}
		else if (myherohp < 1) {
			cout << "your enemy won :c " << endl;
			break;
		}
		Sleep(1000);
		cout << "Dodawanie +10 many" << endl;
		Sleep(1500);
		if (myheromana > 90) {
			myheromana = 100;

		}
		else {
			myheromana += 10;
		}

		if (enheromana > 90) {
			enheromana = 100;

		}
		else {
			enheromana += 10;
		}

	}
}