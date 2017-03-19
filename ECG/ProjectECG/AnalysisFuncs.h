#ifndef ANALYSIS_FUNCS_H
#define ANALYSIS_FUNCS_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

//����� ��� �������� ����� ���������� �� ��� � � ������ ����������� ��������� � ���������
class WavesData {
	
	//������ ��� �������� ����� ������
	std::vector<double> heights;

	//������ ��� �������� ���� ������
	std::vector<double> lengths;

	//������ ��� �������� ������� ������
	std::vector<double> poses;

	//������ ��� �������� ����� ����������
	std::vector<double> intervals;

	//���� ��� �������� �����
	double speed;


public:

	//����������� ����� ��� ������ WavesData
	WavesData(WavesData & other) :heights(other.heights), lengths(other.lengths), poses(other.poses) {};

	//����������� ������ WavesData - �������������� ���� ������ ����� ���������, ����������� ������, ����� � ������� ������
	WavesData(std::vector<double> h, std::vector<double> l, std::vector<double> p) :heights(h), lengths(l), poses(p) {}

	//����������� ������ WavesData - �������������� ���� ������ ���������� �� ����� � ������ filename
	WavesData(std::string filename)
	{
		std::ifstream fin(filename);

		std::string l = "";
		std::string h = "";
		std::string p = "";

		getline(fin, h);
		getline(fin, l);
		getline(fin, p);

		std::vector<double> res;

		std::istringstream is1(h);
		double tmp = 0.0;
		while (is1 >> tmp)
			heights.push_back(tmp);

		std::istringstream is2(l);
		while (is2 >> tmp)
			lengths.push_back(tmp);

		std::istringstream is3(p);
		while (is3 >> tmp)
			poses.push_back(tmp);

	}

	//������� �������� ������� ������� � ��������
	bool Check_arrhythmia();
};





#endif
