#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <limits>

using namespace std;

class EmployeePayroll
{
private:
    string employeeID;
    string employeeName;
    string department;

    double basicSalary;
    double allowance;
    double deduction;

    double grossSalary;
    double netSalary;

    string salaryStatus;

public:

    void setEmployeeDetails()
    {
        cout << "\nEnter Employee ID: ";
        cin >> employeeID;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Allowance: ";
        cin >> allowance;

        cout << "Enter Deduction: ";
        cin >> deduction;
    }

    bool validateDetails()
    {
        if (basicSalary < 0 || allowance < 0 || deduction < 0)
            return false;

        return true;
    }

    void calculateGrossSalary()
    {
        grossSalary = basicSalary + allowance;
    }

    void calculateNetSalary()
    {
        netSalary = grossSalary - deduction;
    }

    void checkSalaryStatus()
    {
        if (deduction > grossSalary)
            salaryStatus = "Review Required";
        else
            salaryStatus = "Ready for Payment";
    }

    void displayPayrollReport()
    {
        cout << "\n----------------------------------------\n";
        cout << "Employee ID      : " << employeeID << endl;
        cout << "Employee Name    : " << employeeName << endl;
        cout << "Department       : " << department << endl;

        cout << fixed << setprecision(2);

        cout << "Basic Salary     : GHS " << basicSalary << endl;
        cout << "Allowance        : GHS " << allowance << endl;
        cout << "Deduction        : GHS " << deduction << endl;
        cout << "Gross Salary     : GHS " << grossSalary << endl;
        cout << "Net Salary       : GHS " << netSalary << endl;
        cout << "Status           : " << salaryStatus << endl;
        cout << "----------------------------------------\n";
    }

    void savePayrollReport(ofstream &file)
    {
        file << "----------------------------------------\n";
        file << "Employee ID      : " << employeeID << endl;
        file << "Employee Name    : " << employeeName << endl;
        file << "Department       : " << department << endl;
        file << fixed << setprecision(2);
        file << "Basic Salary     : GHS " << basicSalary << endl;
        file << "Allowance        : GHS " << allowance << endl;
        file << "Deduction        : GHS " << deduction << endl;
        file << "Gross Salary     : GHS " << grossSalary << endl;
        file << "Net Salary       : GHS " << netSalary << endl;
        file << "Status           : " << salaryStatus << endl;
        file << "----------------------------------------\n\n";
    }

    double getGrossSalary()
    {
        return grossSalary;
    }

    double getNetSalary()
    {
        return netSalary;
    }
};

int main()
{
    cout << "============================================\n";
    cout << "     SIMPLE PAYROLL MANAGEMENT SYSTEM\n";
    cout << "============================================\n";

    ofstream report("payroll_report.txt");

    if (!report)
    {
        cout << "Error creating payroll report file.\n";
        return 1;
    }

    int numberOfEmployees;

    cout << "\nEnter Number of Employees: ";
    cin >> numberOfEmployees;

    vector<EmployeePayroll> employees;

    double totalGrossSalary = 0.0;
    double totalNetSalary = 0.0;

    for (int i = 0; i < numberOfEmployees; i++)
    {
        cout << "\n========== Employee " << i + 1 << " ==========\n";

        EmployeePayroll employee;

        employee.setEmployeeDetails();

        if (!employee.validateDetails())
        {
            cout << "\nInvalid Payroll Record!\n";

            report << "Invalid Payroll Record!\n\n";

            continue;
        }

        employee.calculateGrossSalary();
        employee.calculateNetSalary();
        employee.checkSalaryStatus();

        employee.displayPayrollReport();

        employee.savePayrollReport(report);

        totalGrossSalary += employee.getGrossSalary();
        totalNetSalary += employee.getNetSalary();

        employees.push_back(employee);
    }

    cout << "\n============================================\n";
    cout << "PAYROLL SUMMARY\n";
    cout << "============================================\n";

    cout << fixed << setprecision(2);

    cout << "Total Employees Processed : "
         << employees.size() << endl;

    cout << "Total Gross Salary        : GHS "
         << totalGrossSalary << endl;

    cout << "Total Net Salary          : GHS "
         << totalNetSalary << endl;

    cout << "\nPayroll report saved successfully to payroll_report.txt\n";

    report << "============================================\n";
    report << "PAYROLL SUMMARY\n";
    report << "============================================\n";
    report << fixed << setprecision(2);
    report << "Total Employees Processed : "
           << employees.size() << endl;
    report << "Total Gross Salary        : GHS "
           << totalGrossSalary << endl;
    report << "Total Net Salary          : GHS "
           << totalNetSalary << endl;

    report.close();

    return 0;
}
