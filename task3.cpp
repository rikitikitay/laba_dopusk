#include <iostream>
#include <cstdlib>

using namespace std;

struct Person1 {
        char fatherName[25];
        short height;
        bool isMarried;
        short weight;
        char surname[25];
        short age;
};
struct Person2 {
        short age;
        short height;
        short weight;
        char surname[25];
        char fatherName[25];
        bool isMarried;
};
struct Person1Packed {
        char fatherName[25];
        short height;
        bool isMarried;
        short weight;
        char surname[25];
        short age;
} __attribute__((packed));
struct Person2Packed {
        short age;
        short height;
        short weight;
        char surname[25];
        char fatherName[25];
        bool isMarried;
} __attribute__((packed));

int main () {
        struct Person1 Vadim;
        struct Person2 Oleg;
        struct Person1Packed Denis;
        struct Person2Packed Andrey;

        cout << "Vadim Oleg Denis Andrey" << endl 
        << &Vadim.fatherName << " " << &Oleg.age << " " << &Denis.fatherName << " " << &Andrey.age << endl
        << &Vadim.height << " " << &Oleg.height << " " << &Denis.height << " " << &Andrey.height << endl
        << &Vadim.isMarried << " " << &Oleg.weight << " " << &Denis.isMarried << " " << &Andrey.weight << endl
        << &Vadim.weight << " " << &Oleg.surname << " " << &Denis.weight << " " << &Andrey.surname << endl
        << &Vadim.surname << " " << &Oleg.fatherName << " " << &Denis.surname << " " << &Andrey.fatherName << endl
        << &Vadim.age << " " << &Oleg.isMarried << " " << &Denis.age << " " << &Andrey.isMarried << endl << endl;

        int sizePerson1 = sizeof(Vadim.fatherName) + sizeof(Vadim.surname) + sizeof(Vadim.age) + sizeof(Vadim.height) + sizeof(Vadim.weight) + sizeof(Vadim.isMarried);
        int realSizePerson1 = sizeof(Vadim);

        int sizePerson2 = sizeof(Oleg.fatherName) + sizeof(Oleg.surname) + sizeof(Oleg.age) + sizeof(Oleg.height) + sizeof(Oleg.weight) + sizeof(Oleg.isMarried);
        int realSizePerson2 = sizeof(Oleg);

        int sizePerson1Packed = sizeof(Denis.fatherName) + sizeof(Denis.surname) + sizeof(Denis.age) + sizeof(Denis.height) + sizeof(Denis.weight) + sizeof(Denis.isMarried);
        int realSizePerson1Packed = sizeof(Denis);

        int sizePerson2Packed = sizeof(Andrey.fatherName) + sizeof(Andrey.surname) + sizeof(Andrey.age) + sizeof(Andrey.height) + sizeof(Andrey.weight) + sizeof(Andrey.isMarried);
        int realSizePerson2Packed = sizeof(Andrey);

        cout << "size of Vadim in parts is " << sizePerson1 << endl;
        cout << "size of Vadim is " << realSizePerson1 << endl;
        cout << "size of Oleg in parts is " << sizePerson2 << endl;
        cout << "size of Oleg is " << realSizePerson2 << endl;
        cout << "size of Denis in parts is " << sizePerson1Packed << endl;
        cout << "size of Denis is " << realSizePerson1Packed << endl;
        cout << "size of Andrey in parts is " << sizePerson2Packed << endl;
        cout << "size of Andrey is " << realSizePerson2Packed << endl;
        system("pause");
}
