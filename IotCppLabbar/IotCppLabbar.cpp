// IotCppLabbar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void ToLowerLab()
{
	
}

void ToLower2Lab()
{

}


void lab7()
{

}

void lab6()
{

}

void lab5()
{

}

void lab4()
{

}

void lab3()
{

}

void lab2()
{

}


int CalculateNetSalary(int arbetadeTimmar, int timLon = 200, int skattesatsInPercent = 50)
{
	return arbetadeTimmar * timLon * (skattesatsInPercent / 100.0f);
}


void lab1()
{
	int salary = CalculateNetSalary(10, 100);
	salary = CalculateNetSalary(10);
	salary = CalculateNetSalary(10, 100, 12);
}


void test(int a)
{
	a = a + 1;
}

void test(int *a)
{
	//Hmm hur gjorde man detta nu då
	*a = *a + 1;
}


void testNya(int &a)
{
	a = a + 1;
}

//EFter rast = felhanteringen exception
//personen har en lista med Husdjur

class Person
{
	//Constructor...
	//
private:
	int age;
	string firstname;
	int birthmonth;
	string lastname;

	int postalcode;
	string city;
	
public:
	Person(int age, int birthmonth)
	{
		if(!SetAge(age))
		{
			throw exception("Felaktig age");
		}
		if(!SetBirthMonth(birthmonth))
		{
			throw
				exception("Felaktig birthmonth");
		}
	}
	
	bool ChangeCity(int postalcode, string city)
	{
		if (postalcode < 10000 || postalcode > 99999)
			return false;
		if (city.length() < 1)
			return false;
		//Read from database check correcvt postalcode + city
		this->city = city;
		this->postalcode = postalcode;
		return true;
	}


	string  GetCity()
	{
		return city;
	}

	int GetPostalCode()
	{
		return postalcode;
	}


	
	bool SetBirthMonth(int month)
	{
		if (month < 1 || month > 12 )
			return false;
		this->birthmonth = month;
		return true;
	}
	int GetBirthMonth()
	{
		return birthmonth;
	}

	bool SetAge(int age)
	{
		if (age < 0)
			return false;
		this->age = age;
		return false;
	}
	int GetAge()
	{
		return age;
	}
} ;


//1. skapa klass! Alla klass-variabler -> privata city, namn, age, bil
//2. skapa public constructor. Den tar och initierar de interna varianbler som krävs för "valid state"
//3. titta vad som kräves att vi exponerar? "Skriv ut namnet och ålder"
//4. getnamn() och en getage()

int main43214233()
{

	//14:10
	try
	{
		Person str(47, 8);

	}
	catch(exception ex)
	{
		cout << ex.what();
	}

	
	
	Person str(47, 8);
	str.ChangeCity(13245, "Saltysjö-Npp");
	//str.SetPostalCode(13245);
	//str.SetCity("Saltsjö-Boo");
	//
	//str.SetPostalCode(10101);
	////str.SetCity("Stockholm");

	
	str.SetAge(12);
	//str.SetBirthMonth(1);
	
	cout << str.GetAge();

	str.SetAge(-12);
	cout << str.GetAge();

	
	
	
	lab1();
	vector<int> ints;
	int ab = 12;
	ints.push_back(ab);
	
	int a = 12;
	test(a);
	cout << a << endl;

	a = 12;
	test(&a);
	cout << a << endl;

	a = 12;
	testNya(a);
	cout << a << endl;


	
	ToLowerLab();
	ToLower2Lab();
	lab7();
	lab6();
	lab5();
	lab4();
	lab3();
	lab2();
	lab1();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
