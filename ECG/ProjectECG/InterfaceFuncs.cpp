#include <iostream>
#include <locale>
#include <fstream>
#include "InterfaceFuncs.h"
#include "AnalysisFuncs.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

ofstream f("mydata.csv");//���� � ������� ������

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
	f << ";";
	f << "P tooth";
	f << ";";
	f << "Q tooth";
	f << ";";
	f << "R tooth";
	f << ";";
	f << "S tooth";
	f << ";";
	f << "T tooth";
	f << ";";
	f << "U tooth";
	f << '\n';

	f << "Height";
	f << ";";
	for (int i = 0; i < 6; i++)
		f << v[i] << ";";
	f << '\n';

	f << "Lenght";
	f << ";";
	for (int i = 6; i < 12; i++)
		f << v[i] << ";";
	f << '\n';

	f << "Start";
	f << ";";
	for (int i = 12; i < 18; i++)
		f << v[i] << ";";
	f << '\n';
	f << '\n';
}

//��������� ���� � ������� ������
void close_file()
{
	f.close();
}

//������� ���� � ������� ������ ����� ���������� ��������������
void clear_file()
{
	f.clear();
}

//���������� ������ s � ���� � ������� ������
void write_s(char *s)
{
	f << s;
	f << '\n';
}