#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#if 0
int main()
{

    vector<pair<string, int>> students;
    students.push_back(pair<string, int>("임서완", 100));
    students.push_back(pair<string, int>("김진우", 90));
    students.push_back(pair<string, int>("임호준", 80));
    students.push_back(pair<string, int>("슈퍼맨", 95));
    students.push_back(pair<string, int>("배트맨", 97));

    sort(students.begin(), students.end());
    for(int i=0; i<students.end();i++)
        cout<<students[i].first<<' ';

	return 0;
}
#endif

/* Question
학생을 나타낼 수 있는 정보가 이름, 성적, 생년월일일 때 학생을 성적 순서대로 나열하고자 한다.
다만 성적이 동일한 경우 나이가 더 어린 학생이 더 우선순위가 높다.

<학생명단>

학생 1: 임서완/100점/20210601
학생 2: 김진우/90점/19921204
학생 3: 임호준/80점/19891029
학생 4: 슈퍼맨/95점/19801225
학생 5: 배트맨/95점/19811230
*/
bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
{
    if(a.second.first == b.second.first)
    {
        return a.second.second > b.second.second;
    }
    else{
        return a.second.first > a.second.second;
    }
}

int main()
{
    vector<pair<string, pair<int, int>>> students;
    students.push_back(pair<string, pair<int, int>>("임서완",make_pair(100,20210601)));
    students.push_back(pair<string, pair<int, int>>("김진우",make_pair(90,19921204)));
    students.push_back(pair<string, pair<int, int>>("임호준",make_pair(80,19891029)));
    students.push_back(pair<string, pair<int, int>>("슈퍼맨",make_pair(95,19801225)));
    students.push_back(pair<string, pair<int, int>>("배트맨",make_pair(95,19811230)));

    sort(students.begin(), students.end(), compare);
    for(int i = 0; i<students.size(); i++ )
    {
        cout<<students[i].first<<" ";
    }

    return 0;
}
