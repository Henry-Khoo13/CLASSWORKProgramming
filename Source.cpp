#include <iostream> 
#include <string>
#include "Car.hpp"
#include "cake.hpp"
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;// now don't need to say std::cout


//Implementing cake in cake.cpp
//Can't put namespaces into namespaces
//Week 2 Work
Cake::Cake() {
	bPlate = true;
	iSlices = 8;
}
Cake::~Cake() {
	iSlices = 0;
	bPlate = false;
}

bool Cake::EatSlice() {
	return false;
}
int Cake::GetSlices() {
	return 0;
}


//namespace myNamespace { void myFunction(); }
//As seen before.
namespace drawing {
	int square(int length);
	int circle(int radius);
	int square(int length) {
		//Draw Square
		return 0;
	}
	int circle(int radius) {
		//Draw Circle
		return 0;
	}
}
namespace math {
	int square(int value);
	int cube(int value);


	int cube(int value) {
		return value * value * value;
	}
	int square(int value) {
		return value * value;
	}
}
namespace BasicCompSci {
	int Basics();
	int Basics() {
		const int myConstant = 20;// This will be always unchangeable 20.
		//Example Usage
		const int minutesPerHour = 60;
		const float PI = 3.14;
		// Cout is print
		// Cin is predefined variable to read data
		// They use the extractions operator >>
		// << Operator - Moves "Data" into the stream on the elft
		// >> Operator - Moves "Data" out of the stream o the right
		// Can have multiple << or >> Operators in a single statement
		std::cout << "Hello " << "There " << std::endl;// 

		return 0;

	}
}
namespace Week1CompSci {
	int Operators();
	int NameFunction();
	int VolumeOfBox(int length, int height, int width);
	void Swap(int& first, int& second);
	int Square(int Value);
	float Square(float Value);

	int Task1();
	int Task2();
	int Task3();
	int Task4();
	int Task5();
	int Task6();
	int Task7();
	int Task8();

