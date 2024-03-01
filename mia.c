int e(int a,int b) {
    if (a==b)return a*100+b;
    else if (a==1&&b==2||a==2&&b==1)return 1000;
    else return a>b?a*10+b:b*10+a;
}

main(a,b,c,d) {
    while(1){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==0)break;
        int s=e(a,b);
        int p=e(c,d);
        puts(s>p?"Player 1 wins.":p>s?"Player 2 wins.":"Tie.");
    }
}
