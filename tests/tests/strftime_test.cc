#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <iostream>

int main(void)
{
    char buff[70];
    struct tm my_time;
    my_time.tm_year = 112;
    my_time.tm_mon = 9;
    my_time.tm_mday = 9;
    my_time.tm_hour = 8;
    my_time.tm_min = 10;
    my_time.tm_sec = 20;
 
    const std::string& format = "%Y-%m-%d %H:%M:%S";

    if (strftime(buff, sizeof(buff), format.c_str(), &my_time)) {
        puts(buff);
    } else {
        puts("strftime failed");
    }
 
    setlocale(LC_TIME, "el_GR.utf8");
 
    if (strftime(buff, sizeof(buff), format.c_str(), &my_time)) {
        puts(buff);
    } else {
        puts("strftime failed");
    }
}
