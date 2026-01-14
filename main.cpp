#include <iostream>
#include <cmath> // Karekök (sqrt) fonksiyonu için gerekli
#include <clocale> // Türkçe karakter desteği için (isteğe bağlı)

using namespace std;

int main() {
    // Türkçe karakterleri konsolda düzgün göstermek için
    setlocale(LC_ALL, "Turkish");

    double a, b, c;
    double delta, x1, x2;

    cout << "--- İkinci Dereceden Denklem Kök Bulma Programı ---" << endl;
    cout << "Denklem Formu: ax^2 + bx + c = 0" << endl << endl;

    // 1. Katsayıların kullanıcıdan alınması
    cout << "a katsayısını giriniz: ";
    cin >> a;
    cout << "b katsayısını giriniz: ";
    cin >> b;
    cout << "c katsayısını giriniz: ";
    cin >> c;

    // 2. Diskriminant (Delta) Hesabı: b^2 - 4ac
    delta = (b * b) - (4 * a * c);

    cout << "\nDelta (Diskriminant): " << delta << endl;

    // 3. Delta durumuna göre köklerin kontrolü ve hesaplanması
    if (delta < 0) {
        // Delta < 0 ise gerçek kök yoktur
        cout << "Sonuç: Delta < 0 olduğu için denklemin gerçek (reel) kökü yoktur." << endl;
    }
    else if (delta == 0) {
        // Delta = 0 ise tek bir gerçek kök vardır (çakışık kök)
        x1 = -b / (2 * a);
        cout << "Sonuç: Delta = 0 olduğu için tek bir gerçek kök vardır." << endl;
        cout << "Kök (x): " << x1 << endl;
    }
    else {
        // Delta > 0 ise iki farklı gerçek kök vardır
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Sonuç: Delta > 0 olduğu için iki farklı gerçek kök vardır." << endl;
        cout << "Kök 1 (x1): " << x1 << endl;
        cout << "Kök 2 (x2): " << x2 << endl;
    }

    return 0;
}
