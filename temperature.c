main(){
    double x,y;
    scanf("%lf %lf",&x,&y);
    if(x==0 && y==1){
        printf("ALL GOOD");
    }else if(y==1){
        printf("IMPOSSIBLE");
    }else{
        printf("%lf",x-((x*(1/(y-1)))*y));
    }
}