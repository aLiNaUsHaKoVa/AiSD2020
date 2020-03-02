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

    StudentWithVector(string newName, vector<Exam> newExamsVector) { //����������� 
        name = newName;
        examsVector = newExamsVector;
    };

    StudentWithVector(string newName) {
        name = newName;
    }

    //��������� ������ 
    string getName() {
        return name;
    }
    vector <Exam> getExams() {
        return examsVector;
    }

    //��������� ������
    void setName(string newName) {
        name = newName;
    }
    void setExams(vector<Exam> newExams) {
        examsVector = newExams;
    }

    //����� ��� ���������� ���������� �������� 
    void addExam(Exam newExam) {
        examsVector.push_back(newExam);
    }

    void toString1() { //����� ������ ���������� ��������
        cout << "��� �������� - " << name << endl;
        for (int i = 0; i < examsVector.size(); i++) {
            Exam curEx = examsVector[i];
            cout << " | " << curEx.getName() << "| " << curEx.getDate() << " | " << curEx.getMark() << endl;
        }
    }
};