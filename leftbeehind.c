main(l,r){
    for(;scanf("%i%i",&l,&r)&&l!=0||r!=0;){
        if(l+r==13)puts("Never speak again.");
        else if(l>r)puts("To the convention.");
        else if(r>l)puts("Left beehind.");
        else puts("Undecided.");
    }
}