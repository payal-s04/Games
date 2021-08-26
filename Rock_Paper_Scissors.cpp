#include <bits/stdc++.h>
using namespace std;

int main()
{
    // For every different seed value used in a call to srand, the pseudo-random number generator can be expected to generate a different succession of results in the subsequent calls to rand.
    srand(time(NULL));

    // Random number generated for Computer's Side
    int Comp = rand() % 3 + 1;
    int User = 0;

    // ** Game Start **
    cout << "###################################################" << endl;
    cout << "########### !!! Rock Paper Scissors !!! ###########" << endl;
    cout << "###################################################" << endl;

    cout << endl << endl;

    string Rock = "Rock";// "✊ Rock ✊";
    string Paper = "Paper";//"✋ Paper ✋";
    string Scissor = "Scissor";//"✌️ Scissor ✌️";

    // Taking input from user

    cout << "\t\t##### Choose #####" << endl << endl;

    cout << "\t\t     1)" << Rock << endl;
    cout << "\t\t     2)" << Paper << endl;
    cout << "\t\t     3)" << Scissor << endl;

    cout << endl << "\t\t   Number :- ";

    cin >> User;

    if(User != 1 && User != 2 && User != 3)
    {
        cout << "\t### Invalid Option ###" << endl;
        return 0;
    }

    cout << endl << endl;

    // Result

    if (User == Comp)
    {
        cout << "\t********** !!! Draw !!! **********" << endl;//"********** 🎊 !!! Draw !!! 🎊 **********" << endl;
    }
    else if (User == 1 && Comp == 3)
    {
        cout << "     ********** !!! You Win !!! **********" << endl;//"********** 🎉🥂 !!! You Win !!! 🥂🎉 **********" << endl;
    }
    else if (User == 3 && Comp == 2)
    {
        cout << "     ********** !!! You Win !!! **********" << endl;//"********** 🎉🥂 !!! You Win !!! 🥂🎉 **********" << endl;
    }
    else if (User == 2 && Comp == 1)
    {
        cout << "     ********** !!! You Win !!! **********" << endl;//"********** 🎉🥂 !!! You Win !!! 🥂🎉 **********" << endl;
    }
    else
    {
        cout << "   ********** !!! Computer Win !!! **********" << endl;//"********** 😢 !!! Computer Win !!! 😢 **********" << endl;
    }

    cout << endl << endl;

    // Displaying user's input

    cout << "\t      ##### You Chose #####" << endl;

    switch (User)
    {
    case 1:
    {
        cout << "\t\t       " <<  Rock << endl;
        break;
    }
    case 2:
    {
        cout << "\t\t      " <<  Paper << endl;
        break;
    }
    case 3:
    {
        cout << "\t\t     " <<  Scissor << endl;
        break;
    }
    default:
    {
        cout << "\t\t" <<  "Invalid Option" << endl;
    }
    }

    cout << endl;

    //Displaying computer choice

    cout << "\t    ##### Computer Chose #####" << endl;

    switch (Comp)
    {
    case 1:
    {
        cout << "\t\t       " << Rock << endl;
        break;
    }
    case 2:
    {
        cout << "\t\t      " << Paper << endl;
        break;
    }
    case 3:
    {
        cout << "\t\t     " << Scissor << endl;
        break;
    }
    default:
    {
        cout << "\t" << "Invalid Option" << endl;
    }
    }

    return 0;
}