	int Operators() {
		const int Value1 = 18;
		const int Value2 = 85;
		int Value3;
		int Value4;
		cout << " " << endl;
		cout << "Value1 " << Value1 << endl;
		cout << "Value2 " << Value2 << endl;
		cout << "Addition Result: " << Value1 << " + " << Value2 << " = " << Value1 + Value2 << endl;
		cout << "Subtraction Result: " << Value1 << " - " << Value2 << " = " << Value1 - Value2 << endl;
		cout << "Multiplication Result: " << Value1 << " * " << Value2 << " = " << Value1 * Value2 << endl;
		cout << "Division Result: " << Value1 << " / " << Value2 << " = " << Value1 / Value2 << endl;
		cout << "Modulus Result: " << Value1 << " % " << Value2 << " = " << Value1 % Value2 << endl;
		Value3 = Value1;
		Value3++;
		Value4 = Value1;
		Value4--;
		cout << "Increment Result: Value1 Before: " << Value1 << " Value1 After: " << Value3 << endl;
		cout << "Decrement Result: Value1 Before: " << Value1 << " Value1 After: " << Value4 << endl;
		Value3 = Value1;
		cout << "Set Value (x = 5) : Value3 Before: " << Value3;
		Value3 = 5;
		cout << " Value3 After: " << Value3 << endl;
		cout << " " << endl;



		cout << " " << endl;
		Value3 = Value1;
		cout << "Set Value (x += 3) : Value3 Before: " << Value3;
		Value3 += 3;
		cout << " Value3 After: " << Value3 << endl;
		Value3 = Value1;
		cout << "Set Value (x -= 3) : Value3 Before: " << Value3;
		Value3 -= 3;
		cout << " Value3 After: " << Value3 << endl;
		Value3 = Value1;
		cout << "Set Value (x *= 3) : Value3 Before: " << Value3;
		Value3 *= 3;
		cout << " Value3 After: " << Value3 << endl;
		Value3 = Value1;
		cout << "Set Value (x /= 3) : Value3 Before: " << Value3;
		Value3 /= 3;
		cout << " Value3 After: " << Value3 << endl;
		Value4 = Value2;
		cout << "Set Value (x %= 3) : Value4 Before: " << Value4;
		Value4 %= 3;
		cout << " Value4 After: " << Value4 << endl;
		Value4 = Value2;
		cout << "Set Value (x &= 3) : Value4 Before: " << Value4;
		Value4 &= 3;
		cout << " Value4 After: " << Value4 << endl;
		Value4 = Value2;
		cout << "Set Value (x |= 3) : Value4 Before: " << Value4;
		Value4 |= 3;
		cout << " Value4 After: " << Value4 << endl;
		Value4 = Value2;
		cout << "Set Value (x ^= 3) : Value4 Before: " << Value4;
		Value4 ^= 3;
		cout << " Value4 After: " << Value4 << endl;
		Value4 = Value2;
		cout << "Set Value (x >>= 3) : Value4 Before: " << Value4;
		Value4 >>= 3;
		cout << " Value4 After: " << Value4 << endl;
		Value4 = Value2;
		cout << "Set Value (x <<= 3) : Value4 Before: " << Value4;
		Value4 <<= 3;
		cout << " Value4 After: " << Value4 << endl;
		cout << " " << endl;


		cout << " " << endl;
		cout << "Value1 " << Value1 << endl;
		cout << "Value2 " << Value2 << endl;
		if (Value1 == Value2) {
			cout << "Value1 is equal to Value2" << endl;
		}
		else {
			cout << "Value1 is not equal to Value2" << endl;
		}
		cout << " " << endl;


		cout << " " << endl;
		cout << "Value1 " << Value1 << endl;
		cout << "Value2 " << Value2 << endl;
		if (Value1 != Value2) {
			cout << "Value1 is not equal to Value2" << endl;
		}
		else {
			cout << "Value1 is equal to Value2" << endl;
		}
		cout << " " << endl;


		cout << " " << endl;
		cout << "Value1 " << Value1 << endl;
		cout << "Value2 " << Value2 << endl;
		if (Value1 > Value2) {
			cout << "Value1 is greater than Value2" << endl;
		}
		else {
			cout << "Value1 is not greater than Value2" << endl;
		}
		cout << " " << endl;


		cout << " " << endl;
		cout << "Value1 " << Value1 << endl;
		cout << "Value2 " << Value2 << endl;
		if (Value1 < Value2) {
			cout << "Value1 is less than Value2" << endl;
		}
		else {
			cout << "Value1 is not less than Value2" << endl;
		}
		cout << " " << endl;


		cout << " " << endl;
		cout << "Value1 " << Value1 << endl;
		cout << "Value2 " << Value2 << endl;
		if (Value1 >= Value2) {
			cout << "Value1 is greater than or equal to Value2" << endl;
		}
		else {
			cout << "Value1 is not greater than or equal to Value2" << endl;
		}
		cout << " " << endl;



		cout << " " << endl;
		cout << "Value1 " << Value1 << endl;
		cout << "Value2 " << Value2 << endl;
		if (Value1 <= Value2) {
			cout << "Value1 is less than or equal to Value2" << endl;
		}
		else {
			cout << "Value1 is not less than or equal to Value2" << endl;
		}
		cout << " " << endl;

		Value3 = 63;
		Value4 = 19;
		cout << " " << endl;
		cout << " " << Value3 << " > 5 && " << Value4 << " > 10 " << endl;
		if (Value3 > 5 && Value4 > 10) {
			cout << "Statement True" << endl;
		}
		else {
			cout << "Statement False" << endl;
		}
		cout << " " << endl;

		cout << " " << endl;
		cout << " " << Value3 << " > 5 || " << Value4 << " < 10 " << endl;
		if (Value3 > 5 || Value4 < 10) {
			cout << "Statement True" << endl;
		}
		else {
			cout << "Statement False" << endl;
		}
		cout << " " << endl;

		cout << " " << endl;
		cout << "!( " << Value3 << " > 5 || " << Value4 << " < 10 )" << endl;
		if (!(Value3 > 5 || Value4 < 10)) {
			cout << "Statement True" << endl;
		}
		else {
			cout << "Statement False" << endl;
		}
		cout << " " << endl;
		return 0;
	}
	int NameFunction()
	{
		char Name[20];
		cout << "Please Input Your Name: \n";
		cin >> Name;
		cout << "Output Name: " << Name << endl;
		return 0;
	}
	int VolumeOfBox(int length, int height = 2, int width = 3)//2 and 3 are the default argument
	{
		int Area;
		Area = length * height * width;
		cout << "Volume Of The Box: " << Area << endl;
		return 0;
	}
	void Swap(int& first, int& second) {
		int temp;
		temp = first;
		first = second;
		second = temp;
	}
	//Function Overloading
	int Square(int Value) {
		return Value * Value;
	}
	float Square(float Value) {
		return Value * Value;
	}


