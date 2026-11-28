// Departure time Arrival time
//  8:00 a.m. 10:16 a.m.
//  9:43 a.m. 11:52 a.m.
//  11:19 a.m. 1:31 p.m.
//  12:47 p.m. 3:00 p.m.
//  2:00 p.m. 4:08 p.m.
//  3:45 p.m. 5:55 p.m.
//  7:00 p.m. 9:20 p.m.
//  9:45 p.m. 11:58 p.m

#include <stdio.h>
#include <stdlib.h>
int hour_to_min(int hour, int min);
void min_to_hour(int *d_min, int *d_hour, int *a_min, int *a_hour);
void find_closest_flight(int entered_time);

int dep_time, arr_time;
char d = 'a', a = 'a';
int main()
{
    int entered_hour, entered_min, entered_time, depart_min, depart_hour, arival_min, arrival_hour;
    printf("Enter 24-hour time: ");
    scanf("%d:%d", &entered_hour, &entered_min);

    entered_time = hour_to_min(entered_hour, entered_min);
    find_closest_flight(entered_time);
    

    min_to_hour(&depart_min, &depart_hour, &arival_min, &arrival_hour);

    if (dep_time >= (12 * 60))
    {
        d = 'p';
        depart_hour-=12;
    }
    if (arr_time >= (12 * 60))
    {
        a = 'p';
        arrival_hour-=12;
    }

    printf("The closest departure time is %d:%d %cm and arrival time is %d:%d %cm.", depart_hour, depart_min, d, arival_min, arrival_hour, a);
    return 0;
}

int hour_to_min(int hour, int min)
{
    return (hour * 60) + min;
}

void min_to_hour(int *d_min, int *d_hour, int *a_min, int *a_hour)
{
    *d_hour = dep_time / 60;
    *d_min = dep_time % 60;

    *a_hour = arr_time / 60;
    *a_min = arr_time % 60;

    return;
}

void find_closest_flight(int entered_time)
{
    int di, ar, dep;
    int depart[8] = {hour_to_min(8, 0), hour_to_min(9, 43), hour_to_min(11, 19), hour_to_min(12, 47), hour_to_min(12 + 2, 0), hour_to_min(12 + 3, 45), hour_to_min(12 + 7, 0), hour_to_min(12 + 9, 45)};
    int arrival[8] = {hour_to_min(10, 16), hour_to_min(11, 52), hour_to_min(12 + 1, 31), hour_to_min(12 + 3, 0), hour_to_min(12 + 4, 8), hour_to_min(12 + 5, 55), hour_to_min(12 + 9, 20), hour_to_min(12 + 11, 58)};
    int diff[8];

    for (int i = 0; i < 8; i++)
    {
        diff[i] = abs(entered_time - depart[i]);
    }
    di = diff[0];
    dep = depart[0];
    ar = arrival[0];
    for (int i = 0; i < 8; i++)
    {
        if (diff[i] < di)
        {
            di = diff[i];
            dep = depart[i];
            ar = arrival[i];
        }
    }

    dep_time = dep;
    arr_time = ar;
    return;
}
