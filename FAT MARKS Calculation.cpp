#include <iostream>
using namespace std;

void predict_grade(int score)
{
    if (score < 50)
    {
        cout << "\nRe-registration Time\n";
    }
    else if (score >= 50 && score < 55)
    {
        cout << "\nYou got lucky. E grade\n";
    }
    else if (score >= 55 && score < 60)
    {
        cout << "\nLooks like someone's getting the D\n";
    }
    else if (score >= 60 && score < 70)
    {
        cout << "\nC grade incoming\n";
    }
    else if (score >= 70 && score < 80)
    {
        cout << "\nLooks like you're in the middle of the pack. Expect either a B or an A if your class average is really low\n";
    }
    else if (score >= 80 && score < 90)
    {
        cout << "\nCongratulations on getting the A\n";
    }
    else
    {
        cout << "\nYou're the reason your class average is so high. S grade on the charts\n";
    }
}

void calculate(int option)
{
    float DA1, DA2, DA3, CAT1, CAT2, ADD, sum, final_sum;
    float lab_internals, proj_internals;
    if (option == 4)
    {
        cout << "Enter Predicted Project Review marks out of 100 (20+30+50): ";
        cin >> proj_internals;
        cout << "Enter marks scored in theory out of 100: ";
        cin >> final_sum;
        final_sum = (final_sum / 100) * 33.3334 + (proj_internals / 100) * 66.667;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade(final_sum);
        return;
    }
    cout << "Enter DA1 Marks: ";
    cin >> DA1;
    cout << "Enter DA2 Marks: ";
    cin >> DA2;
    cout << "Enter DA3 Marks: ";
    cin >> DA3;
    cout << "Enter CAT1 Marks weightage (Out of 15): ";
    cin >> CAT1;
    cout << "Enter CAT2 Marks weightage (Out of 15): ";
    cin >> CAT2;
    cout << "Enter Additional Learning Marks (Enter 0 if not applicable): ";
    cin >> ADD;
    sum = DA1 + DA2 + DA3 + CAT1 + CAT2;
    final_sum = (sum / 60) * 40;
    sum += ADD;
    if (sum > 60)
        sum = 60;
    final_sum += sum;
    if (option == 1)
    {
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade(final_sum);
        return;
    }
    else if (option == 2)
    {
        cout << "Enter Lab internal marks out of 60: ";
        cin >> lab_internals;
        final_sum = (final_sum / 100) * 75 + (lab_internals / 60) * 25;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade(final_sum);
        return;
    }
    else if (option == 3)
    {
        cout << "Enter Predicted Project Review marks out of 100 (20+30+50): ";
        cin >> proj_internals;
        final_sum = (final_sum / 100) * 75 + (proj_internals / 100) * 25;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade(final_sum);
        return;
    }
    else if (option == 5)
    {
        cout << "Enter Lab internal marks out of 60: ";
        cin >> lab_internals;
        cout << "Enter Predicted Project Review marks out of 100 (20+30+50): ";
        cin >> proj_internals;
        final_sum = (final_sum / 100) * 50 + (proj_internals / 100) * 25 + (lab_internals / 60) * 25;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade(final_sum);
        return;
    }
}

int main()
{
    int option;
choice:
    cout << "Enter the type of course:\n\n1) Theory Only (any no of credis) \n2) Theory + Lab (4 credits) \n3) Theory + Project (4 credits) \n4) TARP \n5) Theory + Lab + Project (4 credits)\n";
    cout << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        calculate(1);
        break;
    case 2:
        calculate(2);
        break;
    case 3:
        calculate(3);
        break;
    case 4:
        calculate(4);
        break;
    case 5:
        calculate(5);
        break;
    default:
        cout << "Enter a valid option: " << endl;
        goto choice;
    }
    while (true)
    {
        cout << "\n\n\nDo you want to check for another subject? 1-Yes 2-No" << endl;
        cin >> option;
        if (option == 1)
            goto choice;
        break;
    }
    return 0;
}
