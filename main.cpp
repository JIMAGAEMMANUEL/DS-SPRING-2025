#include <iostream>

using namespace std;

int main() {
    // Declare variables to store marks
    float assignment1, coursework1, midterm1, endofterm1;
    float assignment2, coursework2, midterm2, endofterm2;
    float assignment3, coursework3, midterm3, endofterm3;
    float average1, average2, average3, overallAverage;
    
    // Prompt the user to enter marks for each test in three subjects
    cout << "Enter marks for Physics (Assignment, Coursework, Midterm, End of Term): ";
    cin >> assignment1 >> coursework1 >> midterm1 >> endofterm1;
    
    cout << "Enter marks for Math (Assignment, Coursework, Midterm, End of Term): ";
    cin >> assignment2 >> coursework2 >> midterm2 >> endofterm2;
    
    cout << "Enter marks for Chemistry (Assignment, Coursework, Midterm, End of Term): ";
    cin >> assignment3 >> coursework3 >> midterm3 >> endofterm3;
    
    // Calculate the average for each subject
    average1 = (assignment1 + coursework1 + midterm1 + endofterm1) / 4;
    average2 = (assignment2 + coursework2 + midterm2 + endofterm2) / 4;
    average3 = (assignment3 + coursework3 + midterm3 + endofterm3) / 4;
    
    // Calculate the overall average
    overallAverage = (average1 + average2 + average3) / 3;
    
    // Display the averages
    cout << "The average marks for Physics: " << average1 << endl;
    cout << "The average marks for Math: " << average2 << endl;
    cout << "The average marks for Chemistry: " << average3 << endl;
    cout << "The overall average marks: " << overallAverage << endl;
    
    return 0;
}

