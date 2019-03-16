// Chawne Harris J00844155
// Civil Aviation
#include <iostream>
using namespace std;


int main()
{
    char alphabet;
    
    cout << "Input an alphabet : ";
    cin >> alphabet;
    
    cout << "International Civil Aviation Organization alphabet word for the alphabet " << endl;
    
    if (alphabet == 'a' || alphabet == 'A')
        cout << "A is Alpha";
    else if (alphabet == 'b' || alphabet == 'B')
        cout << "Bis Bravo";
    else if (alphabet == 'c' || alphabet == 'C')
        cout << "C is Charlie";
    else if (alphabet == 'd' || alphabet == 'D')
        cout << "D is Delta";
    else if (alphabet == 'e' || alphabet == 'E')
        cout << "E is Echo";
    else if (alphabet == 'f' || alphabet == 'F')
        cout << "F is Foxtrot";
    else if (alphabet == 'g' || alphabet == 'G')
        cout << "G is Golf";
    else if (alphabet == 'h' || alphabet == 'H')
        cout << "H is Hotel";
    else if (alphabet == 'i' || alphabet == 'I')
        cout << "I is India";
    else if (alphabet == 'j' || alphabet == 'J')
        cout << "J is Juliet";
    else if (alphabet == 'k' || alphabet == 'K')
        cout << "K is Kilo";
    else if (alphabet == 'l' || alphabet == 'L')
        cout << "L is Lima";
    else if (alphabet == 'm' || alphabet == 'M')
        cout << "M is Mike";
    else if (alphabet == 'n' || alphabet == 'N')
        cout << "N is November";
    else if (alphabet == 'o' || alphabet == 'O')
        cout << "O is Oscar";
    else if (alphabet == 'p' || alphabet == 'P')
        cout << "P is Papa";
    else if (alphabet == 'q' || alphabet == 'Q')
        cout << "Q is Quebec";
    else if (alphabet == 'r' || alphabet == 'R')
        cout << "R is Romeo";
    else if (alphabet == 's' || alphabet == 'S')
        cout << "S is Sierra";
    else if (alphabet == 't' || alphabet == 'T')
        cout << "T is Tango";
    else if (alphabet == 'u' || alphabet == 'U')
        cout << "U is Uniform";
    else if (alphabet == 'v' || alphabet == 'V')
        cout << "V is Victor";
    else if (alphabet == 'w' || alphabet == 'W')
        cout << "W is Whiskey";
    else if (alphabet == 'y' || alphabet == 'Y')
        cout << "Y is Yankee";
    else if (alphabet == 'z' || alphabet == 'Z')
        cout << "Z is Zulu";
    else
        cout << "Invalid Character";
        
    return 0;
}