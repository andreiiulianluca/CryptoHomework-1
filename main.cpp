#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

using namespace std::chrono;
using namespace std;
int frequency[26];
int key[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

char inttochar(int number) {
    switch (number) {
        default:
            return '*';
        case 0:
            return 'A';
        case 1:
            return 'B';
        case 2:
            return 'C';
        case 3:
            return 'D';
        case 4:
            return 'E';
        case 5:
            return 'F';
        case 6:
            return 'G';
        case 7:
            return 'H';
        case 8:
            return 'I';
        case 9:
            return 'J';
        case 10:
            return 'K';
        case 11:
            return 'L';
        case 12:
            return 'M';
        case 13:
            return 'N';
        case 14:
            return 'O';
        case 15:
            return 'P';
        case 16:
            return 'Q';
        case 17:
            return 'R';
        case 18:
            return 'S';
        case 19:
            return 'T';
        case 20:
            return 'U';
        case 21:
            return 'V';
        case 22:
            return 'W';
        case 23:
            return 'X';
        case 24:
            return 'Y';
        case 25:
            return 'Z';
    }


}

char toUpper(char data) {
    if (data == 'a')
        return 'A';
    if (data == 'b')
        return 'B';
    if (data == 'c')
        return 'C';
    if (data == 'd')
        return 'D';
    if (data == 'e')
        return 'E';
    if (data == 'f')
        return 'F';
    if (data == 'g')
        return 'G';
    if (data == 'h')
        return 'H';
    if (data == 'i')
        return 'I';
    if (data == 'j')
        return 'J';
    if (data == 'k')
        return 'K';
    if (data == 'l')
        return 'L';
    if (data == 'm')
        return 'M';
    if (data == 'n')
        return 'N';
    if (data == 'o')
        return 'O';
    if (data == 'p')
        return 'P';
    if (data == 'q')
        return 'Q';
    if (data == 'r')
        return 'R';
    if (data == 's')
        return 'S';
    if (data == 't')
        return 'T';
    if (data == 'u')
        return 'U';
    if (data == 'v')
        return 'V';
    if (data == 'w')
        return 'W';
    if (data == 'x')
        return 'X';
    if (data == 'y')
        return 'Y';
    if (data == 'z')
        return 'Z';
}

char enkryption(char data) {
    if (data == 'A')
        return 'O';
    if (data == 'B')
        return 'P';
    if (data == 'C')
        return 'Q';
    if (data == 'D')
        return 'R';
    if (data == 'E')
        return 'S';
    if (data == 'F')
        return 'T';
    if (data == 'G')
        return 'U';
    if (data == 'H')
        return 'V';
    if (data == 'I')
        return 'W';
    if (data == 'J')
        return 'X';
    if (data == 'K')
        return 'Y';
    if (data == 'L')
        return 'Z';
    if (data == 'M')
        return 'A';
    if (data == 'N')
        return 'B';
    if (data == 'O')
        return 'C';
    if (data == 'P')
        return 'D';
    if (data == 'Q')
        return 'E';
    if (data == 'R')
        return 'F';
    if (data == 'S')
        return 'G';
    if (data == 'T')
        return 'H';
    if (data == 'U')
        return 'I';
    if (data == 'V')
        return 'J';
    if (data == 'W')
        return 'K';
    if (data == 'X')
        return 'L';
    if (data == 'Y')
        return 'M';
    if (data == 'Z')
        return 'N';
}

void frequencycalc(char data) {
    if (data == 'A')
        frequency[0]++;
    if (data == 'B')
        frequency[1]++;
    if (data == 'C')
        frequency[2]++;
    if (data == 'D')
        frequency[3]++;
    if (data == 'E')
        frequency[4]++;
    if (data == 'F')
        frequency[5]++;
    if (data == 'G')
        frequency[6]++;
    if (data == 'H')
        frequency[7]++;
    if (data == 'I')
        frequency[8]++;
    if (data == 'J')
        frequency[9]++;
    if (data == 'K')
        frequency[10]++;
    if (data == 'L')
        frequency[11]++;
    if (data == 'M')
        frequency[12]++;
    if (data == 'N')
        frequency[13]++;
    if (data == 'O')
        frequency[14]++;
    if (data == 'P')
        frequency[15]++;
    if (data == 'Q')
        frequency[16]++;
    if (data == 'R')
        frequency[17]++;
    if (data == 'S')
        frequency[18]++;
    if (data == 'T')
        frequency[19]++;
    if (data == 'U')
        frequency[20]++;
    if (data == 'V')
        frequency[21]++;
    if (data == 'W')
        frequency[22]++;
    if (data == 'X')
        frequency[23]++;
    if (data == 'Y')
        frequency[24]++;
    if (data == 'Z')
        frequency[25]++;
}

int main() {
    auto start = high_resolution_clock::now();
    int i;
    int maxim = 0, maxim2 = 0;
    char data, data2, data3;
    /*the clean-up of the plain-text*/
    ifstream input;
    ofstream output;
    input.open((R"(C:\Users\inqui\CLionProjects\Crypto1\plaintext)"));
    output.open(R"(C:\Users\inqui\CLionProjects\Crypto1\clean-text)");

    if (input.fail()) {
        output << "Error!";
    } else {
        while (input.get(data)) {
            if ((data >= 'A' && data <= 'Z') || (data >= 'a' && data <= 'z'))
                if (data >= 'a' && data <= 'z')
                    output << toUpper(data);
                else
                    output << data;
        }
    }
    input.close();
    output.close();

    /*encryption part*/
    ifstream cleantext;
    ofstream cryptotext;
    cleantext.open(R"(C:\Users\inqui\CLionProjects\Crypto1\clean-text)");
    cryptotext.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");

    if (cleantext.fail()) {
        cryptotext << "Error!";
    } else {
        while (cleantext.get(data)) {
            cryptotext << enkryption(data);
        }
    }
    cleantext.close();
    cryptotext.close();

    /*crytpo analysis*/
    ifstream cryptotext1;
    cryptotext1.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext1.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext1.get(data)) {
            frequencycalc(data);
        }
    }
    for (i = 1; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[4] = maxim;

    for (i = 1; i < 26; i++)
        if (frequency[i] > frequency[maxim2] && i != maxim)
            maxim2 = i;
    key[19] = maxim2;

    cout << "Because this is the most frequent symbol in our crypto text, the substitution of E is: "
         << inttochar(key[4]);
    cout << endl;
    cout << "Because this is the 2nd most frequent symbol in our crypto text, the substitution of T is: "
         << inttochar(key[19]);
    cout << endl;
    cryptotext1.close();

    /*we are doing the search for the most common digram in english: th*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext2;
    cryptotext2.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext2.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext2.get(data)) {
            if (data == inttochar(key[19])) {
                cryptotext2.get(data);
                frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[7] = maxim;
    cout << "Because TH is the most frequent bigram in our crypto text, the substitution of H is: "
         << inttochar(key[7]);
    cout << endl;
    cryptotext2.close();

    /*we are doing the search for the digram in english: ha*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext3;
    cryptotext3.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext3.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext3.get(data)) {
            if (data == inttochar(key[7])) {
                cryptotext3.get(data);
                if (data != inttochar(key[4]))
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[0] = maxim;
    cout << "Because HA is the most frequent bigram with H in the beggining after HE, the substitution of A is: "
         << inttochar(key[0]);
    cout << endl;
    cryptotext3.close();

    /*we are doing the search for the digram in english: an*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext4;
    cryptotext4.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext4.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext4.get(data)) {
            if (data == 'O') {
                cryptotext4.get(data);
                frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[13] = maxim;
    cout << "Because AN is the most frequent bigram with A in the beggining, the substitution of N is: "
         << inttochar(key[13]);
    cout << endl;
    cryptotext4.close();

    /*we are doing the search for the digram in english: er*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext5;
    cryptotext5.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext5.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext5.get(data)) {
            if (data == 'S') {
                cryptotext5.get(data);
                frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[17] = maxim;
    cout << "Because ER is the most frequent bigram with E in the beggining, the substitution of R is: "
         << inttochar(key[17]);
    cout << endl;
    cryptotext5.close();

    /*we are doing the search for the digram in english: nd*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext6;
    cryptotext6.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext6.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext6.get(data)) {
            if (data == 'B') {
                cryptotext6.get(data);
                frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[3] = maxim;
    cout << "Because ND is the most frequent bigram with N, the substitution of D is: "
         << inttochar(key[3]);
    cout << endl;
    cryptotext6.close();

    /*we are doing the search for the digram in english: to*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext7;
    cryptotext7.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext7.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext7.get(data)) {
            if (data == 'H') {
                cryptotext7.get(data);
                if (data != 'V')
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[14] = maxim;
    cout << "Because TO is the most frequent bigram with T in the beggining after TH, the substitution of O is: "
         << inttochar(key[14]);
    cout << endl;
    cryptotext7.close();

    /*we are doing the search for the digram in english: hi*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext8;
    cryptotext8.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext8.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext8.get(data)) {
            if (data == 'V') {
                cryptotext8.get(data);
                if (data != 'S' && data != 'O')
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[8] = maxim;
    cout << "Because HI is the most frequent bigram with H in the beggining after HA and HE, the substitution of I is: "
         << inttochar(key[8]);
    cout << endl;
    cryptotext8.close();

    /*we are doing the search for the digram in english: es*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext9;
    cryptotext9.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext9.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext9.get(data)) {
            if (data == 'S') {
                cryptotext9.get(data);
                if (data != 'F' && data != 'B' && data != 'R')
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[18] = maxim;
    cout
            << "Because ES is the most frequent bigram with E in the beggining after ER,EN and ED, the substitution of S is: "
            << inttochar(key[18]);
    cout << endl;
    cryptotext9.close();

    /*we are doing the search for the digram in english: ou*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext10;
    cryptotext10.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext10.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext10.get(data)) {
            if (data == 'C') {
                cryptotext10.get(data);
                if (data != 'B')
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[20] = maxim;
    cout << "Because OU is the most frequent bigram with O in the beggining after ON, the substitution of U is: "
         << inttochar(key[20]);
    cout << endl;
    cryptotext10.close();

    /*we are doing the search for the digram in english: ng*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext11;
    cryptotext11.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext11.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext11.get(data)) {
            if (data == 'B') {
                cryptotext11.get(data);
                if (data != 'R')
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[6] = maxim;
    cout << "Because NG is the most frequent bigram with N in the beggining after ND, the substitution of G is: "
         << inttochar(key[6]);
    cout << endl;
    cryptotext11.close();

    /*we are doing the search for the trigram in english: all*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext13;
    cryptotext13.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext13.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext13.get(data)) {
            if (data == 'O') {
                cryptotext13.get(data);
                cryptotext13.get(data2);
                if (data == data2)
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[11] = maxim;
    cout << "Because ALL is the most frequent trigram with A in the beggining, the substitution of L is: "
         << inttochar(key[11]);
    cout << endl;
    cryptotext13.close();

    /*we are doing the search for the trigram in english: was*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext14;
    cryptotext14.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext14.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext14.get(data)) {
            cryptotext14.get(data2);
            if (data2 == inttochar(key[0])) {
                cryptotext14.get(data3);
                if (data3 == inttochar(key[18]))
                    frequencycalc(data);
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[22] = maxim;
    cout << "Because WAS is the most frequent trigram with W in the beggining, the substitution of W is: "
         << inttochar(key[22]);
    cout << endl;
    cryptotext14.close();

    /*we are doing the search for the quadrigram in english: ever*/
    for (i = 0; i < 26; i++)
        frequency[i] = 0;
    ifstream cryptotext15;
    cryptotext15.open(R"(C:\Users\inqui\CLionProjects\Crypto1\crypto-text)");
    if (cryptotext15.fail()) {
        cryptotext << "Error!";
    } else {
        while (cryptotext15.get(data)) {
            if (data == inttochar(key[4])) {
                cryptotext15.get(data);
                cryptotext15.get(data2);
                if (data2 == inttochar(key[4])) {
                    cryptotext15.get(data3);
                    if (data3 == inttochar(key[17]))
                        frequencycalc(data);
                }
            }
        }
    }
    maxim = 0;
    for (i = 0; i < 26; i++)
        if (frequency[i] > frequency[maxim])
            maxim = i;
    key[21] = maxim;
    cout << "Because EVER is the most frequent quadrigram containing V, the substitution of V is: "
         << inttochar(key[21]);
    cout << endl;
    cryptotext15.close();

    for (i = 0; i < 26; i++)
        cout << inttochar(i) << " -> " << inttochar(key[i]) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() / 1000 << " milliseconds" << endl;
    return 0;
}