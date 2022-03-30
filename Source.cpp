#include <iostream>
#include <string>

using namespace std;

struct movies {
	string title;
	int year = 0;
	string genre;
	int duration = 0;
	int price = 0;
}f1, f2;

void updateinfo(movies& f);
//Task 2
int expensive(movies& f1, movies& f2, movies& f3);
//Task 1
void showMovie(movies& f);
int main() {
	cout << "Task 1\n";
	f1 = { "Die Hard", 1988, "Action movies", 132, 420 };
	f2 = { "Die Hard 2", 1990, "Action movies", 124, 320 };
	movies f3 = { "Die Hard 3", 1995, "Action movies", 131, 350 };

	showMovie(f1);
	showMovie(f2);
	showMovie(f3);
	cout << "Task 2\n";
	cout << "The most expensive price: " << expensive(f1, f2, f3) << " rub." << endl;

	cout << "task 3\n";
	cout << "Choose which movie information you want to update:\n";
	cout << "1. Title;\n";
	cout << "2. Year;\n";
	cout << "3. Genre;\n";
	cout << "4. Duration;\n";
	cout << "5. Price;\nEnter the number from 1 to 5: ";
	updateinfo(f1);


	return 0;
}
void updateinfo(movies& f) {
	int a;
	cin >> a;
	switch (a) {
	case 1: {
		string title;
		cout << "Enter the new title: ";
		cin.ignore();
		getline(cin, title);
		f.title = title;
		showMovie(f1);
		break;
	}

	case 2: {
		int year;
		cout << "Enter the year: ";
		cin >> year;
		f.year = year;
		showMovie(f1);
		break;
	}
	case 3: {
		string genre;
		cout << "Enter the new genre: ";
		cin.ignore();
		getline(cin, genre);
		f.genre = genre;
		showMovie(f1);
		break;
	}
	case 4: {
		int duration;
		cout << "Enter the duration: ";
		cin >> duration;
		f1.duration = duration;
		showMovie(f1);
		break;
	}
	case 5: {
		int price;
		cout << "Enter the price: ";
		cin >> price;
		f1.price = price;
		showMovie(f1);
		break;
	}
	default:
		cout << "Error input!" << endl;

	}
}
//Task 2
int expensive(movies& f1, movies& f2, movies& f3)
{
	int price;
	if (f1.price >= f2.price && f1.price >= f3.price)
		price = f1.price;
	else
		if (f2.price >= f1.price && f2.price >= f3.price)
			price = f2.price;
		else
			price = f3.price;




	return price;
}
//Task 1
void showMovie(movies& f) {
	cout << "Movie: " << f.title << ", " << f.year << " year" << ", genre: " << f.genre << ", " << f.duration << " minutes, " << f.price << " rub." << endl;

}