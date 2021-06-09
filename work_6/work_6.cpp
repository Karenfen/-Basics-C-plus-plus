// Kiselev Ilia
// homework 6
// MinGW + CMD + Notepad++

#include <iostream>
#include <cstdlib>
#include <fstream>

void conglutination (const char*, const char*, const char* = "File.txt");


int main (int argc, const char** argv) {
	using namespace std;
// Task - 1 ===================================================

  ofstream verse_1("file_1.txt");
verse_1 << "Two roads diverged in a yellow wood,\n";
verse_1 << "And sorry I could not travel both\n";
verse_1 << "And be one traveler, long I stood\n";
verse_1 << "And looked down one as far as I could\n";
verse_1 << "To where it bent in the undergrowth.\n";
verse_1 << "\n";
verse_1 << "Then took the other, as just as fair,\n";
verse_1 << "And having perhaps the better claim,\n";
verse_1 << "Because it was grassy and wanted wear;\n";
verse_1 << "Though as for that the passing there\n";
verse_1 << "Had worn them really about the same.\n";
verse_1 << "\n";
  verse_1.close();

  ofstream verse_2 ("file_2.txt");
verse_2 << "And both that morning equally lay\n";
verse_2 << "In leaves no step had trodden black.\n";
verse_2 << "Oh, I kept the first for another day!\n";
verse_2 << "Yet knowing how way leads on to way,\n";
verse_2 << "I doubted if I should ever come back.\n";
verse_2 << "\n";
verse_2 << "I shall be telling this with a sigh\n";
verse_2 << "Somewhere ages and ages hence:\n";
verse_2 << "Two roads diverged in a wood, and I�\n";
verse_2 << "I took the one less traveled by,\n";
verse_2 << "And that has made all the difference.";
   verse_2.close();

// Task - 2 ===================================================

conglutination("file_1.txt", "file_2.txt");

// Task - 3 ===================================================

if (argc == 3){
string check_word = argv[1];
string check_file = argv[2];
string word;
int result = 0;

ifstream check (check_file);
  while (!check.eof()){
    check >> word;
      if(word == check_word){
		result = 1;
		break;
	  };
  }
check.close();

cout << "check result: " << result << endl;
}

	return 0;
}


void conglutination (const char *name_1, const char *name_2, const char *name_3){
using namespace std;

  ifstream ver_1(name_1, ios_base::ate);
	int size_1 = ver_1.tellg();
  ver_1.close();

  ifstream ver_2(name_2, ios_base::ate);
	int size_2 = ver_2.tellg();
  ver_2.close();

	char **arr = new char*[2];
	arr[0] = new char[size_1];
	arr[1] = new char[size_2];

	ifstream verse_a(name_1);
	size_1 = 0;
	  while (verse_a.get(arr[0][size_1])){
		  size_1++;
		}
	verse_a.close();

	ifstream verse_b(name_2);
	size_2 = 0;
	  while (verse_b.get(arr[1][size_2])){
		  size_2++;
		}
	verse_b.close();

	ofstream Verse (name_3);
      for (int i = 0; i < 2; i++){
		int n;
		(i < 1)? (n = size_1) : (n = size_2);
		for (int j = 0; j < n; j++){
			Verse << arr[i][j];
		};
		};
		Verse.close();

		delete [] arr[0];
		delete [] arr[1];
		delete [] arr;
};
