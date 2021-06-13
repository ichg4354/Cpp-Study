 cout << "*********"
         << "문제 1 : 상품정보 입력 및 출력 "
         << "*********" << endl;
    inputData(name, price, quant);

    cout << "*********"
         << "문제 2 : 함수 overloading을 이용한 "
         << "*********" << endl;
    GetData(name);
    GetData(price);
    GetData(quant);

    DisplayData(name, price, quant);