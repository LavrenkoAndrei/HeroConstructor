#include <map>
#include <iostream>
class Atribute {

public:
	Atribute(int score = 10);
	~Atribute();

	void add_rate(int up_board, int rates);// ������������� ���������� 
	void del_rate(int up_board);// ������� ���������� ������������ 
	int get_score();//  ������� �������������� 
	int count_scores(int count);// ������� ����� ����� ��������, ���� �������� ������-��
	void add_scores(int count);// ��������� ����� ��������
	void set_score(int score);// ������������� ���� �������� 
	void put_info_atr();// ���������� �� �������� 
	


private:
	int score_;
	std::map <int, int> rate;
};
