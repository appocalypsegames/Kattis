main(a,b,c,n){
    scanf("%i%i%i%i",&a,&b,&c,&n);
    if(a>0&&b>0&&c>0&&a+b+c>=n&&n>2){
        printf("YES");
    }else{
        printf("NO");
    }
}