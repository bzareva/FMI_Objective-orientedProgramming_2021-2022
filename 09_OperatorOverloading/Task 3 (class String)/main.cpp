﻿/*     
        author  Michael Zarkov 
	Задача 3.

	Реализирайте клас String предвиден за работа със символни низове, който да поддържа следните оператори:

	# оператор += , който към даден стринг конкатенира друг.
	# оператор + , който конкатенира два стринга.
	# оператор *= , който по подадено цяло число k мултиплицира съдържанието на даден стринг k пъти.
	# оператор * , който по подаден стринг и цяло число k, връща стринг, чието съдържание е мултиплицираното съдържанието на дадения стринг k пъти.
	# оператор /= , който по подаден стринг, връща като резултат всички символи, които се съдържат в текущия стринг, но не са част от подадения.
	# оператор / , който по подадени два стринга, връща като резултат всички символи, които се съдържат в първия стринг, но не са част от втория.
	# operator [] , който връща символа на дадена позиция. Да се направи и за обект, който е константен.
	# оператор == сравнява два стринга по сумата от ASCII кодовете на символите в стринга. Връща истина, ако двата стринга са с еднаква тежест.
	# оператор != сравнява два стринга по сумата от ASCII кодовете на символите на стринга. Връща истина, ако двата стринга са с различна тежест.
	# оператор << за извеждане на конзолата.
	# оператор >> за четене от конзолата.
	
	Също така да се имплементират следните функции:
	# resize: увеличава размера на символният низ.
	# add: добавя символ в края на низа.
	# insertAt: вмъква символ на определена позиция.
	# removeAt: премехва символ на определена позиция.

*/



#include <iostream>
#include <fstream>
#include "String.h"


int main() {

	String s1 = "ABC";
	std::ifstream myfile("String.h");
	myfile >> s1;
	std::cout << s1 << "\n" << myfile.good() << std::endl;

	/*String s2{ "something..." };
	std::cin >> s2;
	std::cout << "\n" << s2 << std::endl;*/
}
