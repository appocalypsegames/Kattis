main(c,n,a){
    n=0;
    for(scanf("%i",&c);c--;){
        scanf("%i",&a);
        if(a<0)n++;
    }
    printf("%i",n);
}