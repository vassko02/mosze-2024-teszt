#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // 'NELEMENTS' helyett 'N_ELEMENTS'
    
    std::cout << "1-100 ertekek duplazasa" << std::endl; // ' helyett " kell
    
    for (int i = 0; i < N_ELEMENTS; i++) // hibás a ciklus fejléce javítva
    {
        b[i] = i * 2;
    }
    
    for (int i = 0; i < N_ELEMENTS; i++) // i < N_ELEMENTS helyesen
    {
        std::cout << "Ertek: " << b[i] << std::endl; // Kiírja az értékeket is
    }    
    
    std::cout << "Atlag szamitasa: " << std::endl;
    
    int atlag = 0; // Az átlagot nulláról kell indítani
    
    for (int i = 0; i < N_ELEMENTS; i++) // ; helyett , javítva
    {
        atlag += b[i]; // Sor végi ; javítva
    }
    
    atlag /= N_ELEMENTS;
    
    std::cout << "Atlag: " << atlag << std::endl;
    
    delete[] b; // Felszabadítjuk a dinamikusan lefoglalt memóriát
    
    return 0;
}