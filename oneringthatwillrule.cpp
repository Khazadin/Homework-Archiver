#include <iostream>
using namespace std;
void framearray()
{
    int framelength = 10;
    int framesayisi[framelength];
    int kukadeneme0[2];
    int kukadeneme1[2];
    int kukadeneme2[2];
    int kukadeneme3[2];
    int kukadeneme4[2];
    int kukadeneme5[2];
    int kukadeneme6[2];
    int kukadeneme7[2];
    int kukadeneme8[2];
    int kukadeneme9[2];
    int kukadeneme10[2];
    int kukadeneme11[2];
    int kukatoplam;
    int kukatoplam1;
    int kukatoplam2;
    int kukatoplam3;
    int kukatoplam4;
    int kukatoplam5;
    int kukatoplam6;
    int kukatoplam7;
    int kukatoplam8;
    int kukatoplam9;
    int kukatoplam10;
    int kukatoplam11;
    int sum;
    cout << "1. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme0[i];
    }
    cout << "2. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme1[i];
    }
    cout << "3. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme2[i];
    }
    cout << "4. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme3[i];
    }
    cout << "5. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme4[i];
    }
    cout << "6. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme5[i];
    }
    cout << "7. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme6[i];
    }
    cout << "8. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme7[i];
    }
    cout << "9. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme8[i];
    }
    cout << "10. frame degerlerini giriniz" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> kukadeneme9[i];
    }

    if (kukadeneme9[0] + kukadeneme9[1] == 10 && kukadeneme9[0] != 10 && kukadeneme9[1] != 10)
    {
        framelength++;
    }
    else if (kukadeneme9[0] == 10 || kukadeneme9[1] == 10)
    {
        framelength = framelength + 2;
    }
    else
    {
        cout << "";
    }
    if (framelength == 11)
    {
        cout << "11. frame degerlerini giriniz" << endl;
        for (int i = 0; i < 2; i++)
        {
            cin >> kukadeneme10[i];
        }
    }
    if (framelength == 12)
    {
        cout << "11. frame degerlerini giriniz" << endl;
        for (int i = 0; i < 2; i++)
        {
            cin >> kukadeneme10[i];
        }
        cout << "12. frame degerlerini giriniz" << endl;
        for (int i = 0; i < 2; i++)
        {
            cin >> kukadeneme11[i];
        }
    }
    kukatoplam = kukadeneme0[0] + kukadeneme0[1];
    framesayisi[0] = kukatoplam;
    kukatoplam1 = kukadeneme1[0] + kukadeneme1[1];
    framesayisi[1] = kukatoplam1;
    kukatoplam2 = kukadeneme2[0] + kukadeneme2[1];
    framesayisi[2] = kukatoplam2;
    kukatoplam3 = kukadeneme3[0] + kukadeneme3[1];
    framesayisi[3] = kukatoplam3;
    kukatoplam4 = kukadeneme4[0] + kukadeneme4[1];
    framesayisi[4] = kukatoplam4;
    kukatoplam5 = kukadeneme5[0] + kukadeneme5[1];
    framesayisi[5] = kukatoplam5;
    kukatoplam6 = kukadeneme6[0] + kukadeneme6[1];
    framesayisi[6] = kukatoplam6;
    kukatoplam7 = kukadeneme7[0] + kukadeneme7[1];
    framesayisi[7] = kukatoplam7;
    kukatoplam8 = kukadeneme8[0] + kukadeneme8[1];
    framesayisi[8] = kukatoplam8;
    kukatoplam9 = kukadeneme9[0] + kukadeneme9[1];
    framesayisi[9] = kukatoplam9;
    if (framelength == 11)
    {
        kukatoplam10 = kukadeneme10[0] + kukadeneme10[1];
        framesayisi[10] = kukatoplam10;
    }
    if (framelength == 12)
    {
        kukatoplam10 = kukadeneme10[0] + kukadeneme10[1];
        framesayisi[10] = kukatoplam10;

        kukatoplam11 = kukadeneme11[0] + kukadeneme11[1];
        framesayisi[11] = kukatoplam11;
    }
    sum = framesayisi[0] + framesayisi[1] + framesayisi[2] + framesayisi[3] + framesayisi[4] + framesayisi[5] + framesayisi[6] + framesayisi[7] + framesayisi[8] + framesayisi[9];
    if (framelength == 11)
    {
        sum = framesayisi[0] + framesayisi[1] + framesayisi[2] + framesayisi[3] + framesayisi[4] + framesayisi[5] + framesayisi[6] + framesayisi[7] + framesayisi[8] + framesayisi[9] + framesayisi[10];
    }
    if (framelength == 12)
    {
        sum = framesayisi[0] + framesayisi[1] + framesayisi[2] + framesayisi[3] + framesayisi[4] + framesayisi[5] + framesayisi[6] + framesayisi[7] + framesayisi[8] + framesayisi[9] + framesayisi[10] + framesayisi[11];
    }
    cout << "Frame 1: " << kukadeneme0[0] << " " << kukadeneme0[1] << endl;
    cout << "Frame 2: " << kukadeneme1[0] << " " << kukadeneme1[1] << endl;
    cout << "Frame 3: " << kukadeneme2[0] << " " << kukadeneme2[1] << endl;
    cout << "Frame 4: " << kukadeneme3[0] << " " << kukadeneme3[1] << endl;
    cout << "Frame 5: " << kukadeneme4[0] << " " << kukadeneme4[1] << endl;
    cout << "Frame 6: " << kukadeneme5[0] << " " << kukadeneme5[1] << endl;
    cout << "Frame 7: " << kukadeneme6[0] << " " << kukadeneme6[1] << endl;
    cout << "Frame 8: " << kukadeneme7[0] << " " << kukadeneme7[1] << endl;
    cout << "Frame 9: " << kukadeneme8[0] << " " << kukadeneme8[1] << endl;
    cout << "Frame 10: " << kukadeneme9[0] << " " << kukadeneme9[1] << endl;
    if (framelength == 11)
    {
        cout << "Frame 11: " << kukadeneme10[0] << " " << kukadeneme10[1] << endl;
    }
    if (framelength == 12)
    {
        cout << "Frame 11: " << kukadeneme10[0] << " " << kukadeneme10[1] << endl;
        cout << "Frame 12: " << kukadeneme11[0] << " " << kukadeneme11[1] << endl;
    }
    cout << "Toplam skor : " << sum << "! ";
}

int main()
{
    int choose;
    cout << "*****************" << endl
         << "Projeyi seciniz : " << endl
         << "*******************" << endl;
    // projeler
    cout << "1-Bowling Uygulamasi" << endl
         << " " << endl
         << "*******************";
    cin >> choose;
    switch (choose)
    {
    case 1:
        framearray();
        break;

    default:
        break;
    }
}
