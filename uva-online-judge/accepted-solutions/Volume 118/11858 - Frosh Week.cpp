#include <stdio.h>

long long a[1000010], b[1000010], count;
int n;
bool Flag;

void Enter() {
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
}

void Merge(long long x[], long long y[], int a, int b, int c) {
    int p=a,i=a,j=b+1;
    
    while (i<=b && j<=c) {
        if (x[i]<x[j]) y[p]=x[i++];
        else {
            count += j-p;
            y[p]=x[j++];
        }
        p++;
    }
    
    if (i<=b)
        for (;i<=b;i++) y[p++]=x[i];
    else
        for (;j<=c;j++) y[p++]=x[j];
}

void MergebyLength(long long x[], long long y[], int len) {
    int a=1, b=len, c=2*len;
    
    while (c<=n) {
        Merge(x,y,a,b,c);
        a=a+2*len; b=b+2*len; c=c+2*len;
    }
    if (b<=n) Merge(x,y,a,b,n);
    else if (a<=n) {
        for (int i=a;i<=n;i++) y[i]=x[i];
    }
}

main() {
//    freopen("495inp.txt","r",stdin);
//    freopen("495out.txt","w",stdout);
    int i,len;
    while (scanf("%d",&n)!=EOF) {
        Enter();
        len=1; Flag=true; count=0;
        while (len<n) {
            if (Flag) MergebyLength(a,b,len);
            else MergebyLength(b,a,len);
            len=len*2;
            Flag=!Flag;
        }
/*        if (!Flag) {
            for (i=1;i<=n;i++) printf("%d ",b[i]);
            printf("\n");
        }
        else {
            for (i=1;i<=n;i++) printf("%d ",a[i]);
            printf("\n");
        } */
//        if (count%2) printf("Marcelo\n");
//        else printf("Carlos\n");
        printf("%lld\n",count);
    }
}
