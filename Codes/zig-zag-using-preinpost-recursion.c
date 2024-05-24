#include <stdio.h>
void pip(n){
    if(n==0) return;
    printf("%d",n);
    pip(n-1);
    printf("%d",n);
    pip(n-1);
    printf("%d",n);
    return;
}
int main()
{ int n; scanf("%d",&n); 
pip(n);
    return 0;
}
