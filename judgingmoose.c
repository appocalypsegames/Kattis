main(l,r){
    scanf("%i%i",&l,&r);
    if(l==0&&r==0)printf("Not a moose");
    else if(l==r)printf("Even %i",l+r);
    else if(l>r)printf("Odd %i",l*2);
    else printf("Odd %i",r*2);
}