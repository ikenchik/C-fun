#include <iostream>

class Dance {
private:
    std::string branchName;
    std::string teacherName;
    int amount;
    int discount;
    bool hasPromo;
public:
    // конструктор
    Dance(std::string d_branchName, std::string d_teacherName, int d_amount, int d_discount, bool d_hasPromo) {
        branchName = d_branchName;
        teacherName = d_teacherName;
        amount = d_amount;
        discount = d_discount;
        hasPromo = d_hasPromo;
    }
    // 1 функция
    void workingMode() {
        std::cout << "Расписание:" << std::endl;
        std::string workingHours[7]{ "Пн: 09.00 - 21.00", "Вт: 09.00 - 21.00", "Ср: 09.00 - 21.00", "Чт: 09.00 - 21.00",
        "Пт: 09.00 - 21.00", "Сб: 10.00 - 22.00" , "Вс: 10.00 - 19.00" };
        for (int i = 0; i < 7; i++)
        {
            std::cout << workingHours[i] << std::endl;
        }
    };
    // 2 функция
    void discoun() {
        std::cout << "Сумма пополнения: " << amount << std::endl;
        if (hasPromo) {
            std::cout << "Цена абонемента со скидкой: " << (3000 - (3000 / 100 * discount)) << std::endl;
        }
        else {
            std::cout << "К сожалению, промокод отсутствует" << std::endl;
        }
    };
    // 3 функция
    void coach() {
        std::cout << "К сожалению, выбор тренера не доступен, в данном филиале преподает только: " << teacherName << std::endl;
    };
    //4 функция
    void br() {
        std::cout << "Вы выбрали филиал: " << branchName << std::endl;
    }
    // 5 функция
    void price() {
        std::cout << "Стоимость месячного абонемента: 3000" << std::endl;
        if (hasPromo) {
            if (amount >= (3000 - (3000 / 100 * discount))) {
                std::cout << "Абонемент успешно куплен!" << std::endl;
            }
            else {
                std::cout << "На счете недостаточно средств для оплаты абонемента" << std::endl;
            }
        }
        else if (amount < 3000) {
            std::cout << "На счете недостаточно средств для оплаты абонемента" << std::endl;
        }
        else {
            std::cout << "Абонемент успешно куплен!" << std::endl;
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