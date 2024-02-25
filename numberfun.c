main(n,a,b,c){
    for(scanf("%i",&n);n;n--){
        scanf("%i%i%i",&a,&b,&c);
        puts(a+b==c||a-b==c||b-a==c||(a/b==c&&a%b==0)||(b/a==c&&b%a==0)||b*a==c?"Possible":"Impossible");
    }
}