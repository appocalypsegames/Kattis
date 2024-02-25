main(c,n){
    scanf("%i",&c);
    while(c>0){
        scanf("%i",&n);
        n%2==0?printf("%i is even\n",n):printf("%i is odd\n",n);
        c--;
    }
}