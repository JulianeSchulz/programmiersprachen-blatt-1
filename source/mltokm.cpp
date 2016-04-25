# include <iostream>
# include <string>
using namespace std;

main()
{
	cout << "Wieviel Meilen sollen zu Kilometern umgerechnet werden? "	<< endl;
	double input;
	cin >> input;
	cout << input <<" Meilen entsprechen " <<(input/0.62137) << " Kilometern "<< endl;
	return 0;
}

