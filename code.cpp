#include <iostream>
#include <regex>
#include <string>
using namespace std;

bool is_SnakeCase(const string& str) {
   
    regex snakeCasePattern("^[a-z]+(_[a-z0-9]+)*$");

    return regex_match(str, snakeCasePattern);
}

int main() {
    setlocale(LC_ALL, "uk_UA");
    string testStr;

    
   cout << "Введіть рядок для перевірки, чи є він валідним ідентифікатором у стилі Snake_Case: ";
    cin >> testStr;

   
    if (is_SnakeCase(testStr)) {
      cout << "Рядок є валідним ідентифікатором у стилі Snake_Case." << endl;
    }
    else {
     cout << "Рядок НЕ є валідним ідентифікатором у стилі Snake_Case." << endl;
    }

    return 0;
}
