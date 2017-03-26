#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <vector>

#include "AnalysisFuncs.h"

using namespace System::Windows::Forms;

//������ �� ���� TextBox � TableLayoutPanel � �� ���� � ������ ����
std::vector<double> ParseDatasIntoDoubleVector(TableLayoutPanel^ p, int size);

//���������� �������� ����� � ����
void SaveWavesToFile(std::vector<double> v);

//It draws grid for ECG graphic
void DrawGrid(System::Drawing::Graphics^ g, int width, int height);

//It draws ECG graphic on PictureBox
void DrawGraphic(System::Drawing::Graphics^ g, int width, int height, const WavesData & w);

#endif  FUNC_H