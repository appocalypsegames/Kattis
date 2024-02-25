main(n,m,d){
    scanf("%d%d",&n,&m);
    d=n-m;
    if (d>0)
        printf("Dr. Chaz needs %d more piece%s of chicken!",d,d==1?"":"s");
    else
        printf("Dr. Chaz will have %d piece%s of chicken left over!",-d,d==-1?"":"s");
}
