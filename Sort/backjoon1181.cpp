/*알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
길이가 짧은 것부터
길이가 같으면 사전 순으로

입력
첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.

출력
조건에 따라 정렬하여 단어들을 출력한다. 단, 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다.
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(string a, string b)
{
    if(a.length()<b.length()) return true;
    else if(a.length()>b.length()) return false;
    else return a<b;
}

int main()
{

    int N;
    cin>>N;
    string str;
    vector<string> strV;

    for(int i=0; i<N; i++)
    {
        cin>>str;
        strV.push_back(str);
    }

    sort(strV.begin(), strV.end(), compare);

    for(unsigned long int i=0; i<strV.size(); i++){
        if( i>0 && strV[i] == strV[i-1]) continue;
        else cout<<strV[i]<<endl;
    }

    return 0;
}