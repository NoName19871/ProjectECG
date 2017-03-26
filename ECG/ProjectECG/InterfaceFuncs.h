#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <vector>
#include <fstream>

using namespace System::Windows::Forms;
using namespace std;


//������ �� ���� TextBox � TableLayoutPanel � �� ���� � ������ ����
std::vector<double> ParseDatasIntoDoubleVector(TableLayoutPanel^ pan);

//���������� �������� ����� � ����
void SaveWavesToFile(std::vector<double> v);

//��������� ���� � ������� ������
void close_file();

//������� ���� � ������� ������ ����� ���������� ��������������
void clear_file();

//���������� ������ s � ���� � ������� ������
void write_s(char *s);

#endif  FUNC_H