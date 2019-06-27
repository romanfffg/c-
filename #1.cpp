#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib> // для system
using namespace std;

int main()
{
//    char s[6] = {'a','e','o','u','i'};
    int a = 0, e = 0, o = 0, u = 0, i = 0, y = 0;
    string b;
    getline(cin,b);
	for (int z = 0; z < b.length(); z++) {
		if (b[z] =='a') {
    string bus;
    getline(cin,bus);
	for (int z = 0; z < bus.length(); z++) {
		if (bus[z] =='a') {
			a = a + 1;
		}
		if(b[z] == 'e') {
		if(bus[z] == 'e') {
			e = e + 1;
		}
		if(b[z] == 'i') {
		if(bus[z] == 'i') {
			i = i + 1;
		}
		if (b[z] == 'o') {
		if (bus[z] == 'o') {
			o = o + 1;
		}
		if (b[z] == 'u') {
		if (bus[z] == 'u') {
			u = u + 1;
		}
		if (b [z] == 'y') {
		if (bus[z] == 'y') {
			y = y + 1;
		}
	}
 @@ -33,7 +33,7 @@ int main()
    cout << "o = " << o << endl;
    cout << "u = " << u << endl;
    cout << "i = " << i << endl;
	//0

    // system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}
