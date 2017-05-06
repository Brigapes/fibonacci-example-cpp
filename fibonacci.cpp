#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	cout << "Welcome to my Fibonacci calculator! Enter an integer to start calculating Fibonacci sequence." << endl;
	cout << "If it glitches, you entered too high of an integer, restart to fix." << endl;

	bool parent = false;
	bool while_stop = false;
	int ord;
	int stop = 1;
	string res;
    long double a = 0, b = 1, c = 0, d=0;;

	
	while (parent == false) {

cout << "Until what number?" << endl;
	cin >> ord;
	if (ord <= 1) { cout << "Error, value must be higher than 1. Setting it to 10." << endl; ord = 10; }
	cout << "Ok, starting!" << endl;


		while (while_stop==false) {

			if (stop == 1) {
				cout << "Fibbonaci 0 is 0"<< endl;
				cout << "Fibbonaci " << stop << " is " << c << endl;
			}

			stop++;


			c = a + b;
			a = b;
			b = c;
            //d= c / 100; 
			

			cout << "Fibbonaci " << stop << " is " << c << endl;

               if (isinf(c)) { cout<<"Reached infinite"<<endl;break;}
			   
               
			if (stop == ord) { while_stop = true; }

		}
		cout << "Restart? (yes/no)";
			cin.clear();
		std::cin.ignore(256, '\n');
		cin >> res;
		if (res == "no") { parent = true; return 0; }
		else { while_stop = false; a=0; c = 0; b = 1; ord = 0; stop = 1; }

		cin.clear();
		std::cin.ignore(256, '\n');

	}




	cin.clear();
	std::cin.ignore(256, '\n');
	cin >> stop;

}
