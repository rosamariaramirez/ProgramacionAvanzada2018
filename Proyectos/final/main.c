#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "difference.h"

#define MAXN 200009
#define MAXLG 20
 
char s[MAXN];
char c[MAXN];
//defining a Struct
struct entry { 
    int i,u,v;
} L[MAXN];

int P[MAXLG][MAXN];
int SUF[MAXN];
int LCP[MAXN];
struct entry TEMP[MAXN];
int CNT[MAXN];

int cmp(const void *,const void *); 
void count_sort(struct entry, int);
void create_suffix_array(char [], int );
void create_lcp_array(int );
long long substr_count(int,char []);

int main(int argc, char **argv) {
  /* Start your code here */
  scanf("%s",s);
        long long ans1 = substr_count(strlen(s),s);
        int n = strlen(s)+1;
	scanf("%s",c);
	long long ans2 = substr_count(strlen(c),c);
	int m = strlen(c)+1;
	char temp[]={'a'-1,'\0'};
	strcat(s,temp);
	strcat(s,c);
	long long ans3 = substr_count(strlen(s),s)-(long long)n*(long long)m;
	long long ans = 2*ans3-ans1-ans2;
	printf("%lld\n",ans);
	
  return 0;
}
