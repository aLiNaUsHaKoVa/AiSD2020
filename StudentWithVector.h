#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Exam.h"

using namespace std;

class StudentWithVector {
private:
	string name;
	vector <Exam> examsVector;

public:
	StudentWithVector() {}

	StudentWithVector(string name, vector<Exam> examsVector) { //����������� 
		this->name = name;
		this->examsVector = examsVector;
	};

	StudentWithVector(string name) {
		this->name = name;
	};


	//��������� ������ 
	string getName() {
		return name;
	}
	vector <Exam> getExams() {
		return examsVector;
	}

	//��������� ������
	void setName(string name) {
		this->name = name;
	}
	void setExams(vector<Exam> examsVector) {
		this->examsVector = examsVector;
	}

	//����� ��� ���������� ���������� �������� 
	void addExam(Exam exam) {
		examsVector.push_back(exam);
	}

	void toString1() { //����� ������ ���������� ��������
		cout << "��� �������� - " << name << endl;
		for (int i = 0; i < examsVector.size(); i++) {
			Exam curEx = examsVector[i];
			cout << " | " << curEx.getName() << "| " << curEx.getDate() << " | " << curEx.getMark() << endl;
		}
	}

	friend bool operator==(const StudentWithVector& first, const StudentWithVector& second) {
		cout << "���������� �������� " << first.name << " �� ��������� " << second.name;
		if (first.examsVector != second.examsVector
			|| first.name != second.name) return false;
			return true;
		}
	
};