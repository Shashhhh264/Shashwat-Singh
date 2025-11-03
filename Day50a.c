#include <stdio.h>
#include <string.h>
int main() {
    char date[11], month[3];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int d, m, y;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    printf("%02d-%s-%d", d, months[m-1], y);
    return 0;
}
