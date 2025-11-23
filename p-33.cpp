#include <bits/stdc++.h>
using namespace std;

char getGrade(int x) {
    if (x < 60) return 'F';
    else if (x<=69)
    return 'D';
    else if (x<=79)
    return 'C';
    else if (x<=89)
    return 'B';
    else return 'A';
}

int main(){

    int A,B;
    cin >> A>>B;
    char gradeSimba=getGrade(A);
    char gradePumbaa=getGrade(B);

    cout<<gradeSimba<<' '<< gradePumbaa<< '\n';

    return 0;
}

