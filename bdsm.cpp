#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> punishments;

void initializePunishments() {
    punishments.push_back("Отшлепать по заднице 10 раз");
    punishments.push_back("Носить кляп в течение 15 минут");
    punishments.push_back("Поклониться и целовать ноги Доминанту/Доминантки");
    punishments.push_back("Подать поднос с закусками в качестве штрафа");
    punishments.push_back("Исполнить стриптиз");
    punishments.push_back("Петь песню, исполняя эротический танец");
    punishments.push_back("Носить наручники в течение 20 минут");
    punishments.push_back("Прочитать стихотворение о своем покорении");
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    initializePunishments(); // инициализация наказаний

    cout << "Добро пожаловать в генератор наказаний BDSM!" << endl;
    cout << "Нажмите Enter для получения случайного наказания:" << endl;
    cin.get();

    int randomIndex = rand() % punishments.size();
    cout << "Ваше наказание: " << punishments[randomIndex] << endl;

    return 0;
}
