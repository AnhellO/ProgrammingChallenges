#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define SETTRUE(f) flag = true;
using namespace std;

int hrs[4], mins[4], time, fMins, fHrs, i, tMins[4], days;
bool flag = false;

int getTotalMinutes(int hr, int m)
{
    return hr * 60 + m;
}

void getTime(int time)
{
    fMins = time % 60;
    time /= 60;
    fHrs = time % 24;
    time /= 24;
    days = time % 7;
}

int main()
{
    scanf("%d:%d %d:%d %d:%d %d:%d", &hrs[0], &mins[0], &hrs[1], &mins[1], &hrs[2], &mins[2], &hrs[3], &mins[3]);

    FOR(i, 0, 4, 1)
        tMins[i] = getTotalMinutes(hrs[i], mins[i]);

    FOR(i, 0, 10000, 1)
    {
        time = tMins[0] + tMins[2] * i;
        if(time < tMins[1] || (time - tMins[1]) % tMins[3] != 0)
            continue;
        SETTRUE(flag);
        getTime(time);
        switch(days)
        {
            case 0: printf("Saturday\n");
                break;
            case 1: printf("Sunday\n");
                break;
            case 2: printf("Monday\n");
                break;
            case 3: printf("Tuesday\n");
                break;
            case 4: printf("Wednesday\n");
                break;
            case 5: printf("Thursday\n");
                break;
            case 6: printf("Friday\n");
                break;
        }
        printf("%02d:%02d\n", fHrs, fMins);
        break;
    }
    if(!flag) printf("Never\n");
    return 0;
}