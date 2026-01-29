#include <iostream>

using namespace std;

bool check_if_text_exceed_max_length(int max_length, string text)
{
    return text.length() > max_length;
}

int main()
{
    int max_length_allowed = 200;
    string text;
    cout << "check if your text exceeds max length the allowed: \n";
    // getline method helps to get the entire line text, not only the first word
    getline(cin, text);
    bool exceed = check_if_text_exceed_max_length(max_length_allowed, text);

    string result = exceed ? "Reproved" : "Passed";
    cout << result;
    return 0;
}