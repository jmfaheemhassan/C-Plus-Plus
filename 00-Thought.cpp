#include <iostream>

using namespace std;

int main() {
   
    char choice;
    char temperature;

    cout << "  Bristy ,Somudro,café ☕🌧️ 🌊\n";
         

    cout << "What calls to you tonight?\n"
         << " (c) Coffee   (e) Espresso   (t) Tea\n"
         << "→ ";
    cin >> choice;

    if (choice == 'c') {
        cout << "\nWarmth or chill?\n"
             << " (h) Hot   (l) Iced\n"
             << "→ ";
        cin >> temperature;

        cout << "\n";
        if (temperature == 'h') {
            cout << "A delicate pour of hot coffee begins...\n"
                 << "Raindrops trace silent paths down the windowpane,\n"
                 << "while the distant murmur of the ocean breathes against the night.\n"
                 << "Perhaps this cup holds more than warmth — perhaps it cradles memory.\n";
        }
        else if (temperature == 'l') {
            cout << "Iced coffee takes form — crystalline and serene.\n"
                 << "The sea’s cool breath mingles with melting frost,\n"
                 << "evoking the hush of rain falling over open water...\n"
                 << "A fleeting shiver of eternity in every sip.\n";
        }
        else {
            cout << "That particular temperament eludes our craft tonight.\n"
                 << "The rain and sea prefer clarity — shall we try again?\n";
        }
    }

    else if (choice == 'e') {
        cout << "\nWarmth or chill?\n"
             << " (h) Hot   (l) Iced\n"
             << "→ ";
        cin >> temperature;

        cout << "\n";
        if (temperature == 'h') {
            cout << "A delicate pour of hot espresso begins...\n"
                 << "Raindrops trace silent paths down the windowpane,\n"
                 << "while the distant murmur of the ocean breathes against the night.\n"
                 << "Perhaps this cup holds more than warmth — perhaps it cradles memory.\n";
        }
        else if (temperature == 'l') {
            cout << "Iced espresso takes form — crystalline and serene.\n"
                 << "The sea’s cool breath mingles with melting frost,\n"
                 << "evoking the hush of rain falling over open water...\n"
                 << "A fleeting shiver of eternity in every sip.\n";
        }
        else {
            cout << "That particular temperament eludes our craft tonight.\n"
                 << "The rain and sea prefer clarity — shall we try again?\n";
        }
    }

    else if (choice == 't') {
        cout << "\nTea unfurls like mist over dawn waves...\n"
             << "Each leaf carries the quiet cadence of rainfall,\n"
             << "a gentle communion between sky and shore.\n"
             << "Rest here a moment — let time dissolve.\n";
    }

    else {
        cout << "\nTonight, only coffee, espresso, and tea whisper their secrets.\n"
             << "The rain and ocean have taught us restraint.\n"
             << "Might you return with a clearer longing?\n";
    }

    cout << "\nThe café remains open beneath the storm and tide.\n"
         << "Come back when the rain remembers your name... 🌧️🌊\n\n";

    return 0;
}