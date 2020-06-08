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
        cout << "\nYou got lucky. Most likely an E grade\n";
    }
    else if (score >= 55 && score < 60)
    {
        cout << "\nLooks like someone's probably getting the D\n";
    }
    else if (score >= 60 && score < 70)
    {
        cout << "\nC grade incoming. B if your class average is really really low (very unlikely)\n";
    }
    else if (score >= 70 && score < 80)
    {
        cout << "\nLooks like you're in the middle of the pack. Expect either a B or an A if your class average is really low. Might drop to C if class average is really high.\n";
    }
    else if (score >= 80 && score < 90)
    {
        cout << "\nYou're most likely getting an A. But if your class average is low , this might be an S. On the flip side , if class average is high then you are might be getting a B\n";
    }

    else if (score >= 90 && score < 94)
    {
        cout << "\nYou're most likely getting an S. If your class average is insanely high then you might be getting an A\n";
    }
    else
    {
        cout << "\nYou're the reason your class average is so high. S grade on the charts . But don't quote me on this , stranger things have happend before. *cough* *French* *cough* *cough*\n";
    }
}

void predict_grade_absolute(int score)
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
        cout << "\nLooks like you're in the middle of the pack. B Grade\n";
    }
    else if (score >= 80 && score < 90)
    {
        cout << "\nYou're getting an A\n";
    }

    else
    {
        cout << "\nYou have achieved the impossible. S grade in an absolute graded course. People will construct statues in your honor\n";
    }
}
void calculate(int option)
{
    float DA1, DA2, DA3, CAT1, CAT2, ADD, sum, final_sum, quiz1, quiz2;
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
    else if (option == 6)
    {
        cout << "Enter CAT1 Marks weightage (Out of 15): ";
        cin >> CAT1;
        cout << "Enter CAT2 Marks weightage (Out of 15): ";
        cin >> CAT2;
        cout << "Enter Quiz-1 Marks (Out of 15): ";
        cin >> quiz1;
        cout << "Enter Quiz-2 Marks (Out of 15): ";
        cin >> quiz2;
        sum = CAT1 + CAT2 + quiz1 + quiz2;
        final_sum = (sum / 60) * 100;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade_absolute(final_sum);
        return;
    }
    else if (option == 8)
    {
        cout << "Enter Predicted Project Review marks out of 100 (20+30+50): ";
        cin >> proj_internals;
        final_sum = proj_internals;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade_absolute(final_sum);
    }
    else if (option == 9)
    {
        cout<< "Enter marks scored in internals for Theory Component(Out of 60): ";
        cin >> sum;
        cout << "Enter Predicted Project Review marks out of 100 (20+30+50): ";
        cin >> proj_internals;
        final_sum = (sum / 60) * 50 + (proj_internals / 100) * 50;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade_absolute(final_sum);
        return;
    }
    cout << "Enter CAT1 Marks weightage (Out of 15): ";
    cin >> CAT1;
    cout << "Enter CAT2 Marks weightage (Out of 15): ";
    cin >> CAT2;
    cout << "Enter DA1 Marks: ";
    cin >> DA1;
    cout << "Enter DA2 Marks: ";
    cin >> DA2;
    cout << "Enter DA3 Marks: ";
    cin >> DA3;
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
    else if (option == 7)
    {
        cout << "Enter Predicted Project Review marks out of 100 (20+30+50): ";
        cin >> proj_internals;
        final_sum = (final_sum / 100) * 50 + (proj_internals / 100) * 50;
        cout << "Final Score for this subject out of 100 is " << final_sum;
        predict_grade(final_sum);
        return;
    }
}

int main()
{
    int option;
choice:
    cout << "Enter the type of course:\n\n1) Theory Only (any no of credits) \n2) Theory + Lab (4 credits) \n3) Theory + Project (4 credits) \n4) TARP \n5) Theory + Lab + Project (4 credits)\n6) Soft Skills\n7) Theory + Project (2 credits)\n8) IIP (PHY1901)\n9) IIP (PHY1999)\n";
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
    case 6:
        calculate(6);
        break;
    case 7:
        calculate(7);
        break;
    case 8:
        calculate(8);
        break;
    case 9:
        calculate(9);
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
