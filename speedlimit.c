main(c,m,h,a,r,i){
    scanf("%i",&c);
    while(c>0){
        a=r=0;
        for(i=0;i<c;i++){
            scanf("%i%i",&m,&h);
            r+=m*(h-a);
            a+=h-a;
        }
        printf("%i miles\n",r);
        scanf("%i",&c);
    }
}