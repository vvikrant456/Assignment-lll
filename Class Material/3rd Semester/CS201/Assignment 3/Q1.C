//AUTHOR : Dharani Pamidimukkala
//scholar id:2012137
#include<stdio.h>

long long compute_hash(char *s)
{
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long ppower = 1;
    for (int c=0;c<strlen(s);c++) {
        hash_value = (hash_value + (s[c] - 'A' + 1) * pppower) % m;
        ppower = (ppower * p) % m;
    }
    return hash_value;
}
int main()
{
    char s[1000];
    printf("Enter the String in upper case)\n");
    scanf("%[^\n]s",s);
    printf("Hash value: %ld",compute_hash(s));
}
