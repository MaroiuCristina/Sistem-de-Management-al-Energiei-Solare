Sistem-de-Management-al-Energiei-Solare
Lucrare de licență

  Acest proiect reprezintă aplicația practică realizată pentru lucrarea de licență.
Sistemul utilizează o placă Arduino Mega pentru controlul orientării unui panou fotovoltaic pe o singură axă.
Detectarea direcției luminii se realizează cu doi senzori LDR, iar mișcarea panoului este efectuată de un servomotor SG90.
Arduino compară valorile citite de la senzori și comandă automat servomotorul astfel încât panoul să fie orientat către sursa de lumină.

Repository GitHub
https://github.com/MaroiuCristina/Sistem-de-Management-al-Energiei-Solare

Fișierele proiectului
- Codul sursă Arduino (.ino)
- Fișierul README

Pași de compilare
1. Se instalează Arduino IDE.
2. Se deschide fișierul `.ino`.
3. Se selectează placa.
4. Se selectează portul corespunzător.
5. Se compilează proiectul folosind butonul **Verify**.

Pași de instalare
1. Se conectează placa Arduino Mega la calculator prin USB.
2. Se încarcă programul pe placă folosind butonul **Upload**.
După încărcarea programului pe placa Arduino, aplicația pornește automat și controlează orientarea panoului fotovoltaic pe baza valorilor citite de la senzorii LDR.
