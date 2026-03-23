#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
};

class MedicalInfo
{
public:
	string disease_name;
};

class FitnessInfo
{
public:
	int dailysteps;
};

class Patient : public Person
{
public:
	int patient_id;
};

class Inpatient : public Patient
{
public:
	int room_number;
};

class WellnessPatient : public Inpatient, public FitnessInfo
{
public:
	string diet_plan;
};

class Doctor : public Person
{
public:
	string specialization;
};

class VisitingDoctor : public Doctor
{
public:
	string visitinghours;
};

class HealthAdvisor : public VisitingDoctor, public MedicalInfo
{
public:
	string advise_note;
};

int main()
{
	WellnessPatient patient;
	HealthAdvisor advisor;

	patient.name = "David";
	patient.age = 38;
	patient.patient_id = 210;
	patient.room_number = 105;
	patient.dailysteps = 8200;
	patient.diet_plan = "Low Sugar Diet";

	advisor.name = "Dr. Miller";
	advisor.age = 50;
	advisor.specialization = "Cardiology";
	advisor.visitinghours = "10 AM to 1 PM";
	advisor.disease_name = "Hyperetension";
	advisor.advise_note = "Reduce salt and walk daily";

	cout << "Wellness Patient Details" << endl;
	cout << "Name: " << patient.name << endl;
	cout << "Age: " << patient.age << endl;
	cout << "ID: " << patient.patient_id << endl;
	cout << "Room NUmber: " << patient.room_number << endl;
	cout << "Daily Steps: " << patient.dailysteps << endl;
	if (patient.dailysteps >= 7000)
	{
		cout << "Active" << endl;
	}
	cout << "Diet Plan: " << patient.diet_plan << endl;
	cout << endl;
	cout << "Health Advisor Details" << endl;
	cout << "Name: " << advisor.name << endl;
	cout << "Age: " << advisor.age << endl;
	cout << "Specialization: " << advisor.specialization << endl;
	cout << "Visiting Hours: " << advisor.visitinghours << endl;
	cout << "Diesease Focus: " << advisor.disease_name << endl;
	cout << "Advice Note: " << advisor.advise_note << endl;

	return 0;
}