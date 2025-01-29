#include <stdio.h>
int clearbit(int num,int pos){
    return num & (1 << pos);
}
int main() {
    int num,pos;
    scanf("%d %d",&num,&pos);
    int updated_num = clearbit(num,pos);
    printf("%d",updated_num);
    return 0;
}