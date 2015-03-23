#include<stdio.h>
#include<math.h>
char funcOne(int x, int y){ return x<y==(-x)>(-y); }
char funcTwo(int x, int y){ return ((x+y)<<4) + y -x == 17*y + 15*x; }
char funcThr(int x, int y){ return ~x+~y+1 == ~(x+y); }
char funcFou(int x, int y){ return (unsigned)x - (unsigned)y == -(y-x); }
char funcFiv(int x, int y){ return x>=0 || x< (unsigned)x; }

int func(int x, int y){
        printf("X is %x,\t\t Y is %x.  ",x,y);
        if(funcOne(x,y)){
                printf("True\n");
        }else{
                printf("False\n");
        }
        return 0;
}

int main(){
        int corners[10];
        corners[0] = 0;
        corners[1] = pow(2,31)-1;
        corners[2] = pow(2,31)-7;
        corners[3] = 7343;
        for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                        func(corners[i],corners[j]);
                }
        } 
}