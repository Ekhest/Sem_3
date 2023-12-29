#include <iostream>
#include <string>
#include <algorithm>

/*
1) в С++ strlen() = в С size()
показывает длинну строкиЫ
2) в С++ strcpy() = в С assign() 
копирует символы изодной строки в другую
3) в С++ strcmp() = в С compare()
сравнивает две строки 
4) в С++ strcat() = в С append()
добавляет символы одной строки в конец другой
5) в С++ someString[index]() = в С at(index)
выводит в консоль выбранный символ строки
6) в С++ push_back() есть, в С нет
можем добавить ячейку в конец вектора
7) в С++ pop_back() есть, в С нет
можем добавить ячейку в начало вектора
*/

int main() {
    std::string str;
    std::cout << "Vvedite stroku: ";
    std::getline(std::cin, str);

    // Удаление пробелов и знаков препинания
    str.erase(std::remove_if(str.begin(), str.end(), [](char c) {
        return std::isspace(c) || std::ispunct(c);
        }), str.end());

    // Сортировка букв в алфавитном порядке
    std::sort(str.begin(), str.end());

    std::cout << "Result: " << str << std::endl;

    return 0;
}