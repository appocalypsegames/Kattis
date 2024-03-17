main(r,c,i,t,j,f,e){
    char s[200][200];
    scanf("%i%i",&r,&c);
    t=e=j=f=i=0;
    for(;i<r;i++)scanf("%s",s[i]);
    i=0;
    while(e==0){
        if(i<0||j<0||j>=c||i>=r) break;
        if(s[i][j]=='E'){
            s[i][j]='P';
            j++;
            t++;
        }else if(s[i][j]=='W'){
            s[i][j]='P';
            j--;
            t++;
        }else if(s[i][j]=='N'){
            s[i][j]='P';
            i--;
            t++;
        }else if(s[i][j]=='S'){
            s[i][j]='P';
            i++;
            t++;
        }else if(s[i][j]=='T'){
            e=1;
        }else{
            f=1;
            break;
        }
    }
    e?printf("%i",t):f?puts("Lost"):puts("Out");
}