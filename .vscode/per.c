# include <stdio.h>
int main(){
    char ch[100];
    scanf("%[^\n]%*c",ch);
    printf("%c\n", ch);
    return 0;
}
