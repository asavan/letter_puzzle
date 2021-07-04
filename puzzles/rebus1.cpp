#include "rebus1.h"
#include "../solver/solver.h"
#include <map>
#include <functional>

// Разгадать ребус udar + udar = draka

void udar()
{
    solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "udar", "draka" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=35 ЦВЕТОК х В = БУКЕТИК

void buketik()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "cvetok", "v", "buketik" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=69 - ГОЛ^2=ФУТБОЛ

void futbol()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "gol", "futbol" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=37

void gorod()
{
    solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1); }, { "raion", "gorod" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=12 КНИГА+КНИГА+КНИГА=НАУКА

void nauka()
{
    solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "kniga", "nauka" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=123 nauka+u4eba=rabota

void rabota()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "nauka", "u4eba", "rabota" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=131
void dyry()
{
    solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "tri", "dyry" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=49
void eda()
{
    solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "da", "eda" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=14
void slovo()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "bit", "bajt", "slovo" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=16
void shest()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "dva", "tri", "west'" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=22
void chetyre()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "два", "четыре" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=23
void three()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "two", "three" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=24
void sixty()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) * 2 == r.w(2); }, { "forty", "ten", "sixty" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=25
void desyat()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "пять", "два", "десять" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=28
void games()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "base", "ball", "games" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=30
void arbuzy()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "люба", "любит", "арбузы" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=31
void fizika()
{
    solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "lirik", "fizika" });
}

namespace {
    std::map<int, std::function<void()>> funcs = {
        {31, fizika },
        {32, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1); }, { "аист", "стая" }); } },
        {33, []() {solve([](const Resolver& r) { return r.w(0) * 7 == r.w(1); }, { "сосна", "тайга" }); } },
        {34, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "алёнка", "иван", "козлик", "сказка"}); }},
        {35, []() {solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "цветок", "в", "букетик"}); }},
        {36, []() {solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "гол", "футбол"}); }},
        {37, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1); }, { "район", "город"}); }},
        {38, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "рюмка", "авария"}); }},
        {39, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "доска", "лодка"}); }},
        {40, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "корова", "трава", "доярка", "молоко"}); }},
        {41, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "атака", "удар", "удар", "нокаут"}); }},
        {45, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "ветка", "дерево"}); }},
        {46, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1); }, { "пешка", "дамка"}); }},
        {47, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3);  }, { "ab", "bc", "ca", "abc"}); }},
        {48, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1);  }, { "abcde", "edcba"}); }},
        {49, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "da", "eda"}); }},
        {50, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "синица", "птички"}); }},
        {51, []() {solve([](const Resolver& r) { return r.w(0) * 2 + r.w(1) == r.w(2);  }, { "синус", "косинус", "тангенс"}); }},
        {52, []() {solve([](const Resolver& r) { return r.w(0) * 7 == r.w(1);  }, { "хакер", "взлом"}); }},
        {53, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "четыре", "восемь"}); }},
        {54, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2);  }, { "eat", "that", "apple"}); }},
        {55, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2);  }, { "black", "green", "orange"}); }},
        {57, []() {solve([](const Resolver& r) { return (int)std::pow(r.w(0), r.w(2)) == r.w(1);  }, { "я", "семья", "с"}); }},
        {58, []() {solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1);  }, { "два", "число" }); }},
        {60, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "годы", "итоги" }); }},
        {61, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "корова", "ласка", "корм", "молоко"}); }},
        {62, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "лука", "лукич", "иванов"}); }},
        {63, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "нине", "тане", "грине", "привет"}); }},
        {64, []() {solve([](const Resolver& r) { return (int)std::pow(r.w(0), r.w(1)) == r.w(2);  }, { "о", "ко", "сила"}); }},
        {65, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "порт", "торг" }); }},
        {66, []() {solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2);  }, { "черти", "и", "солдат"}); }},
        {67, []() {solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2);  }, { "жизнь", "и", "наука"}); }},
        {72, []() {solve([](const Resolver& r) { return r.w(0) * 5 == r.w(1);  }, { "двести", "тысяча"}); }},
        {73, []() {solve([](const Resolver& r) { return r.w(0) * 7 == r.w(1);  }, { "пчелка", "жжжжжж"}); }},
        {77, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "слово", "песня"}); }},
        {78, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "аз", "буки", "веди", "буквы"}); }},
        {79, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "наташа", "тоня", "сестры"}); }},
        {80, []() {solve([](const Resolver& r) {
            return (r.w(0) + r.w(1) == r.w(2) - r.w(1)) && (r.w(0) + r.w(1) == r.w(3) * r.w(1)) && (r.w(0) + r.w(1) == r.w(4) - r.w(5)) && (r.w(0) + r.w(1) == r.w(6));
            }, { "г", "о", "л", "в", "м", "к", "a"}); }},
        {81, []() {solve([](const Resolver& r) { return r.w(0) * 8 == r.w(1);  }, { "буква", "слово"}); }},
        {82, []() {solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1);  }, { "уж", "удав"}); }},
        {83, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "вобла", "плотва"}); }},
        {84, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1);  }, { "буква", "слово"}); }},
        {85, []() {solve([](const Resolver& r) { return r.w(0) * 9 == r.w(1);  }, { "шепнул", "крикнул"}); }},
        {86, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "балет", "театр"}); }},
        {87, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "коза", "стадо"}); }},
        {88, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "магний", "тантал", "металлы"}); }},

        {90, []() {solve([](const Resolver& r) {
            return (r.w(0) * r.w(1) == r.w(2) - r.w(3)) && (r.w(0) * r.w(1) * r.w(5) == r.w(4)) && (r.w(0) * r.w(1) == r.w(6) - r.w(2)) && (r.w(0) * r.w(1) * r.w(0) == r.w(7));
            }, { "а", "р", "и", "ф", "м", "е", "т", "к"}); }},

        {91, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "сотня", "триста"}); }},
        {92, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1);  }, { "парус", "регата"}); }},
        {-130, []() {solve([](const Resolver& r) { return r.w(0) * 2 + r.w(1) == r.w(2) && r.w(3) == 3;  }, { "слово", "за", "драка", "з"}); }},
        {-131, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "три", "дыры"}); }},
        {-132, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1);  }, { "урок", "школа"}); }},
        {-133, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1);  }, { "стакан", "бутылка"}); }},
        {-134, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "кирпич", "стенка"}); }},
        {-135, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "ахинея", "чепуха"}); }},
    };
}

void rebus1(int num) {
    funcs[num]();
}

void rebus1_last() {
    funcs.rbegin()->second();
}
