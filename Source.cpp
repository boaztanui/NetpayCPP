#include <iostream>
using namespace std;

int main()
{
    float basicPay, sales, netPay;

    //BASIC PAY
    cout << "Please input your Basic Pay: ";
    cin >> basicPay;

    //SALES
    printf("Please input your Sales: ");
    cin >> sales;

    if (sales <= 10000) {
        //here the commission is 0. So no need of even doing that calculations
        netPay = basicPay;
        cout << "Your Net Pay is KSH" << netPay;
    }
    else if (sales <= 20000) {
        // ((basicPay*8)/100) is where we do the commission
        netPay = basicPay + ((sales * 8) / 100);
        cout << "Your Net Pay is KSH" << netPay;
    }
    else if (sales <= 50000) {
        netPay = basicPay + ((sales * 12) / 100);
        cout << "Your Net Pay is KSH" << netPay;
    }
    else {
        netPay = basicPay + ((sales * 17) / 100);
        cout << "Your Net Pay is KSH" << netPay;
    }

    return 0;
}
