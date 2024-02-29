main(n,m,p,i,a){
    i=0;
    while(scanf("%i",&n)==1){
        i++;
        n--;
        scanf("%i",&a);
        m=a;
        p=a;
        for(;n;n--){
            scanf("%i",&a);
            if(a>m)m=a;
            if(a<p)p=a;
        }
        printf("Case %i: %i %i %i\n",i,p,m,m-p);
    }
}