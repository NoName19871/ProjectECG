#ifndef FUNC_H
#define FUNC_H
using namespace System::Windows::Forms;
#include<iostream>
#include<vector>
//���� �������, ��������� ��� �������� ��� ��������� ����������� � ��������� ����
//� ������ ������� �� ��������� ���� ���������� ���� �������� ����� � ������������� �������� � ���������� �� ������������� �����
int myFunc(Panel^ gb);

//������ �� ���� TextBox � TableLayoutPanel � �� ���� � ������ ����
std::vector<double>& ParseDatasIntoDoubleVector(TableLayoutPanel^ pan);

#endif  FUNC_H