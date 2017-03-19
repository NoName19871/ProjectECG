#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <vector>

using namespace System::Windows::Forms;

//������ �� ���� TextBox � TableLayoutPanel � �� ���� � ������ ����
std::vector<double> ParseDatasIntoDoubleVector(TableLayoutPanel^ pan);

//���������� �������� ����� � ����
void SaveWavesToFile(std::vector<double> v);

std::vector<double> InitWavesFromFile(std::string filename);

#endif  FUNC_H