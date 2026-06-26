#include <iostream>
using namespace std;

int main()
{
    char answer;
    int score = 0;

    cout << "===== SIMPLE QUIZ APP =====\n";

    // Question 1
    cout << "\nQ1. What is the capital of India?\n";
    cout << "A. Mumbai\nB. Delhi\nC. Kolkata\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B.\n";
    }

    // Question 2
    cout << "\nQ2. What is 2 + 2?\n";
    cout << "A. 3\nB. 4\nC. 5\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B.\n";
    }

    // Question 3
    cout << "\nQ3. Which is a programming language?\n";
    cout << "A. HTML\nB. CSS\nC. C++\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is C.\n";
    }

    // Final Score
    cout << "\n===== QUIZ FINISHED =====\n";
    cout << "Your Score = " << score << " out of 3\n";

    return 0;
}
