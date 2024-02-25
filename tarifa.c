main(){
    int x,n,p,i,r=0;
    scanf("%i%i",&x,&n);
    for(i=0;i<n;i++){
        scanf("%i",&p);
        r+=x-p;
    }
    printf("%i",r+x);
}