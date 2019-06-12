#include "Atribute.h"
#include "Ability.h"
class Hero{
	
	public:
		Hero(std::string name);
		~Hero();


		void level_up(int lvl);// lvl+=5
		void level_set(int lvl);// lvl=5
		void add_atribute(std::string name, int start_score = 10); // ��������� ��� �������
		void change_score_atribute(std::string name, int score); // ������ ���-�� ����� ��� ���-��
		void add_cost_atribute(std::string name, int up_board, int rate);// �������� ���������� 
		void del_cost_atribute(std::string name, int up_board);// ������ ����������
		void set_score_atribute(std::string name, int score = 10);// ���������� ���������� 
		void erase_atribute(std::string name);// ������� �������
		void add_ability(std::string name, int cost = 1);// �������� ������
		void add_cost_ability(std::string name, std::string name_atr, int cost);// �������� ������-��
		void del_cost_ability(std::string name, std::string name_atr);// ������� ���-��
		void set_active_ability(std::string name);// ������� ������ ��������
		void buy_ability(std::string name);// "������" ������
		void erase_ability(std::string name);// ������ ������
		void del_active_ability(std::string name);// ������� � ������ ����������
		void reset_settings();// �������� ���-���
		void change_name(std::string name);// ������ ���
		void put_info();// ����

		

	private:
		std::map <std::string, Atribute> atributes;
		std::map <std::string, Ability> abilities;
		std::string name_;
		int level_, atribute_score, ability_score;

};