	int Task1() {
		std::cout << "Hello World" << std::endl;//Used Std without the using namespace
		cout << "Another Line" << endl;

		return 0;
	}
	int Task2() {
		int a, b, sum;
		float div, modulo;
		int hours;
		int hours_per_hour;
		hours = 24;
		hours_per_hour = hours * 365 + 1 + 3 * 4;
		cout << "Enter first integer\n"; // Output
		cin >> a; // Input
		cout << "Enter second integer\n";
		cin >> b;
		sum = a + b;
		div = a / b;
		modulo = a % b;
		cout << "Sum is " << sum << endl;
		cout << "Division is " << div << endl;
		cout << "Modulo is " << modulo << endl;
		cout << hours_per_hour << endl;

		NameFunction();
		return 0;
	}
	int Task3() {
		int Length, Height, Width;
		cout << "Please Input Length: \n";
		cin >> Length;
		cout << "Please Input Height: \n";
		cin >> Height;
		cout << "Please Input Width: \n";
		cin >> Width;
		VolumeOfBox(Length);
		VolumeOfBox(Length, Height);
		VolumeOfBox(Length, Height, Width);
		return 0;
	}
	int Task4() {
		string nationalBird = "Nightingale";//nationalBird Variable
		string& bird = nationalBird; //reference to national Bird
		//It can get memory address of a variable
		cout << &bird;//Output 007FFB8C
		return 0;
	}
	int Task5() {
		int a = 5;
		int b = 3;
		cout << "Before: A = " << a << endl << "B = " << b << endl;
		swap(a, b);
		// What is a,b after the call
		cout << "After: A = " << a << endl << "B = " << b << endl;
		return 0;
	}
	int Task6() {
		string nationalBird = "Nightingale";// nationalBird Variable;
		string& bird = nationalBird; // reference to nationalBird
		string* ptr = &bird; // pointer variable ptr which stores the address of bird
		//It can get memory address of a varaible
		cout << ptr; // Output the memory address of nationalBird with the pointer (00C9F704)

		/*
		* //change the value of the pointer
		*ptr = "Toucan"; // change the value
		// output the new value of pointer toucan
		cout << *ptr << "\n";
		//output of new value of nationalBird
		cout << nationalBird << "\n"; //00AFFE2C

		*/
		return 0;
	}
	int Task7() {
		int Value = 5;
		float Value2 = 3.15;
		cout << " " << endl;
		cout << Square(Value);
		cout << " " << endl;
		cout << Square(Value2);
		cout << " " << endl;
		return 0;
	}
	int Task8() {
		/*
Boot your machine with Ubuntu OS
Open the gnome –shell
Start doing your task 1.2
Grant permission as maintainer to Dr Ashraf Mahmud, a.mahmud@reading.ac.uk, with the ID - CV925136
		*/
		return 0;
	}

	int Links() {
		/*
		https://docs.microsoft.com/en-us/shows/CSharp-Fundamentals-for-Absolute-Beginners/?l=Lvld4EQIC_2706218949
		https://docs.microsoft.com/en-gb/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp
		https://docs.microsoft.com/en-gb/windows/uwp/apps-for-education/
		https://docs.microsoft.com/en-us/cpp/get-started/tutorial-console-cpp?view=msvc-170&viewFallbackFrom=vs-2022
		https://docs.microsoft.com/en-gb/samples/browse/?redirectedfrom=MSDN-samples&languages=cpp
		*/
		return 0;
	}
}
namespace Week2CompSci {
	//Task 9 to 20
	class Car1 {       // The class
	public:             // Access specifier
		string model;        // Attribute (string variable)
		string color;  // Attribute (string variable)
		int year; // Attribute (integer variable)
	};

