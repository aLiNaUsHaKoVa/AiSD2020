#include <iostream>
#include <string>
#include "Group.h"
#include <vector>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    Exam matan("���������", 3, "13.01.2020");
    Exam algem("������� � ���������", 5, "20.01.2020");
    Exam OP("��", 5, "24.01.2020");


    StudentWithVector alex("��������� �������");
    alex.addExam(matan);
    alex.addExam(algem);
    alex.addExam(OP);

    StudentWithVector marina("������ ���������");
    marina.addExam(matan);
    marina.addExam(algem);
    marina.addExam(OP);

    StudentWithVector usman("����� �����������");
    usman.addExam(matan);
    usman.addExam(algem);
    usman.addExam(OP);

    StudentWithVector alina("����� �������");
    alina.addExam(matan);
    alina.addExam(algem);
    alina.addExam(OP);

    Group pm("���������� ����������");

    pm.addStudent(alex);
    pm.addStudent(marina);
    pm.addStudent(usman);
    pm.addStudent(alina);

    pm.toString1();

    pm.deleteStudent(marina); //������� �������� �� ������

    cout << endl << " --------------------- ������ ����� �������� ----------------------" << endl;

    pm.toString1();

    StudentWithVector stud = pm.findStudent(alex.getName());

    cout << endl << "���� �������� ..." << endl;
    stud.toString1();

    return 0;
}