[Uploading README.md.txt…]()
# BEE208_Simple-Payroll-Management-System
Simple Payroll Management System develop using C++ for BEE208 Programming Project
Simple Payroll Management System
BEE 208 – C++ Programming
Accra Technical University
Faculty of Engineering
Department of Electrical/Electronic Engineering
 
Project Information
•	Course Code: BEE 208
•	Course Title: C++ Programming
•	Project: Mid-Semester Practical Project (Non-Technical Project Question 6)
•	Project Title: Simple Payroll Management System
•	Lecturer: Douglas Ayitey
•	Student: Group 1.1
 
Project Description
The Simple Payroll Management System is a C++ application developed to automate employee payroll processing. The program accepts employee details, calculates gross salary and net salary, validates user input, determines payment status, displays payroll information, and saves payroll records into a text file (payroll_report.txt).
The project demonstrates the practical application of Object-Oriented Programming (OOP) concepts and file handling in C++.
 
Problem Statement
Many organizations still calculate salaries manually using notebooks or calculators. Manual payroll processing can lead to incorrect calculations, delays, and poor record keeping. This project provides a computerized solution that improves accuracy, efficiency, and payroll record management.
 
Aim
To design and implement a Simple Payroll Management System in C++ that accurately calculates employee salaries, validates payroll data, determines payment status, and generates payroll reports.
 
Objectives
•	Enter employee information.
•	Calculate Gross Salary.
•	Calculate Net Salary.
•	Validate payroll inputs.
•	Determine employee payment status.
•	Display payroll reports.
•	Save payroll records to payroll_report.txt.
•	Demonstrate Object-Oriented Programming concepts in C++.
 
Formula Used
Gross Salary
Gross Salary = Basic Salary + Allowance
Net Salary
Net Salary = Gross Salary - Deduction
 
Decision Rule
•	If Deduction > Gross Salary, the salary status is Review Required.
•	Otherwise, the salary status is Ready for Payment.
 
C++ Concepts Used
•	Classes and Objects
•	Member Functions
•	Variables and Data Types
•	Input and Output (cin, cout)
•	Conditional Statements (if, else)
•	Loops (for)
•	Vectors
•	File Handling (ofstream)
•	Arithmetic Operators
•	Input Validation
 
Project Files
BEE208-Simple-Payroll-Management-System/
│── main.cpp
│── README.md
│── algorithm.txt
│── pseudocode.txt
│── payroll_report.txt
│── flowchart.png
│── flowchart.pdf
│── BEE208_Simple_Payroll_Report.docx
│── BEE208_Simple_Payroll_Presentation.pptx
 
How to Compile
Using g++:
g++ main.cpp -o payroll
Run the program:
./payroll
For Windows:
payroll.exe
 
Sample Output
SIMPLE PAYROLL MANAGEMENT SYSTEM

Employee ID      : EMP001
Employee Name    : Ama Mensah
Department       : Administration

Gross Salary     : GHS 2800.00
Net Salary       : GHS 2650.00

Status           : Ready for Payment

Payroll report saved successfully.
 
Challenges Encountered
•	Validating invalid salary entries.
•	Organizing payroll records using classes.
•	Saving payroll information to a text file.
•	Processing multiple employee records efficiently.
 
Solutions
•	Implemented input validation.
•	Used Object-Oriented Programming principles.
•	Applied file handling using ofstream.
•	Used vectors and loops to manage multiple employees.
 
Group Contribution
Student	Suggested Role
Student 1	Project Lead
Student 2	Algorithm Writer
Student 3	Pseudocode Writer
Student 4	Flowchart Designer
Student 5	C++ Programmer
Student 6	C++ Programmer
Student 7	Testing Lead
Student 8	GitHub Manager
Student 9	Documentation Lead
Student 10	Presentation Lead
 
Author
Group 1.1
BTech Electrical and Electronic Engineering
Accra Technical University
 
License
This project was developed solely for academic purposes as part of the BEE 208 C++ Programming Mid-Semester Practical Project.

