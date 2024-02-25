main(c,a,b,d){
    for(scanf("%i",&c);c>0;c--){
        scanf("%i%i%i",&a,&b,&d);
        puts(b-d>a?"advertise":b-d<a?"do not advertise":"does not matter");
    }
}