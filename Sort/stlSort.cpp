#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


class Student {
public:
	string name;
	int score;

	//생성자
	Student(string Name, int Score) : name(Name), score(Score) { }

	bool operator < (Student &student) {
		return this->score < student.score;
	}
};

bool compare(Student a, Student b)
{
	return a.score<b.score;
}

int main()
{
	Student students[] = {
		Student("임서완", 100),
		Student("김진우", 90),
		Student("임호준", 80),
		Student("슈퍼맨", 95),
		Student("배트맨", 97)
	};

	sort(students, students + 5, compare);
	for (int i = 0; i<5; i++)
	{
		cout << students[i].name << ' ';
	}

	return 0;
}