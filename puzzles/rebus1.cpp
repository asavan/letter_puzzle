#include "rebus1.h"
#include "../solver/solver.h"
#include <map>
#include <functional>

// ��������� ����� udar + udar = draka

void udar()
{
    solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "udar", "draka" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=35 ������ � � = �������

void buketik()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "cvetok", "v", "buketik" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=69 - ���^2=������

void futbol()
{
    solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "gol", "futbol" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=37

void gorod()
{
    solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1); }, { "raion", "gorod" });
}


// http://rebus1.com/index.php?item=rebusx&rebus=12 �����+�����+�����=�����

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
    solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "���", "������" });
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
    solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "����", "���", "������" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=28
void games()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "base", "ball", "games" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=30
void arbuzy()
{
    solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "����", "�����", "������" });
}

// http://rebus1.com/index.php?item=rebusx&rebus=31
void fizika()
{
    solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "lirik", "fizika" });
}

namespace {
    std::map<int, std::function<void()>> funcs = {
        {31, fizika },
        {32, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1); }, { "����", "����" }); } },
        {33, []() {solve([](const Resolver& r) { return r.w(0) * 7 == r.w(1); }, { "�����", "�����" }); } },
        {34, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "�����", "����", "������", "������"}); }},
        {35, []() {solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2); }, { "������", "�", "�������"}); }},
        {36, []() {solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1); }, { "���", "������"}); }},
        {37, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1); }, { "�����", "�����"}); }},
        {38, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "�����", "������"}); }},
        {39, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1); }, { "�����", "�����"}); }},
        {40, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "������", "�����", "������", "������"}); }},
        {41, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "�����", "����", "����", "������"}); }},
        {45, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1); }, { "�����", "������"}); }},
        {46, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1); }, { "�����", "�����"}); }},
        {47, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3);  }, { "ab", "bc", "ca", "abc"}); }},
        {48, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1);  }, { "abcde", "edcba"}); }},
        {49, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "da", "eda"}); }},
        {50, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "������", "������"}); }},
        {51, []() {solve([](const Resolver& r) { return r.w(0) * 2 + r.w(1) == r.w(2);  }, { "�����", "�������", "�������"}); }},
        {52, []() {solve([](const Resolver& r) { return r.w(0) * 7 == r.w(1);  }, { "�����", "�����"}); }},
        {53, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "������", "������"}); }},
        {54, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2);  }, { "eat", "that", "apple"}); }},
        {55, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2);  }, { "black", "green", "orange"}); }},
        {57, []() {solve([](const Resolver& r) { return (int)std::pow(r.w(0), r.w(2)) == r.w(1);  }, { "�", "�����", "�"}); }},
        {58, []() {solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1);  }, { "���", "�����" }); }},
        {60, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "����", "�����" }); }},
        {61, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "������", "�����", "����", "������"}); }},
        {62, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "����", "�����", "������"}); }},
        {63, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "����", "����", "�����", "������"}); }},
        {64, []() {solve([](const Resolver& r) { return (int)std::pow(r.w(0), r.w(1)) == r.w(2);  }, { "�", "��", "����"}); }},
        {65, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "����", "����" }); }},
        {66, []() {solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2);  }, { "�����", "�", "������"}); }},
        {67, []() {solve([](const Resolver& r) { return r.w(0) * r.w(1) == r.w(2);  }, { "�����", "�", "�����"}); }},
        {72, []() {solve([](const Resolver& r) { return r.w(0) * 5 == r.w(1);  }, { "������", "������"}); }},
        {73, []() {solve([](const Resolver& r) { return r.w(0) * 7 == r.w(1);  }, { "������", "������"}); }},
        {77, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "�����", "�����"}); }},
        {78, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) + r.w(2) == r.w(3); }, { "��", "����", "����", "�����"}); }},
        {79, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "������", "����", "������"}); }},
        {80, []() {solve([](const Resolver& r) {
            return (r.w(0) + r.w(1) == r.w(2) - r.w(1)) && (r.w(0) + r.w(1) == r.w(3) * r.w(1)) && (r.w(0) + r.w(1) == r.w(4) - r.w(5)) && (r.w(0) + r.w(1) == r.w(6));
            }, { "�", "�", "�", "�", "�", "�", "a"}); }},
        {81, []() {solve([](const Resolver& r) { return r.w(0) * 8 == r.w(1);  }, { "�����", "�����"}); }},
        {82, []() {solve([](const Resolver& r) { return r.w(0) * r.w(0) == r.w(1);  }, { "��", "����"}); }},
        {83, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "�����", "������"}); }},
        {84, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1);  }, { "�����", "�����"}); }},
        {85, []() {solve([](const Resolver& r) { return r.w(0) * 9 == r.w(1);  }, { "������", "�������"}); }},
        {86, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "�����", "�����"}); }},
        {87, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "����", "�����"}); }},
        {88, []() {solve([](const Resolver& r) { return r.w(0) + r.w(1) == r.w(2); }, { "������", "������", "�������"}); }},

        {90, []() {solve([](const Resolver& r) {
            return (r.w(0) * r.w(1) == r.w(2) - r.w(3)) && (r.w(0) * r.w(1) * r.w(5) == r.w(4)) && (r.w(0) * r.w(1) == r.w(6) - r.w(2)) && (r.w(0) * r.w(1) * r.w(0) == r.w(7));
            }, { "�", "�", "�", "�", "�", "�", "�", "�"}); }},

        {91, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "�����", "������"}); }},
        {92, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1);  }, { "�����", "������"}); }},
        {-130, []() {solve([](const Resolver& r) { return r.w(0) * 2 + r.w(1) == r.w(2) && r.w(3) == 3;  }, { "�����", "��", "�����", "�"}); }},
        {-131, []() {solve([](const Resolver& r) { return r.w(0) * 3 == r.w(1);  }, { "���", "����"}); }},
        {-132, []() {solve([](const Resolver& r) { return r.w(0) * 6 == r.w(1);  }, { "����", "�����"}); }},
        {-133, []() {solve([](const Resolver& r) { return r.w(0) * 4 == r.w(1);  }, { "������", "�������"}); }},
        {-134, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "������", "������"}); }},
        {-135, []() {solve([](const Resolver& r) { return r.w(0) * 2 == r.w(1);  }, { "������", "������"}); }},
    };
}

void rebus1(int num) {
    funcs[num]();
}

void rebus1_last() {
    funcs.rbegin()->second();
}
