#include <map>
#include <iostream>
#include<string>
#include "Atribute.h"
class Ability{	
	
	public:
		Ability(int cost);
		~Ability();


		void add_cost(std::string name, int costs);// ������������� ���������� ��� ��� ���� ���-��
		void del_cost(std::string name);// �������    ^^^^^  �� ����������� 
		int get_cost();// ������� ����� ������
		void buy(std::map <std::string, Atribute> all_atrib);// ����������� �����������
		void set_active();// ������������ ����������� �� ������ �� ����
		void del_active();// �������������� �����������
		void put_info_ab();// ���� �� ������
		
	
	private:
		bool active;
		int cost_score;
		std::map <std::string, int> cost;

};

