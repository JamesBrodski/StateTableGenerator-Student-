#include <iostream> // Allows us to input/output data
#include <fstream> // Allows us to read/write to files
using namespace std;

int main() {

	string result = "cheese";
	string options = "abcdefghijklmnopqrstuvwxyz";
	string example;

	cout << "Searching for string \"" << result << "\" in text file \"extra.txt\"\n";
	cout << "Generating state table for " << result << "..." << endl;

	// Display the top row of the table
	cout << "s" << " ";
	for (int i = 0; i < options.size(); i++)
		cout << options[i] << " ";
	cout << endl;

	// For every state
	for (int i = 0; i <= result.size(); i++) {
		cout << i << " ";

		// Go through all the options,
		for (int j = 0; j < options.size(); j++) {

			example += options[j];
			//cout << example << " ";

			// If the letters match,
			if (options[j] == result[i])

				// Go to the next state
				cout << i + 1;

			// If the letters don't match,
			else {

				// Go to either state 0 or 1
				if (options[j] == result[0]) cout << 1;
				else cout << 0;

			}
			cout << " ";
			example.pop_back();
		}

		example += result[i];
		cout << endl;
	}

	cout << endl;

	// Opens the file
	ifstream f ("extra.txt");
	string x;
	f >> x;

	cout << "The string " << result << " was found at locations: ";

	for (int i = 0; i < x.size(); i++)
		if (x.substr(i, result.size()) == result)
			cout << i << ", ";
	cout << endl;
} 