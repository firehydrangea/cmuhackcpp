#include <iostream>

using namespace std;

int main (){

	String what = Replacewhat();
	String Rwhere = ReplaceWhere();

}

public string ReplaceWhat() {
	string answer;
	cout << "What needs to be replaced?";
	cout << "options: hand sanitizer or wipes";
	cin << answer;
	return answer;
}

public string ReplaceWhere() {
	string answer;
	cout << "Where does it need to be replaced?";
	cout << "options: Benny, Bonny, Rooney, Wimmer, Aurelius, Caf, Classroom";
	cin << answer;
	return answer;
}