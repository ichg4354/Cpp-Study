// DAY1
// #include <iostream> //전처리 지시자

// using namespace std; //종결자 역할

// int main() // c++ 실행시킬 때 무조건 있어야 하는 함수 이름
// {
//     cout << "HELLO WORLD" << endl;
//     return 0;
// }

// DAY 2 - 1
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a; //변수의 선언
//     a = 3; //변수의 대입
//     int b = 5; //변수의 초기화
//     cout << "A: " << a << endl;
//     cout << "B: " << b << endl;
//     return 0;
// }

// DAY 2 - 2

// #include <iostream>
// #include <climits>

// using namespace std;

// int main()
// {
//     int n_int = INT_MAX;
//     short n_short = SHRT_MAX;
//     long n_long = LONG_MAX;
//     long long n_llong = LLONG_MAX;

//     cout << "int는 " << sizeof n_int << " 바이트이다" << endl;
//     cout << "이 바이트의 최댓값은" << n_int << endl;
//     return 0;
// }

// DAY 2 - 3
// #include <iostream>

// using namespace std;

// int main()
// {
//     const float PIE = 3.14; //상수 지정 (변하지 않는 수)
//     int r = 4;
//     float s = r * r * PIE;
//     cout << s << endl;
//     return 0;
// }

//DAY 2 - 4

// #include <iostream>
// using namespace std;

// int main(){
//     char a = 'M';
//     cout << int(a) << endl; // datatype(target) || (datatype)target 으로 강제적으로 데이터 타입 변경 가능
// 아니면 static_cast<type>(target) 도 사용 가능
//     return 0;
// }

// DAY 3 - 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     short listOne[] = {1, 2, 3};
//     cout << listOne << endl;

//     char word[] = {'h', 'e', 'l', 'l', 'o'};
//     cout << word << endl;

//     char word2[] = "HEOLLOW";
//     cout << word2 << endl;
//     return 0;
// }