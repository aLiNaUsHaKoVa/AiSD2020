#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "StudentWithVector.h"

using namespace std;

class Group {
private:
	string name;
	vector <StudentWithVector> students;

public:
	Group() {}

	Group(string name, vector <StudentWithVector> students) {
		this->name = name;
		this->students = students;
	}

	Group(string name) {
		this->name = name;
	}

	void setName(string name) {
		this->name = name;
	}
	void setStudents(vector<StudentWithVector> students) {
		this->students = students;
	}
	void addStudent(StudentWithVector student) {
		students.push_back(student);
	}
	void deleteStudent(StudentWithVector student) {
		students.erase(find(begin(students), end(students), student));
	}

	string getName() {
		return name;
	}
	vector<StudentWithVector> getStudentsList() {
		return students;
	}

	StudentWithVector findStudent(string name) {
		for (int i = 0; i < students.size(); i++) {
			if (name == students[i].getName()) return students[i];
		}
	}

	void toString1() {
		cout << "������ - " << name << endl;

		for (int i = 0; i < students.size(); i++) {
			StudentWithVector curStudent = students[i];

			cout << endl << "�������" << " | " << "������" << " | " << "����" << endl;

			curStudent.toString1();

		}
	}
};
