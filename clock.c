#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    int h,m, s, d=1000;
    printf("Set Clock: " );
    scanf("%d%d%d" , &h, &m,&s);

    if(h>12 && m>60 && s>60){
        printf("ERROR");
    }
    else{
    while(1){
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }

        printf("DIGITAL CLOCK: \n");
        printf("%02d:%02d:%02d" , h ,m ,s);
        Sleep(d);
        system("cls");
    }
}
}