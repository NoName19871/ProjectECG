#include <iostream>

#include "AnalysisFuncs.h"

using namespace std;

//������� �������� ������� ������� � ��������
bool WavesData::Check_arrhythmia()
{
	return heights[0] == 0.0;
}