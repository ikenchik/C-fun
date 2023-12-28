#include <iostream>

using namespace std;

class Dance {
private:
    std::string branchName;
    std::string teacherName;
    int amount;
    int discount;
    bool hasPromo;
public:
    // конструктор
    Dance(string d_branchName, string d_teacherName, int d_amount, int d_discount, bool d_hasPromo) {
        branchName = d_branchName;
        teacherName = d_teacherName;
        amount = d_amount;
        discount = d_discount;
        hasPromo = d_hasPromo;
    }
    // 1 функция
    void workingMode() {
        cout << "Расписание:" << endl;
        string workingHours[7]{ "Пн: 09.00 - 21.00", "Вт: 09.00 - 21.00", "Ср: 09.00 - 21.00", "Чт: 09.00 - 21.00",
        "Пт: 09.00 - 21.00", "Сб: 10.00 - 22.00" , "Вс: 10.00 - 19.00" };
        for (int i = 0; i < 7; i++)
        {
            cout << workingHours[i] << endl;
        }
    };
    // 2 функция
    void discoun() {
        cout << "Сумма пополнения: " << amount << endl;
        if (hasPromo) {
            cout << "Цена абонемента со скидкой: " << (3000 - (3000 / 100 * discount)) << endl;
        }
        else {
            cout << "К сожалению, промокод отсутствует" << endl;
        }
    };
    // 3 функция
    void coach() {
        cout << "К сожалению, выбор тренера не доступен, в данном филиале преподает только: " << teacherName << endl;
    };
    //4 функция
    void br() {
        cout << "Вы выбрали филиал: " << branchName << endl;
    }
    // 5 функция
    void price() {
        cout << "Стоимость месячного абонемента: 3000" << endl;
        if (hasPromo) {
            if (amount >= (3000 - (3000 / 100 * discount))) {
                cout << "Абонемент успешно куплен!" << endl;
            }
            else {
                cout << "На счете недостаточно средств для оплаты абонемента" << endl;
            }
        }
        else if (amount < 3000) {
            cout << "На счете недостаточно средств для оплаты абонемента" << endl;
        }
        else {
            cout << "Абонемент успешно куплен!" << endl;
        }
    };
};
int main() {
    setlocale(LC_ALL, "RUS");
    // 4 объекта класса Dance(user_1, и т.д)
    //данные в аргументе
    Dance user_1("Фрязино", "Иван", 2500, 20, true);
    Dance user_2("Щелково", "Юлия", 3000, 20, false);
    Dance user_3("Лосино-Петровский", "Илья", 1500, 20, false);
    Dance user_4("Монино", "Ксения", 1700, 40, true);

    //вызов функций для объектов класса Dance
    user_1.br();
    user_1.workingMode();
    user_1.coach();
    user_1.discoun();
    user_1.price();

    user_2.br();
    user_2.workingMode();
    user_2.coach();
    user_2.discoun();
    user_2.price();

    user_3.br();
    user_3.workingMode();
    user_3.coach();
    user_3.discoun();
    user_3.price();

    user_4.br();
    user_4.workingMode();
    user_4.coach();
    user_4.discoun();
    user_4.price();
    return 0;
}