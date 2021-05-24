#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

struct Students
{
	char name[20];
	char secname[20];
	int math;
	int phys;
	int inform;
	float avarage;
};

int main()
{
	setlocale(0, "Russian");

	int n = 0;
	float rem = 0;
	Students* List;
	ifstream fin("D:\\input_data.txt");
	if (!fin)
	{
		cout << "Помилка відкриття файлу для читання";
	
		return 0;
	}
	fin >> n;
	List = new Students[n];
	for (int i = 0; i < n; i++)
	{
		fin >> List[i].secname >> List[i].name >> List[i].math >> List[i].phys >> List[i].inform;
		cout << List[i].secname << " " << List[i].name << " " << List[i].math <<" " << List[i].phys <<" "<< List[i].inform<< endl;
		List[i].avarage = (float(List[i].math) + float(List[i].phys) + float(List[i].inform)) / 3;
		if (rem < List[i].avarage)
			rem = List[i].avarage;
	}
	cout << "\nНайуспішні студенти: \n";
	for (int i = 0; i < n; i++)
		if (List[i].avarage == rem)
			cout << List[i].secname << " " << List[i].name << endl;
	fin.close();
		
	return 0;
}
