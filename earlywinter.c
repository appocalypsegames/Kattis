main(n,d,a,i,r){
    scanf("%i%i",&n,&d);
    r=-1;
    for(i=0;i<n;i++){
       scanf("%i",&a);
       if(a<=d&&r==-1){
           r=i;
       }
    }
    if(r<0)puts("It had never snowed this early!");
    else printf("It hadn't snowed this early in %i years!",r);
}