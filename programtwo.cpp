// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int marks1,marks2,marks3,marks4,marks5,total;
    float percentage;
    char grade;
    cout<<"Enter the marks for urdu subject=";
    cin>>marks1;
    cout<<"Enter the marks for Maths subject=";
    cin>>marks2;
    cout<<"Enter the marks for English subject=";
    cin>>marks3;
    cout<<"Enter the marks for arts subject=";
    cin>>marks4;
    cout<<"Enter the marks for programming subject=";
    cin>>marks5;
    cout<<"Enter total marks=";
    cin>>total;
    percentage = ((marks1+marks2+marks3+marks4+marks5)/(float)total)*100;
    if (percentage >= 90)
        grade = 'A+';
    else if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';
  cout << "\n----------- Report Card -----------\n";
    cout << left<<setw(12)<<"Subject" << setw(10) <<"Marks"<< endl;
    cout << "-----------------------------------\n";
 cout << left<<setw(12)<<"urdu" << setw(10)<<"marks1"<< endl;
 cout << left<<setw(12)<<"Maths" << setw(10)<<"marks2"<< endl;
 cout << left<<setw(12)<<"English" << setw(10)<<"marks3"<< endl;
 cout << left<<setw(12)<<"arts" << setw(10)<<"marks4"<< endl;
 cout << left<<setw(12)<<"programming" << setw(10)<<"marks5"<< endl; 
  cout << "-----------------------------------\n";
    cout << left << setw(12) << "Total" << setw(10) << total << endl;
    cout << left << setw(12) << "Percentage" << setw(10) << fixed << setprecision(2) << percentage << "%" << endl;
    cout << left << setw(12) << "Grade" << setw(10) << grade << endl; 
     string result = (percentage >= 50) ? "Pass" : "Fail";
    cout << left << setw(12) << "Result" << setw(10) << result << endl;
  
    return 0;
}