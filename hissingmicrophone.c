main(i,e){
    char s[30];
    scanf("%s",s);
    i=0;
    e=1;
    while(i<strlen(s)-1&&e){
        if(s[i]=='s'&&s[i+1]=='s'){
            puts("hiss");
            e=0;
        }
        i++;
    }
    if(e)puts("no hiss");
}
