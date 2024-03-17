main(a,b,i,t,j){
    char c;
    scanf("%i%i",&a,&b);
    getchar();
    t=0;
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            scanf("%c",&c);
            if(c=='.')t++;
        }
        getchar();
    }
    printf("%f",(float)t/(a*b));
}
