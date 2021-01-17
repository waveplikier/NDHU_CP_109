#include <stdio.h>

int current_height, current_height, wall_height, meters_per_day, meters_down_per_day, days;

void main(){
    scanf("%d %d %d", wall_height, meters_per_day, meters_down_per_day);

    if(meters_per_day <= meters_down_per_day){
        printf("-1");
    }
    else{
        for (current_height = 0;current_height >= wall_height;) {
            current_height += meters_per_day;
            if (current_height >= wall_height) {
                break;
            current_height -= meters_down_per_day;
            days += 1;
            }
        }
    }
    printf("%d", days);

    return 0;

}
