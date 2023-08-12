//#include<iostream>
//using namespace std;
//
//class TemperatureTooLow {
//public:
//	const char* what() const {
//		return "Temperature is below absolute zero (-273.15°C).";
//	}
//
//};
//class TemperatureConverter {
//private:
//	double celsius;
//	double fahrenheit;
//public:
//	TemperatureConverter(double c )
//	{
//		if (c < -273.15) {
//			throw TemperatureTooLow();
//		}
//		celsius = c;
//		fahrenheit = (c * 9 / 5) + 32;
//	}
//	double getCelsius() {
//		return celsius;
//	}
//	double getFahrenheit() {
//		return fahrenheit;
//	}
//};
//
//int main() {
//	double c;
//	std::cout << "Enter a temperature in Celsius:\n";
//	std::cin >> c;
//	bool flag = 1;
//	while (flag == 1){
//		try {
//		TemperatureConverter tc(c);
//		std::cout << "The temperature in Celsius is " << tc.getCelsius() << "°C.\n";  std::cout << "The temperature in Fahrenheit is " << tc.getFahrenheit() << "°F.\n";
//		flag = 0;
//	}
//	catch (TemperatureTooLow e) {
//		cout << e.what() << "\n";
//		cin >> c;
//	}
//}
//
//		return 0;
//}
//
