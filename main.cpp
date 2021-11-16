#include <iostream> // Allows us to input/output data
#include <fstream> // Allows us to read/write to files
using namespace std;

int main() {

	string result = "abab";
	string options = "ab";
	string example = "";

	int state = 0;

	// For every state except the last one
	for (int i = 0; i <= result.size(); i++) {
		cout << i << " ";

		// Go through all the options,
		for (int j = 0; j < options.size(); j++) {

			example += options[j];
			cout << example << " ";

			// If the letters match,
			if (options[j] == result[i])

				cout << i + 1 << " ";

			// If the letters don't match,
			else {

				// It either goes to 0 or 1
				if (options[j] == result[0]) cout << 1 << " ";
				else cout << 0 << " ";

			}
			example.pop_back();
		}

		example += result[i];
		cout << endl;
	}

	// Opens the file
	// ifstream f ("monkeydata.txt");
	// char x;

	// Read every character in the file
	// while (f) {
	// 	f.get(x);
		
	// }
} 