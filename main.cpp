/* NIM extractor: evaluate prodi, fakultas, and degree based on given string.
 * Author: Javier Fadel.
 * Modified: 3 Oct. 2022. */
#include <iostream>
#include <string>
using namespace std;

// TODO: string is array in c++?
// TODO: simplify all this mess.
// TODO: too many overkill switch (two case switch).
// TODO: convert string to char array?

// Main function.
int main() {
    // Variable declaration: dictionary.
    // These variables assigned first, later on defined a value based on the input.
    string nim, facultyValue, degreeValue, majorValue;

    // Display option: from faculty to major, to NIM format.
    cout << "Input Nilai Induk Mahasiswa \n";
    cout << "Format: [xxx.xxxx.xxxxx]\n";

    // Input NIM: should be a string value.
    cout << "Input NIM: \n";
    cin >> nim;

    // Convert first character to lower char: to prevent case sensitive input.
    char facultyCodeLower = tolower(nim[0]);

    // Evaluate option from string.
    switch (facultyCodeLower) {
        // First character: faculty.
        // First case: Fakultas Ilmu Komputer.
        case 'a':
            // Insert faculty value with defined variable above.
            // Second character: degree.
            facultyValue = "Fakultas Ilmu Komputer";
            switch (nim[1]) {
                case '1':
                    // Insert degree value with defined variable above.
                    // Third character: major.
                    degreeValue = "Sarjana";
                    switch (nim[2]) {
                        case '1':
                            // Insert major value with defined variable above.
                            majorValue = "Teknik Informatika";
                            break;
                        case '2':
                            majorValue = "Sistem Informasi";
                            break;
                        case '3':
                            majorValue = "Ilmu Komunikasi";
                            break;
                        case '4':
                            majorValue = "Desain Komunikasi Visual";
                            break;
                        default:
                            majorValue = "";
                            cout << "Karakter ketiga tidak valid.\n";
                            break;
                    }
                    break;

                case '2':
                    degreeValue = "Diploma";
                    switch (nim[2]) {
                        case '1':
                            majorValue = "Teknik Informatika";
                            break;
                        case '2':
                            majorValue = "Film dan Televisi";
                            break;
                        default:
                            majorValue = "";
                            cout << "Karakter ketiga tidak valid.\n";
                    }
                    break;

                default:
                    degreeValue = "";
                    cout << "Karakter kedua tidak valid.\n";
                    break;
            }
            break;

        // Second case: Fakultas Ekonomi dan Bisnis.
        case 'b':
            facultyValue = "Fakultas Ekonomi dan Bisnis";
            // Only one value: this faculty doesn't have a diploma program.
            if (nim[1] == '1') {
                degreeValue = "Sarjana";
                switch (nim[2]) {
                    case '1':
                        majorValue = "Akuntansi";
                        break;
                    case '2':
                        majorValue = "Manajemen";
                        break;
                    default:
                        majorValue = "";
                        cout << "Karakter ketiga tidak valid.\n";
                        break;
                }
            } else {
                degreeValue = "";
                cout << "Karakter kedua tidak valid.\n";
            }
            break;

        // Third case: Fakultas Ilmu Budaya.
        case 'c':
            facultyValue = "Fakultas Ilmu Budaya";
            // Only one value: this faculty doesn't have a diploma program.
            if (nim[1] == '1') {
                degreeValue = "Sarjana";
                switch (nim[2]) {
                    case '1':
                        majorValue = "Sastra Inggris";
                        break;
                    case '2':
                        majorValue = "Sastra Jepang";
                        break;
                    default:
                        majorValue = "";
                        cout << "Karakter ketiga tidak valid.\n";
                        break;
                }
            } else {
                degreeValue = "";
                cout << "Karakter kedua tidak valid.\n";
            }
            break;

        // Forth case: Fakultas Kesehatan.
        case 'd':
            facultyValue = "Fakultas Kesehatan";
            switch (nim[1]) {
                case '1':
                    degreeValue = "Sarjana";
                    switch (nim[2]) {
                        case '1':
                            majorValue = "Kesehatan Masyarakat";
                            break;
                        case '2':
                            majorValue = "Kesehatan Lingkungan";
                            break;
                        default:
                            break;
                    }
                    break;
                case '2':
                    degreeValue = "Diploma";
                    // Only one value: this faculty doesn't have a more diploma program.
                    if (nim[2] == '1') {
                        majorValue = "Rekam Medis dan Informasi Kesehatan";
                    } else {
                        majorValue = "";
                        cout << "Karakter ketiga tidak valid.\n";
                    }
                    break;
                default:
                    degreeValue = "";
                    cout << "Karakter kedua tidak valid.\n";
                    break;
            }
            break;

        // Fifth case: Fakultas Teknik.
        case 'e':
            facultyValue = "Fakultas Teknik";
            // Only one value: this faculty doesn't have a diploma program.
            if (nim[1] == '1') {
                degreeValue = "Sarjana";
                switch (nim[2]) {
                    case '1':
                        majorValue = "Teknik Elektro";
                        break;
                    case '2':
                        majorValue = "Teknik Industri";
                        break;
                    case '3':
                        majorValue = "Teknik Biomedis";
                        break;
                    default:
                        majorValue = "";
                        cout << "Karakter ketiga tidak valid.\n";
                        break;
                }
            } else {
                degreeValue = "";
                cout << "Karakte kedua tidak valid.\n";
            }
            break;
        default:
            cout << "NIM tidak valid\n";
            break;
    }

    // Display data: data should defined on every category.
    cout << "Anda adalah Mahasiswa " << facultyValue
            << ", Program " << degreeValue
            << ", Jurusan " << majorValue << ".\n";

    return 0;
}