	class Car3 {       // The class
	public:             // Access specifier
		string model;        // Attribute (string variable)
		string color;  // Attribute (string variable)
		int year; // Attribute (integer variable)
		int accommodation(int maxAccommodation); //declaring function
	};
	int Car3::accommodation(int maxAccommodation) { //accessing the function
		return maxAccommodation;
	}

	class MyPen {  // class
	public: // access specifier
		MyPen() { //constructor
			cout << "It is my ball point";
		}
	};
	class MyNumber { // class
	public: // public access specifier
		int a; // public attribute
	private: // private access specifier
		int b; //private attribute
	};
	//public – Member functions or data can be accessed
	//private – Accessible only to member functions of the class
	//protected – As private, and it can be used when inherited. Protected members can be accessed by a child class 

	class Patient {
	private: // private attribute
		string medicalRecord;
	public:
		// setter
		void setMedicalRec(string m) {
			medicalRecord = m;
		}
		//getter
		string getMedicalRec() {
			return medicalRecord;
		}
	};

	//Inheritance
	//parent class
	class NonMotorisedVehicle {
	public:
		string Color = "Blue";
	};
	// derived class
	class Bike : public NonMotorisedVehicle {
	public:
		string brand = "BMX";
	};

	//MultiLevel Inheritance
	//parent class
	class MotorizedVehicle {
	public:
		string Engine = "14-cylinder Wärtsilä RT-flex96C engine. ";
		void Fuel() {
			cout << " Fuel type is patrol. ";
		}
	};
	// derived class – child
	class Car4 : public MotorizedVehicle {
	public:
		string Color = "White";
	};
	//derived class-grand child
	class Van : public Car4 {
	public:
		void Hire() {
			cout << "It is a self hired van. ";
		}
	};

	//Multiple Inheritance
	//parent class 1
	class MotorizedVehicle2 {

	public:
		void autos() {
			cout << " two wheels but auto…. ";
		}
	};

	// parent class 2
	class NonMotorizedVehicle2 {

	public:
		void handles() {
			cout << "It has two handles, ";
		}
	};

	//derived or child class
	class TwoWheels : public MotorizedVehicle2, public NonMotorizedVehicle2 {

	};


	//Protected Access Specifier
	class Patient2 {
	protected: // Protected access specifier
		string medicalRecord;
	};

	// derived class
	class MedicalHistory : public Patient2 {
	public:
		// setter
		void setMedicalRec(string m) {
			medicalRecord = m;
		}
		//getter
		string getMedicalRec() {
			return medicalRecord;
		}
	};

	//Polymorphism

	// base or parent class
	class Vehicle {
	public:
		void Wheels() {
			cout << "Vehicle has wheels \n";
		}
	};

	//Derived class
	class Car5 : public Vehicle {
	public:
		void Wheels() {
			cout << "Car has four wheels \n";
		}
	};
	// Derived class
	class Bike2 : public Vehicle {
	public:
		void Wheels() {
			cout << "Bike has two wheels \n";
		}
	};


	int Task9();
	int Task10();
	int Task10P5();
	int Task11();
	int Task12();
	int Task13();
	int Task14();
	int Task15();
	int Task16();
	int Task17();
	int Task18();
	int Task19();
	int Task20();

