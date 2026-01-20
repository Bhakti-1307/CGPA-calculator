#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Function to calculate grade
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'O';
    else if (percentage >= 80) return 'A';
    else if (percentage >= 70) return 'A';
    else if (percentage >= 60) return 'B';
    else if (percentage >= 50) return 'B';
    else if (percentage >= 40) return 'C';
    else return 'F';
}

// Function to calculate CGPA
float calculateCGPA(float percentage) {
    return percentage / 9.5;
}

// Function to save result to file
void saveToFile(const string& name, float percentage, float cgpa, char grade) {
    ofstream file("results.txt", ios::app);
    file << fixed << setprecision(2);
    file << "Name: " << name
         << " | Percentage: " << percentage
         << "% | CGPA: " << cgpa
         << " | Grade: " << grade << endl;
    file.close();
}

// Main calculation function
void calculateResult() {
    string name;
    int subjects;

    cout << "\nEnter student name: ";
    cin.ignore();
    getline(cin, name);

    do {
        cout << "Enter number of subjects: ";
        cin >> subjects;
    } while (subjects <= 0);

    vector<float> marks(subjects);
    float totalMarks = 0;
    float maxMarks = subjects * 100;

    for (int i = 0; i < subjects; i++) {
        do {
            cout << "Enter marks for subject " << i + 1 << " (0-100): ";
            cin >> marks[i];
        } while (marks[i] < 0 || marks[i] > 100);

        totalMarks += marks[i];
    }

    float percentage = (totalMarks / maxMarks) * 100;
    float cgpa = calculateCGPA(percentage);
    char grade = calculateGrade(percentage);

    cout << fixed << setprecision(2);
    cout << "\n----- RESULT -----\n";
    cout << "Name       : " << name << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "CGPA       : " << cgpa << endl;
    cout << "Grade      : " << grade << endl;

    saveToFile(name, percentage, cgpa, grade);
    cout << "Thank you for using the CGPA Calculator!\n We have saved your result.\n";
}

// Menu-driven program
int main() {
    int choice;

    do {
        cout << "\n===== CGPA CALCULATOR MENU =====";
        cout << "\n1. Calculate my CGPA";
        cout << "\n2. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateResult();
                break;
            case 2:
                cout << "Have a nice day. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 2);

    return 0;
}
