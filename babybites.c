main(c,i,b,t,n){
    scanf("%i",&c);
    char a[6];
    b=t=1;
    for(i=0;i<c;i++){
       scanf("%s",a);
       if(a[0]=='0'){
            b=0;
       }else{
            n=atoi(a);
            if(n!=0&&t!=n){
                b=0;
            }
       }
       t++;
    }
    puts(b?"makes sense":"something is fishy");
}