	int Task9() {
		Car1 myCar;  // Create an object of Car
		// Access attributes and set values
		myCar.model = "Mitshubishi Outlander";
		myCar.color = "White";
		myCar.year = 2016;
		// Print values
		cout << " My car is " << myCar.model << ". " << "It’s color is " << myCar.color << ". " << "It is registered in " << myCar.year << endl;
		return 0;
	}
	int Task10() {
		//Headerfile Car.hpp Created

		Car2 car1; // creates a new instance
		car1.setColour("blue");
		Car2 car2; // creates a new instance
		car2.setColour("red");
		// access to data is possible with the "." punctuator
		cout << "car1 colour is: " << car1.colour << endl;
		cout << "car2 colour is: " << car2.getColour() << endl;
		return 0;
	}
	int Task10P5() {
		Car2* car1;
		car1 = new Car2(); // instantiating a new car using new operator
		car1->setColour("blue");
		cout << "car1 colour is: " << car1->colour << endl;
		delete car1; // freeing car
		return 0;

	}
	int Task11() {
		Car3 myCar;  // Create an object of Car

		// Access attributes and set values
		myCar.model = "Mitsubishi Outlander";
		myCar.color = "White";
		myCar.year = 2016;

		// Print values
		cout << "My car is " << myCar.model << ". " << "Its color is " << myCar.color << ". " << "It is registered in " << myCar.year << endl; //printing variables
		cout << "My car's maximum accommodation including driver is " << myCar.accommodation(5) << endl; //printing the function
		return 0;

	}
	int Task12() {
		MyPen ballPen; //create an object of my class MyPen
		return 0;
	}
	int Task13() {
		MyNumber num1;
		num1.a = 5; // allowed to access
		//num1.b = 6; // not allowed to access, out put would be b is private
		return 0;
	}
	int Task14() {
		Patient pT;
		pT.setMedicalRec("Injured on eye on 01 01 22");
		cout << pT.getMedicalRec();
		return 0;
	}
	int Task15() {
		//Understanding Cake Class UML Diagram
		//Open 2.pdf and complete the exercise 1 and 2
		//Open 2.pdf and start doing the exercise 3
		//Create Cake.hpp File
		Cake cake1;
		cout << "Cake is good" << endl;
		cout << "How many slices remaining? " << endl;
		cout << "There are: " << cake1.GetSlices() << " left" << endl;
		//Eating the Cake
		if (cake1.EatSlice());//Eat a slice
		else
			cout << "Sorry No cake left" << endl;
		if (cake1.EatSlice());//Eat another!
		else
			cout << "Sorry No cake left" << endl;
		cout << "There are: " << cake1.GetSlices() << " left" << endl;



		Cake cake2;
		cout << "Cake 2" << endl;
		cout << "How many slices? " << endl;
		cout << cake2.GetSlices() << endl;
		//Cake2 different instance with all it's slices

		if (cake2.EatSlice());
		else
			cout << "Sorry no cake left" << endl;
		if (cake2.EatSlice());
		else
			cout << "Sorry no cake left" << endl;
		cout << "There are: " << cake1.GetSlices() << " left" << endl;
		return 0;
	}
	int Task16() {
		Bike myBike;
		cout << "My Bike is : " << myBike.brand + " and " + myBike.Color << "color" << endl;
		return 0;
	}
	int Task17() {
		Van V1;
		V1.Hire();
		V1.Fuel();
		cout << " It's color is " << V1.Color << " It's engine is  " << V1.Engine << " Which is the best engine so far.  " << endl;
		return 0;
	}
	int Task18() {
		TwoWheels Tw;
		Tw.handles();
		Tw.autos();
		return 0;
	}
	int Task19() {
		MedicalHistory mR;
		mR.setMedicalRec("Injured on eye on Monday, 01 01 22");
		cout << mR.getMedicalRec();
		return 0;
	}
	int Task20() {
		Vehicle V;
		Car5 C;
		Bike2 B;
		V.Wheels();
		C.Wheels();
		B.Wheels();
		return 0;

	}
}
namespace Week3CompSci {
	//PDF 3
	int i;
	class A {
	public:
		A() {
			i = 4;
		}
		~A() {
			i = 10;
		}
	};
	int foo() {
		int i = 3;
		A ob;
		return i;
	}

	class Base1 {
	public:
		Base1() {
			cout << "Base1's constructor called" << endl;
		}
	};
	class Base2 {
	public:
		Base2() {
			cout << "Base2's constructor called" << endl;
		}
	};
	class Derived :public Base1, public Base2 {
	public:
		Derived() {
			cout << "Derived's Constructor called" << endl;
		}
	};

	// pointers to base class
	class Polygon {
	protected:
		int width, height;
	public:
		void set_values(int a, int b)
		{
			width = a; height = b;
		}
	};
	class Rectangle : public Polygon {
	public:
		int area()
		{
			return width * height;
		}
	};
	class Triangle : public Polygon {
	public:
		int area()
		{
			return width * height / 2;
		}
	};


