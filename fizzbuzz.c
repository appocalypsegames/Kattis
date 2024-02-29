main(x,y,n,i){
    scanf("%i%i%i",&x,&y,&n);
    for(i=1;i<=n;i++){
        if(i%x==0||i%y==0)puts(i%x==0&&i%y==0?"FizzBuzz":i%x==0?"Fizz":"Buzz");
        else printf("%i\n",i);
    }
}