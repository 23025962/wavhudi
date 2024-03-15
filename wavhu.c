#include <iostream>

using namespace std;

double calculateMarkup (double merchandiseCost, double employeeSalary, double yearlyRent, double electricityCost, double desiredProfit){

double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;

double netProfit = totalExpenses * (1 + desiredProfit);

double markupPercentage = (netProfit / merchandiseCost) * 100;
return markupPercentage;
}

int main(){
double merchandiseCost, employeeSalary, yearlyRent, electicityCost, desiredProfit;

cout << "Enter the total cost of merchandise: $";
cin >> merchandiseCost;

cout << "Enter the yearly salary of employees (including your own): $";
cin >> employeeSalary;

cout << "Enter the yearly rent: $";
cin >>

cout << "Enter the estimated yearly electricity cost: $";
cin >> electicityCost;

desiredProfit = 0.10;

double markupPercentage = calculateMarkup(merchandiseCost, employeeSalary, yearlyRent, electicityCost, desiredProfit);

cout << "The merchandise should be marked up by approximately " << fixed << setprecision(2) << markupPercentage << "%";

return 0;
}