	int Task21();
	int Task22();
	int Task23();
	int Task24();

	int Task21() {
		//At to gitlab, clone repo from website, copy files and push
		cout << foo() << endl;
		Derived d;
		return 0;

	}
	int Task22() {
		//Exercise 2 from 3.pdf 
		return 0;
	}
	int Task23() {
		Rectangle rect;
		Triangle trgl;
		Polygon* ppoly1 = &rect;
		Polygon* ppoly2 = &trgl;
		ppoly1->set_values(4, 5);
		ppoly2->set_values(4, 5);
		cout << rect.area() << '\n';
		cout << trgl.area() << '\n';
		return 0;
	}
	int Task24() {
		// Creating file 
		ofstream Write("myfile.txt");

		// Writing to the file
		Write << "I have a electrical vehicle";

		// Close the file
		Write.close();

		// for output the text file
		string Text;

		// Read from the file
		ifstream Read("myfile.txt");

		// read the file line by line
		while (getline(Read, Text)) {
			// Output from the file
			cout << Text;
		}

		// Close the file
		Read.close();
		return 0;
	}
}
namespace Week4CompSci {
	class P {
	public:
		void print() { cout << "Inside P"; }
	};
	class Q : public P {
	public:
		void print() { cout << " Inside Q"; }
	};
	class R : public Q { };

	class base {
	public:
		virtual void print() {
			cout << "print base class" << endl;
		}
		void show() {
			cout << "show base class" << endl;
		}
	};
	class derived : public base {
	public:
		void print() {
			cout << "print derived class" << endl;
		}
		void show() {
			cout << "Show derived class" << endl;
		}
	};

	template <typename T>
	T myMax(T x, T y) {
		return (x > y) ? x : y;
	}

	template <typename V>
	void fun(const V& x) {
		static int count = 0;
		cout << "x = " << x << " count = " << count << endl;
		++count;
		return;
	}

	template <class G>
	class Test {
	public:
		static int count;
		static vector<G> vals;
		Test() {
			vals.push_back(count);
			count++;
		}
	};

	template<class G>
	vector<G> Test<G>::vals = { 37, 20 };

	template<class G>
	int Test<G>::count = 0;

	template<class Q, class U>
	class A {
		Q x;
		U y;
		static int count;
	};
	int Task25();
	int Task26();

	int Task25() {
		//4.PDF
		R r;
		r.print();


		base* bptr;
		derived d;
		bptr = &d;
		bptr->print();
		bptr->show();

		cout << myMax<int>(3, 7) << endl;
		cout << myMax<double>(3.0, 7.0) << endl;
		cout << myMax<char>('g', 'e') << endl;
		//cout << myMax(3.0, 'a') << endl;

		fun<int>(1);
		cout << endl;
		fun<int>(1);
		cout << endl;
		fun<unsigned>(1);
		cout << endl;
		fun<double>(1.1);
		cout << endl;
		fun(2.5);
		cout << endl;
		cout << endl;


		Test<int> a;
		Test<int> b;
		Test<double> c;
		cout << Test<int>::count << endl;
		cout << Test<double>::count << endl;
		cout << "Let's iterate through our values of Test<int>::vals using the new for each" << endl;
		for (auto& x : Test<int>::vals) {
			cout << x << endl;
		}
		cout << "using iterators and a reference" << endl;
		vector<int>& vec = Test<int>::vals;
		for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
			cout << *it << endl;
		}



		A<char, char> p;
		A<int, int> l;
		cout << sizeof(p) << endl;
		cout << sizeof(l) << endl;

		return 0;

	}
	int Task26() {
		//Exploring Console
		//https://docs.microsoft.com/en-us/cpp/get-started/tutorial-console-cpp?view=msvc-170
		return 0;
	}
}
int main() {
	//drawing::square(5); //Draws a square on the screen 
	//Week1CompSci::Task7();
	//Week1CompSci::Task2();
	//BasicCompSci::Basics();
	//cout << " " << math::square(7) << endl; //Calculates the square of a value 
	return 0;
}
