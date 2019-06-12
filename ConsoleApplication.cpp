#include <iostream>
#include"Hero.h"
#include"Ability.h"
#include"Atribute.h"

void info() {

}

int main(){
	setlocale(LC_ALL, "Russian");
	std::string command;
	std::cout << "������ � ��������\n";
	std::cout << "help --- ���������, ��� � ����\n";
	std::cout << "exit --- ����� ���������� \n";
	Hero hero("N0_N@m3");
	hero.add_atribute("strength");
	hero.add_atribute("agility");
	hero.add_atribute("stamina");
	hero.add_atribute("intelligence");
	hero.add_atribute("luck");


	hero.add_cost_atribute("strength", 30, 1);
	hero.add_cost_atribute("strength", 60, 2);
	hero.del_cost_atribute("strength", 100);
	hero.add_cost_atribute("strength", 100, 3);

	hero.add_cost_atribute("agility", 30, 1);
	hero.add_cost_atribute("agility", 60, 2);
	hero.del_cost_atribute("agility", 100);
	hero.add_cost_atribute("agility", 100, 3);

	hero.add_cost_atribute("stamina", 30, 1);
	hero.add_cost_atribute("stamina", 60, 2);
	hero.del_cost_atribute("stamina", 100);
	hero.add_cost_atribute("stamina", 100, 3);

	hero.add_cost_atribute("intelligence", 30, 1);
	hero.add_cost_atribute("intelligence", 60, 2);
	hero.del_cost_atribute("intelligence", 100);
	hero.add_cost_atribute("intelligence", 100, 3);

	hero.add_cost_atribute("luck", 30, 1);
	hero.add_cost_atribute("luck", 60, 2);
	hero.del_cost_atribute("luck", 100);
	hero.add_cost_atribute("luck", 100, 3);


	hero.add_ability("invise");
	hero.add_cost_ability("invise", "intelligence", 30);

	hero.add_ability("stun");
	hero.add_cost_ability("stun", "strength", 40);
	
	hero.add_ability("block");
	hero.add_cost_ability("block", "agility", 20);
	
	hero.add_ability("kick flip");
	hero.add_cost_ability("kick flip", "agility", 50);
	hero.add_cost_ability("kick flip", "strength", 50);
	hero.add_cost_ability("kick flip", "intelligence", 1);


	while (1) {
		std::cin >> command;
		if (command == "help") {
			std::cout << "��� �������������� ���������: \n\n\n";
			std::cout << "�������� ���: name ��� 1 \n\n";
			std::cout << "�� ������ ������� ���� 10 ����� ������������� � 1 ���� �����������.\n���� ������ ������� ������� �� N ������� � �������� ���� ��������: lvl ��� 2\n����� ������� ������� �� 1: lvlup\n\n";
			std::cout << "�������� ��������������: atrib ��� 3\n\n";
			std::cout << "������ ����������� sell ��� 5\n\n";
			std::cout << "������� �����������: abil ��� 4\n\n";
			std::cout << "�������� ��������� � ������ �������� �������: reset ��� 6\n\n";
			std::cout << "������ ���������� � ����� ���������: info ��� 7\n\n\n\n\n";
			
			std::cout << "��� �������������� ���������: \n\n\n";
			std::cout << "�������� ��������������: addatrib ��� 8\n\n";
			std::cout << "�������� �����������: addabil ��� 9\n\n";
			std::cout << "������� ��������������: delatrib ��� 10\n\n";
			std::cout << "������� �����������: delabil ��� 11\n\n";
			std::cout << "�������� � �������������� ����� �������� �����: rateatrib ��� 12\n\n";
			std::cout << "�������  � �������������� ����� �������� �����: rateatribdel ��� 13\n\n";
			std::cout << "�������� ����������� �������������� ��� �����������: costabil ��� 14\n\n";
			std::cout << "������� ����������� �������������� ��� �����������: costabildel ��� 15\n\n";
			std::cout << "������ ������� ����� � �������� ������������ ����� ����� �������� �� ���: setlvl ��� 16\n\n";
			std::cout << "������ ������ ����� ����� ��������������: setatrib ��� 17\n\n";
			std::cout << "���������� �� ����� �����������: setactive ��� 18\n\n";

		}

		if (command == "name" || command == "1") {
			std::cout << "������� ����� ���: \n";
			std::string name;
			std::cin >> name;
			hero.change_name(name);
		}

		if (command == "lvl" || command == "2") {
			int a;
			std::cout << "������� ����� �� ������� ������ �������� �������: ";
			std::cin >> a;
			hero.level_up(a);
		}
		if (command == "lvlup") {
			hero.level_up(1);
		}

		if (command == "atrib" || command == "3") {
			std::cout << "������� �������� �������������� � �� ������� ������ �� ��������: \n";
			std::string name;
			int a;
			std::cin >> name >> a;
			hero.change_score_atribute(name, a);
		}

		if (command == "sell" || command == "5") {
			std::cout << "������� �������� �����������, ������� ������ �������\n";
			std::string name;
			std::cin >> name;
			hero.del_active_ability(name);
		}

		if (command == "abil" || command == "4") {
			std::cout << "������� �������� �����������, ������� ������ ����������: \n";
			std::string name;
			std::cin >> name;
			hero.buy_ability(name);
		}

		if (command == "reset" || command == "6") {
			hero.reset_settings();
			std::cout << "��� ��������� ��������\n";
		}

		if (command == "info" || command == "7") {
			hero.put_info();
		}

		if (command == "addatrib" || command == "8"){
			std::cout << "������ ������ ��������� ���� ��������������?(��������: 10) �������: +";
			char answer;
			std::cin >> answer;
			std::cout << "������� �������� ��������������: \n";
			std::string name;
			std::cin >> name;
			if (answer == '+') {
				std::cout << "������� ��������� ����: \n";
				int a;
				std::cin >> a;
				hero.add_atribute(name, a);
			}
			else
				hero.add_atribute(name);
		}

		if (command == "addabil" || command == "9") {
			std::cout << "������ ������ ��������� ��������� �����������?(��������: 1) �������: +";
			char answer;
			std::cin >> answer;
			std::cout << "������� �������� �����������: \n";
			std::string name;
			std::cin >> name;
			if (answer == '+') {
				std::cout << "������� ��������� ���������: \n";
				int a;
				std::cin >> a;
				hero.add_ability(name, a);
			}
			else
				hero.add_ability(name);
		}

		if (command == "delatrib" || command == "10") {
			std::cout << "������� �������� ��������������: \n";
			std::string name;
			std::cin >> name;
			hero.erase_atribute(name);
		}

		if (command == "delabil" || command == "11") {
			std::cout << "������� �������� �����������: \n";
			std::string name;
			std::cin >> name;
			hero.erase_ability(name);
		}

		if (command == "rateatrib" || command == "12") {
			std::cout << "������� �������� ��������������: \n";
			std::string name;
			std::cin >> name;
			std::cout << "������� ������� �� �������� ����� �������� ���� � ��� ����: \n";
			int up, rate;
			std::cin >> up >> rate;
			hero.add_cost_atribute(name, up, rate);
		}

		if (command == "rateatribdel" || command == "13") {
			std::cout << "������� �������� ��������������: \n";
			std::string name;
			std::cin >> name;
			std::cout << "������� ������� �� ��������  �������� ����, ������� ������ ������: \n";
			int up;
			std::cin >> up;
			hero.del_cost_atribute(name, up);
		}

		if (command == "costabil" || command == "14") {
			std::cout << "������� �������� �����������: \n";
			std::string name;
			std::cin >> name;
			std::cout << "������� �������� �������������� � �� �������: \n";
			std::string name_atr;
			int a;
			std::cin >> name_atr >> a;
			hero.add_cost_ability(name, name_atr, a);
		}

		if (command == "costabildel" || command == "15") {
			std::cout << "������� �������� �����������: \n";
			std::string name;
			std::cin >> name;
			std::cout << "������� �������� ��������������, ������� ������ ������: \n";
			std::string name_atr;
			std::cin >> name_atr;
			hero.del_cost_ability(name, name_atr);
		}

		if (command == "setlvl" || command == "16") {
			std::cout << "������� �������, ������� ������ ����������: \n";
			int lvl;
			std::cin >> lvl;
			hero.level_set(lvl);
		}

		if (command == "setatrib" || command == "17") {
			std::cout << "������� �������� ��������������: \n";
			std::string name;
			std::cin >> name;
			std::cout << "������� ���-�� �����, ������� ������ ����������: \n";
			int score;
			std::cin >> score;
			hero.set_score_atribute(name,score);
		}

		if (command == "setactive" || command == "18") {
			std::cout << "������� �������� �����������: \n";
			std::string name;
			std::cin >> name;
			hero.set_active_ability(name);
		}

		if (command == "exit") {
			return 0;
		}
	}	
	return 0;
}
