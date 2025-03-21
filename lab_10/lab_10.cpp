#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Enterprise 
{
    string name;
    double profit;
    double salaryCosts;
};

bool compareByProfit(const Enterprise& a, const Enterprise& b)
{
    return a.profit > b.profit;
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    vector<Enterprise> enterprises = 
    {
        {"Підприємство А", 20000 , 5000 },
        {"Підприємство Б", 35000 , 8000 },
        {"Підприємство В", 15000 , 4000 },
		{"Підприємство Г", 45000 , 9000 },
		{"Підприємство Д", 25000 , 6000 },
		{"Підприємство Е", 30000 , 7000 },
		{"Підприємство Ж", 40000 , 10000 },
		{"Підприємство З", 50000 , 11000 },
		{"Підприємство І", 10000 , 3000 },
		{"Підприємство Ї", 35000 , 8000 }
    };

  
    cout << "Початковий звіт:\n";
    for (const auto& e : enterprises) 
    {
        cout << e.name << " | Прибуток: " << e.profit << " | Нарахування на зарплату: " << e.salaryCosts << endl;
    }

   
    sort(enterprises.begin(), enterprises.end(), compareByProfit);

   
    cout << "\n Три найбільш прибуткові підприємства:\n";
    for (size_t i = 0; i < 3 && i < enterprises.size(); ++i)
    {
        cout << enterprises[i].name << " | Прибуток: " << enterprises[i].profit << endl;
    }

   
}
