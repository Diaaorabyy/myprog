#include <iostream>

using namespace std;

    struct student
    {
        string firstname, lastname;

        int score;
        
        string grade;
    };

void set_data(student st[]);

string check_score(student st);

void print_data(student st[]);

void highest_score(student score[20]);

int main()
{
    student st[20];

    set_data(st);

    print_data(st);

    highest_score(st);

    return 0;
}
void set_data(student st[])
{
    for (size_t i = 0; i < 3; i++)

    {

        cout << "for student number " << i + 1 << ":-\n\n";

        cout << "plz, enter first name::\n";

        cin >> st[i].firstname;

        cout << "plz, enter last name:: \n";

        cin >> st[i].lastname;

        cout << "plz, enter score::\n";

        cin >> st[i].score;

        st[i].grade = check_score(st[i]);
    }
}
string check_score(student st)
{
    string x;
    if (st.score < 50)
    {
        x = "F";
    }
    else if (st.score >= 50 && st.score < 55)
    {
        x = "D-";
    }
    else if (st.score >= 55 && st.score < 60)
    {
        x = "D";
    }
    else if (st.score >= 60 && st.score < 65)
    {
        x = "D+";
    }
    else if (st.score >= 65 && st.score < 70)
    {
        x = "C";
    }
    else if (st.score >= 70 && st.score < 75)
    {
        x = "C+";
    }
    else if (st.score >= 75 && st.score < 80)
    {
        x = "B";
    }
    else if (st.score >= 80 && st.score < 85)
    {
        x = "B+";
    }
    else if (st.score >= 85 && st.score < 90)
    {
        x = "A-";
    }
    else if (st.score >= 90 && st.score < 95)
    {
        x = "A";
    }

    else

        x = "A+";

    return x;
}

void print_data(student st[])

{

    for (size_t i = 0; i < 3; i++)
    {
        cout << st[i].firstname << " " << st[i].lastname << "\t" << st[i].score << "\t" << st[i].grade << endl;
    }
}

void highest_score(student st[])
{
    for (size_t i = 1; i < 20; i++)
    {
        if (st[0].score < st[i].score)

        {
            st[0] = st[i];
        }
    }
    cout << st[0].firstname << " " << st[0].lastname << " has the highest score with " << st[0].score << endl;
}