#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <vector>

using namespace System::Windows::Forms;

//���� �������, ��������� ��� �������� ��� ��������� ����������� � ��������� ����
//� ������ ������� �� ��������� ���� ���������� ���� �������� ����� � ������������� �������� � ���������� �� ������������� �����
int myFunc(Panel^ gb);

//������ �� ���� TextBox � TableLayoutPanel � �� ���� � ������ ����
std::vector<double>& ParseDatasIntoDoubleVector(TableLayoutPanel^ pan);

#endif  FUNC_H