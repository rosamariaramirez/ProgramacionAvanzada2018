#include <stdlib.h>
#include <stdio.h>
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

int cmp(const void *A,const void *B) {
    struct entry *a=(struct entry *)A;
    struct entry *b=(struct entry *)B;
    if((*a).u==(*b).u) return ((*a).v-(*b).v);
    else return (*a).u-(*b).u;
} 

void count_sort(struct entry L[],int N) {                                       
    int i;
	for(i=0;i<MAXN;i++) {
        CNT[i]=0;
    }
	
    for(i=0;i<N;i++){
		CNT[L[i].v] ++;
    }

	for(i=1;i<MAXN;i++){
        CNT[i] += CNT[i - 1];
    } 

	for(i=N-1;i>=0;i--){
		TEMP[CNT[L[i].v]-1] = L[i];
		CNT[L[i].v] --;
	}

	for(i=0;i<MAXN;i++){
        CNT[i]=0;
    }

	for(i=0;i<N;i++){
		CNT[L[i].u] ++;
    }

	for(i=1;i<MAXN;i++){
        CNT[i] += CNT[i - 1];
    } 

	for(i=N-1;i>=0;i--) {
		L[CNT[TEMP[i].u]-1] = TEMP[i];
		CNT[TEMP[i].u] --;
	}
}

void create_suffix_array(char S[], int N)
     {
      int i,stp,cnt;
      
      for (i = 0; i < N; i++){ 
          P[0][i] = S[i] - 'a'+1;
      }

      for(stp=1,cnt=1; cnt>>1<N; stp++,cnt<<=1)
          {
           for(i=0;i<N;i++)
               {
                L[i].i=i;
                L[i].u=P[stp-1][i];
                L[i].v = i + cnt < N ? P[stp - 1][i + cnt] : -2;
                L[i].v+=2;
               }

           count_sort(L,N);

           int k=0;
           P[stp][L[0].i]=k;
           for(i=1;i<N;i++)
              {
               if(L[i-1].u!=L[i].u || L[i-1].v!=L[i].v) k++;
               P[stp][L[i].i]=k; 
              }

          }
      for(i=0;i<N;i++) SUF[i]=L[i].i;
      
     }
 
void create_lcp_array(int N)
     {
      int i,k,stp,cnt;
      LCP[0]=0;
      for(stp=1,cnt=1; cnt>>1<N; stp++,cnt<<=1);
      for(i=1; i<N; i++)
          {
           int res=0;
           int x=SUF[i];
           int y=SUF[i-1];
           for(k=stp-1;k>=0 && x< N && y <N;k--) if (P[k][x] == P[k][y]) x+=1<<k,y+=1<<k,res+=1<< k;
           LCP[i]=res;   
          }
     }
 
 
long long substr_count(int n,char S[]){
    int i = 0;
    create_suffix_array(S,n);
    create_lcp_array(n);
    long long res;
    res = 1LL * n * (n+1)/2;
    for(i=0; i<n; i++){ 
        res -= LCP[i];
    }
    return res;
}