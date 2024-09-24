/*Challenge 4*/

#include <stdio.h>

int main(){
    int km_h;
    float m_s;
    printf("Please write the speed in Km/h : ");
    scanf("%d",&km_h);
    m_s = km_h * 0.27778;
    printf("%d Km/h = %.2f m/s",km_h,m_s);
    return 0;
}