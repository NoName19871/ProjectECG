#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "InterfaceFuncs.h"
#include "AnalysisFuncs.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

//������ �� ���� TextBox � TableLayoutPanel � �� ���� � ������ ����
std::vector<double> ParseDatasIntoDoubleVector(TableLayoutPanel^ pan)
{

	std::vector<double> res(18, 0.0);
	int j = 0;

	String^ st1 = "textBox";
	auto st = gcnew String("textBox");

	for (int i = 0; i < pan->Controls->Count; i++)
	{
		auto ST = pan->Controls[i]->Name;
		auto flag = ST->Contains(st1);

		if (flag)
			if (pan->Controls[i]->Text != "")
			{
				String^ tmp = pan->Controls[i]->Text;
				if (pan->Controls[i]->Text->Contains("."))
					tmp = pan->Controls[i]->Text->Replace(".", ",");
				res[j] = System::Convert::ToDouble(tmp);
				j++;
			}
			else ++j;
	}
	return res;
}

//���������� �������� ����� � ����
void SaveWavesToFile(vector<double> v)
{
	ofstream f;
	f.open("WavesData.txt");

	for (int i = 0; i < 6; i ++)
		f << v[i] << " ";
	f << endl;

	for (int i = 6; i < 12; i ++)
		f << v[i] << " ";
	f << endl;

	for (int i = 12; i < 18; i ++)
		f << v[i] << " ";

	f.close();
}

//������� ������ �� �������� ����� filename
vector<double> InitWavesFromFile(string filename)
{
	ifstream fin(filename);

	string lengths = "";
	string heights = "";
	string poses = "";

	getline(fin, lengths);
	getline(fin, heights);
	getline(fin, poses);
	
	std::vector<double> res;
	
	istringstream is1(lengths);
	double tmp = 0.0;
	while (is1 >> tmp)
		res.push_back(tmp);

	istringstream is2(heights);
	while (is2 >> tmp)
		res.push_back(tmp);

	istringstream is3(poses);
	while (is3 >> tmp)
		res.push_back(tmp);

	return res;
}