//Display Prime Numbers Between Two Intervals
#include <stdio.h>
int main(){
    int a,b,i,j,flag;
    printf("enter the two intervals:\n");
    scanf("%d %d"\n,&a,&b);
    printf("prime no’s present in between %d and %d:\n",a,b);
    for(i=a+1;i<b;i++){ 
        flag=0;
        for(j=2;j<=i/2;++j){ 
            if(i%j==0){
                flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d\n",i);
    }
    return 0;
}
