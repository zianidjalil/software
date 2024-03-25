#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
#include<algorithm>


using namespace std;

void sum() {
    cout << "Enter the two numbers: " << endl;
    int a, b;
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}

void factorial() {
    int n;
    cout << "Enter the number to calculate the factorial: ";
    cin >> n;
    int factorial = 1;
    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "The factorial of " << n << " is: " << factorial << endl;
}

string getResponse(const string& input) {
    unordered_map<string, string> responses = {
        {"hello", "Hi there!"},
        {"how are you?", "I'm doing well, thank you!"},
        {"calculate the sum of 2 numbers", "Enter the numbers"},
        {"What is your name?", "My name is ChatBot."},
        {"What do you do?", "I'm here to help answer your questions!"},
        {"Who created you?", "I was created by an awesome developer."},
        {"Where are you from?", "I exist in the digital realm."},
        {"What time is it?", "I'm sorry, I don't have access to real-time data."},
        {"What is the weather like?", "I'm sorry, I cannot provide real-time weather information."},
        {"Tell me a joke.", "Why don't scientists trust atoms? Because they make up everything!"},
        {"Do you like pizza?", "I don't have taste buds, but I'm sure pizza is delicious!"},
        {"What is the meaning of life?", "That's a deep question! The meaning of life is subjective."},
        {"calculate the factorial of a number", "Enter the number to calculate the factorial:"},
        {"how to calculate the sum of series", "Enter the number of terms you need to calculate."}
    };

    string lowercaseInput = input;
    transform(lowercaseInput.begin(), lowercaseInput.end(), lowercaseInput.begin(), ::tolower);

    auto it = responses.find(lowercaseInput);
    if (it != responses.end()) {
        return it->second;
    } else {
        return "type exit to leave if you do not have another question.";
    }
}

double calculateSeriesSum(int n, int type) {
    double sum = 0;
    switch (type) {
        case 1: // Sum of 1/n
            for (int i = 1; i <= n; ++i) {
                sum += 1.0 / i;
            }
            break;
        case 2: // Sum of 1 + 1/n
            for (int i = 1; i <= n; ++i) {
                sum += 1.0 + 1.0 / i;
            }
            break;
        case 3: // Sum of n^2
            for (int i = 1; i <= n; ++i) {
                sum += i * i;
            }
            break;
        case 4: // Sum of n + 1/n
            for (int i = 1; i <= n; ++i) {
                sum += i + (1.0 / i);
            }
            break;
        case 5: // Sum of sin(n)
            for (int i = 1; i <= n; ++i) {
                sum += sin(i);
            }
            break;
        case 6: // Sum of cos(n)
            for (int i = 1; i <= n; ++i) {
                sum += cos(i);
            }
            break;
    }
    return sum;
}

int main() {
    string userInput;
    cout << "AI: Hello! How can I help you?" << endl;
    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        string response = getResponse(userInput);
        if (userInput == "exit") {
            cout << "AI: Goodbye!" << endl;
            break;
        }
        cout << "AI: " << response << endl;
        if (userInput == "calculate the sum of 2 numbers") {
            sum();
        } else if (userInput == "calculate the factorial of a number") {
            factorial();
        } else if (userInput == "how to calculate the sum of series") {
            int n, type;
            cout<<"enter the type you wanna calculate :\n 1)sum of 1/n\n ";
            cout<<"2)sum of 1+1/n\n";
            cout<<"3)sum of n^2\n";
            cout<<"4)sum of n+ 1/n\n";
            cout<<"5)sum of cos(n)\n";
            cout<<"6)sum of sin(n)\n";
            cin >> type;
            cout << "Enter the number of terms you want to calculate : \n";
            cin >> n;





            double result = calculateSeriesSum(n, type);
            cout << "Sum of the series up to " << n << ": " << result << endl;
        }
    }
    return 0;
}
