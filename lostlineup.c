main(n,i){
    int c[100],d[100];
    scanf("%i",&n);
    for(i=0;i<n-1;i++)scanf("%i",&c[i]);
    for(i=0;i<n-1;i++)d[c[i]+1]=i+2;
    printf("1");
    for(i=1;i<n;i++)printf(" %i",d[i]);
}