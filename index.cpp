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

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     const int SIZE = 15;
//     char name1[SIZE];
//     char name2[SIZE] = "C++programming";
//     cout << name2 << endl;
//     cout << "안녕하세요 저는" << name2;
//     cout << "입니다. 성함이 어떻게 되나요?" << endl;
//     cin >> name1;
//     cout << "음," << name1 << "씨 당신의 이름은 ";
//     cout << strlen(name1) << " 자 입니다만 \n";
//     cout << sizeof(name1) << " 바이트 크기의 배열에 저장되군요" << endl;
//     name2[3] = '\0';
//     cout << "제 이름의 첫 세 글자는" << name2 << "으로 시작합니다" << endl;

//     string blolb = "HERROW";
//     cout << blolb << endl;

//     return 0;
// }

// Day 3 - 3

// #include <iostream>
// using namespace std;

// int main()
// {
//     // struct Pizza
//     // {
//     //     string Dough;
//     //     string Cheese;
//     //     string Sauce;
//     // };
//     // Pizza Truffle = {
//     //     "Sour",
//     //     "Red Cheese",
//     //     "Tomato Sauce"};
//     // cout << Truffle.Dough << endl;

//     struct PizzaRecepies
//     {
//         string Dough;
//         string Cheese;
//         string Sauce;
//     };

//     PizzaRecepies Pizzas[3] = {
//         {"Sour", "String", "Tomato"},
//         {"Sweet", "Wet", "Barbecue"},
//         {"Spicy", "Dry", "Salt"},
//     };
//     cout << Pizzas[1].Dough << endl;
// }

// Day 4 - 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *a;
//     int b = 3;
//     a = &b;
//     cout << *a << endl;
//     *a = *a + 1;
//     cout << *a << endl;
// }

// DAY 5 - 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int *a; // a 라는 포인터 생성 됨
//     int b = 5; // b라는 변수에 5가 저장이 됨
//     a = &b; // a라는 포인터가 b의 메모리 위치를 가르키게 됨
//     cout << &b << endl; // b그니까 5의 메모리 위치는 0x7ffee79269b4
//     cout << a << endl; // a라는 포인터가 가르키고 있는 위치는 0x7ffee79269b4
//     cout << (a + 1) << endl; //a라는 포인터가 가르키고 있는 위치에 4바이트(int) 더하면 0x7ffee79269b8
//     cout << *(a + 1) << endl; // 포인터가 0x7ffee79269b4 가 아닌 0x7ffee79269b8를 가르킴으로 원하는 값이 없다.
// }

